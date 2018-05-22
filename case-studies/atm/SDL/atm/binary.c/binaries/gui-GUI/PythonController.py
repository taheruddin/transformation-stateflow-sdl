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
i_transaction = ctypes.c_int.in_dll(PythonAccess, "ii_transaction").value
i_display = ctypes.c_int.in_dll(PythonAccess, "ii_display").value
i_eject_card = ctypes.c_int.in_dll(PythonAccess, "ii_eject_card").value
i_out_msg = ctypes.c_int.in_dll(PythonAccess, "ii_out_msg").value
i_accept_card = ctypes.c_int.in_dll(PythonAccess, "ii_accept_card").value
SendTC_accept_card = PythonAccess.SendTC_accept_card
i_reject_transaction = ctypes.c_int.in_dll(PythonAccess, "ii_reject_transaction").value
SendTC_reject_transaction = PythonAccess.SendTC_reject_transaction
i_out_of_service = ctypes.c_int.in_dll(PythonAccess, "ii_out_of_service").value
SendTC_out_of_service = PythonAccess.SendTC_out_of_service
i_abort_out = ctypes.c_int.in_dll(PythonAccess, "ii_abort_out").value
SendTC_abort_out = PythonAccess.SendTC_abort_out
i_amount = ctypes.c_int.in_dll(PythonAccess, "ii_amount").value
SendTC_amount = PythonAccess.SendTC_amount
i_other_amount = ctypes.c_int.in_dll(PythonAccess, "ii_other_amount").value
SendTC_other_amount = PythonAccess.SendTC_other_amount
i_digit = ctypes.c_int.in_dll(PythonAccess, "ii_digit").value
SendTC_digit = PythonAccess.SendTC_digit
i_ok = ctypes.c_int.in_dll(PythonAccess, "ii_ok").value
SendTC_ok = PythonAccess.SendTC_ok
i_transaction_succeseeded = ctypes.c_int.in_dll(PythonAccess, "ii_transaction_succeseeded").value
SendTC_transaction_succeseeded = PythonAccess.SendTC_transaction_succeseeded

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

def Invoke_accept_card(var_MyString):
    if -1 == SendTC_accept_card(var_MyString._ptr):
        print 'Failed to send TC: accept_card...\n'
        raise IOError("accept_card")

def Invoke_reject_transaction(var_MyString):
    if -1 == SendTC_reject_transaction(var_MyString._ptr):
        print 'Failed to send TC: reject_transaction...\n'
        raise IOError("reject_transaction")

def Invoke_out_of_service(var_MyString):
    if -1 == SendTC_out_of_service(var_MyString._ptr):
        print 'Failed to send TC: out_of_service...\n'
        raise IOError("out_of_service")

def Invoke_abort_out(var_MyString):
    if -1 == SendTC_abort_out(var_MyString._ptr):
        print 'Failed to send TC: abort_out...\n'
        raise IOError("abort_out")

def Invoke_amount(var_Amount):
    if -1 == SendTC_amount(var_Amount._ptr):
        print 'Failed to send TC: amount...\n'
        raise IOError("amount")

def Invoke_other_amount(var_MyString):
    if -1 == SendTC_other_amount(var_MyString._ptr):
        print 'Failed to send TC: other_amount...\n'
        raise IOError("other_amount")

def Invoke_digit(var_Num):
    if -1 == SendTC_digit(var_Num._ptr):
        print 'Failed to send TC: digit...\n'
        raise IOError("digit")

def Invoke_ok(var_MyString):
    if -1 == SendTC_ok(var_MyString._ptr):
        print 'Failed to send TC: ok...\n'
        raise IOError("ok")

def Invoke_transaction_succeseeded(var_MyString):
    if -1 == SendTC_transaction_succeseeded(var_MyString._ptr):
        print 'Failed to send TC: transaction_succeseeded...\n'
        raise IOError("transaction_succeseeded")

def ProcessTM(self):
    if self.messageReceivedType == i_transaction:
        print "\n"+chr(27)+"[32m" + "Received Telemetry: transaction" + chr(27) + "[0m\n"
        backup = self._pMem
        # Read the data for param amount
        var_amount = dataview_uniq_asn.Amount()
        var_amount.SetData(self._pMem)
        print "Parameter amount:"
        var_amount.PrintAll()
        print
        # self._pMem = DV.MovePtrBySizeOf_Amount(self._pMem)
        # Revert the pointer to start of the data
        self._pMem = backup
    if self.messageReceivedType == i_display:
        print "\n"+chr(27)+"[32m" + "Received Telemetry: display" + chr(27) + "[0m\n"
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
    if self.messageReceivedType == i_eject_card:
        print "\n"+chr(27)+"[32m" + "Received Telemetry: eject_card" + chr(27) + "[0m\n"
        backup = self._pMem
        # Read the data for param w
        var_w = dataview_uniq_asn.MyString()
        var_w.SetData(self._pMem)
        print "Parameter w:"
        var_w.PrintAll()
        print
        # self._pMem = DV.MovePtrBySizeOf_MyString(self._pMem)
        # Revert the pointer to start of the data
        self._pMem = backup
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