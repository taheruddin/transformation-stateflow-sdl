from __future__ import absolute_import


import threading, time, sys, os, ctypes

import DV
try:
    PythonAccess = ctypes.cdll.LoadLibrary("./PythonAccess.so")
except OSError:
    folder = os.path.dirname(os.path.abspath(__file__))
    PythonAccess = ctypes.cdll.LoadLibrary(folder + "/PythonAccess.so")
    sys.path.append(folder)
OpenMsgQueueForReading = PythonAccess.OpenMsgQueueForReading
OpenMsgQueueForReading.restype = ctypes.c_int
CloseMsgQueue =  PythonAccess.CloseMsgQueue
GetMsgQueueBufferSize = PythonAccess.GetMsgQueueBufferSize
GetMsgQueueBufferSize.restype = ctypes.c_int
RetrieveMessageFromQueue = PythonAccess.RetrieveMessageFromQueue
RetrieveMessageFromQueue.restype = ctypes.c_int
import dataview_uniq_asn
i_out_msg = ctypes.c_int.in_dll(PythonAccess, "ii_out_msg").value
i_get_init_tmpr = ctypes.c_int.in_dll(PythonAccess, "ii_get_init_tmpr").value
SendTC_get_init_tmpr = PythonAccess.SendTC_get_init_tmpr
i_get_init_water = ctypes.c_int.in_dll(PythonAccess, "ii_get_init_water").value
SendTC_get_init_water = PythonAccess.SendTC_get_init_water
i_for_water = ctypes.c_int.in_dll(PythonAccess, "ii_for_water").value
SendTC_for_water = PythonAccess.SendTC_for_water
i_for_water_tmpr = ctypes.c_int.in_dll(PythonAccess, "ii_for_water_tmpr").value
SendTC_for_water_tmpr = PythonAccess.SendTC_for_water_tmpr
i_for_coffee = ctypes.c_int.in_dll(PythonAccess, "ii_for_coffee").value
SendTC_for_coffee = PythonAccess.SendTC_for_coffee
i_for_ticking = ctypes.c_int.in_dll(PythonAccess, "ii_for_ticking").value
SendTC_for_ticking = PythonAccess.SendTC_for_ticking

class Poll_gui(threading.Thread):
    def run(self):
        self._bDie = False
        while True:
            if self._bDie:
                return
            self._msgQueue = OpenMsgQueueForReading(str(os.geteuid()) + "_gui_PI_Python_queue")
            if (self._msgQueue != -1): break
            print "Communication channel over %d_gui_PI_Python_queue not established yet...\n" % os.geteuid()
            time.sleep(1)
        bufferSize = GetMsgQueueBufferSize(self._msgQueue)
        self._pMem = ctypes.create_string_buffer(bufferSize).raw
        while not self._bDie:
            self.messageReceivedType = RetrieveMessageFromQueue(self._msgQueue, bufferSize, self._pMem)
            if self.messageReceivedType == -1:
                time.sleep(0.01)
                continue
            ProcessTM(self)

def Invoke_get_init_tmpr(var_T_Int32):
    if -1 == SendTC_get_init_tmpr(var_T_Int32._ptr):
        print 'Failed to send TC: get_init_tmpr...\n'
        raise IOError("get_init_tmpr")

def Invoke_get_init_water(var_T_Int32):
    if -1 == SendTC_get_init_water(var_T_Int32._ptr):
        print 'Failed to send TC: get_init_water...\n'
        raise IOError("get_init_water")

def Invoke_for_water(var_MyString):
    if -1 == SendTC_for_water(var_MyString._ptr):
        print 'Failed to send TC: for_water...\n'
        raise IOError("for_water")

def Invoke_for_water_tmpr(var_MyString):
    if -1 == SendTC_for_water_tmpr(var_MyString._ptr):
        print 'Failed to send TC: for_water_tmpr...\n'
        raise IOError("for_water_tmpr")

def Invoke_for_coffee(var_MyString):
    if -1 == SendTC_for_coffee(var_MyString._ptr):
        print 'Failed to send TC: for_coffee...\n'
        raise IOError("for_coffee")

def Invoke_for_ticking(var_MyString):
    if -1 == SendTC_for_ticking(var_MyString._ptr):
        print 'Failed to send TC: for_ticking...\n'
        raise IOError("for_ticking")

def ProcessTM(self):
    if self.messageReceivedType == i_out_msg:
        print "\n"+chr(27)+"[32m" + "Received Telemetry: out_msg" + chr(27) + "[0m\n"
        backup = self._pMem
        # Read the data for param msg
        var_msg = dataview_uniq_asn.MyString()
        var_msg.SetData(self._pMem)
        print "Parameter msg:"
        var_msg.PrintAll()
        print
        # self._pMem = DV.MovePtrBySizeOf_MyString(self._pMem)
        # Revert the pointer to start of the data
        self._pMem = backup

if __name__ == "__main__":
    poll_gui = Poll_gui()
    poll_gui.start()
    try:
        time.sleep(1e8)
    except:
        poll_gui._bDie = True
        poll_gui.join()