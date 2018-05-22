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
i_switch_on = ctypes.c_int.in_dll(PythonAccess, "ii_switch_on").value
SendTC_switch_on = PythonAccess.SendTC_switch_on
i_switch_off = ctypes.c_int.in_dll(PythonAccess, "ii_switch_off").value
SendTC_switch_off = PythonAccess.SendTC_switch_off
i_restart = ctypes.c_int.in_dll(PythonAccess, "ii_restart").value
SendTC_restart = PythonAccess.SendTC_restart
i_start_recording = ctypes.c_int.in_dll(PythonAccess, "ii_start_recording").value
SendTC_start_recording = PythonAccess.SendTC_start_recording
i_pause = ctypes.c_int.in_dll(PythonAccess, "ii_pause").value
SendTC_pause = PythonAccess.SendTC_pause
i_resume = ctypes.c_int.in_dll(PythonAccess, "ii_resume").value
SendTC_resume = PythonAccess.SendTC_resume
i_fail = ctypes.c_int.in_dll(PythonAccess, "ii_fail").value
SendTC_fail = PythonAccess.SendTC_fail
i_stop_recording = ctypes.c_int.in_dll(PythonAccess, "ii_stop_recording").value
SendTC_stop_recording = PythonAccess.SendTC_stop_recording

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

def Invoke_switch_on(var_MyString):
    if -1 == SendTC_switch_on(var_MyString._ptr):
        print 'Failed to send TC: switch_on...\n'
        raise IOError("switch_on")

def Invoke_switch_off(var_MyString):
    if -1 == SendTC_switch_off(var_MyString._ptr):
        print 'Failed to send TC: switch_off...\n'
        raise IOError("switch_off")

def Invoke_restart(var_MyString):
    if -1 == SendTC_restart(var_MyString._ptr):
        print 'Failed to send TC: restart...\n'
        raise IOError("restart")

def Invoke_start_recording(var_MyString):
    if -1 == SendTC_start_recording(var_MyString._ptr):
        print 'Failed to send TC: start_recording...\n'
        raise IOError("start_recording")

def Invoke_pause(var_MyString):
    if -1 == SendTC_pause(var_MyString._ptr):
        print 'Failed to send TC: pause...\n'
        raise IOError("pause")

def Invoke_resume(var_MyString):
    if -1 == SendTC_resume(var_MyString._ptr):
        print 'Failed to send TC: resume...\n'
        raise IOError("resume")

def Invoke_fail(var_MyString):
    if -1 == SendTC_fail(var_MyString._ptr):
        print 'Failed to send TC: fail...\n'
        raise IOError("fail")

def Invoke_stop_recording(var_MyString):
    if -1 == SendTC_stop_recording(var_MyString._ptr):
        print 'Failed to send TC: stop_recording...\n'
        raise IOError("stop_recording")

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