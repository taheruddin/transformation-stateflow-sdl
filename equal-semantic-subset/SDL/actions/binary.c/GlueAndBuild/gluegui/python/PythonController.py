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
i_push = ctypes.c_int.in_dll(PythonAccess, "ii_push").value
SendTC_push = PythonAccess.SendTC_push
i_tap = ctypes.c_int.in_dll(PythonAccess, "ii_tap").value
SendTC_tap = PythonAccess.SendTC_tap

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

def Invoke_push(var_MyString):
    if -1 == SendTC_push(var_MyString._ptr):
        print 'Failed to send TC: push...\n'
        raise IOError("push")

def Invoke_tap(var_MyString):
    if -1 == SendTC_tap(var_MyString._ptr):
        print 'Failed to send TC: tap...\n'
        raise IOError("tap")

def ProcessTM(self):
    if self.messageReceivedType == i_out_msg:
        print "\n"+chr(27)+"[32m" + "Received Telemetry: out_msg" + chr(27) + "[0m\n"
        backup = self._pMem
        # Read the data for param msg
        var_msg = dataview_uniq_asn.T_Int32()
        var_msg.SetData(self._pMem)
        print "Parameter msg:"
        var_msg.PrintAll()
        print
        # self._pMem = DV.MovePtrBySizeOf_T_Int32(self._pMem)
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