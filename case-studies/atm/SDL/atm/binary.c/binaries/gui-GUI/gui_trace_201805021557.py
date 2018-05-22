#!/usr/bin/env python
#
# Automatically generated Python sequence chart (MSC) implementation

import os
import sys
import signal
import Queue

taste_inst = os.popen('taste-config --prefix').readlines()[0].strip()
sys.path.append(taste_inst+'/share/asn1-editor')

from asn1_value_editor.Scenario import Scenario, PollerThread
from PySide.QtCore import QCoreApplication, Qt
from asn1_value_editor.udpcontroller import tasteUDP

# Generated due to "gui_trace_201805021557.msc"
# From the section: MSCDOCUMENT automade


@Scenario
def Exercise_gui(queue):
    '''gui processing'''
    queue.sendMsg('accept_card', '""', lineNo=29)
    try:
        queue.expectMsg('display', '"Select amount"', lineNo=30, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('out_msg', '"READ_AMOUNT"', lineNo=31, ignoreOther=False)
    except TypeError as err:
        raise
    queue.sendMsg('amount', '20', lineNo=32)
    try:
        queue.expectMsg('transaction', '20', lineNo=33, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('out_msg', '"VERIFYING_TRANSACTION"', lineNo=34, ignoreOther=False)
    except TypeError as err:
        raise
    queue.sendMsg('transaction_succeseeded', '""', lineNo=35)
    try:
        queue.expectMsg('eject_card', '""', lineNo=36, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('out_msg', '"CARD_RELEASED"', lineNo=37, ignoreOther=False)
    except TypeError as err:
        raise
    return 0

def runScenario(pipe_in=None, pipe_out=None, udpController=None):
    # Queue for getting scenario status
    log = Queue.Queue()
    if udpController:
        gui = Exercise_gui(log, name='Scenario')
        udpController.slots.append(gui.msq_q)
        gui.wait()
        udpController.slots.remove(gui.msg_q)
        return 0 # gui.status
    else:
    # Use old-style message queue
        poller = PollerThread()
        gui = Exercise_gui(log, name='Scenario')
        poller.slots.append(gui.msg_q)
        poller.start()
        gui.start()
        # Wait and log messages from both scenarii
        while True:
            try:
                scenario, severity, msg = log.get(block=False)
            except Queue.Empty:
                pass
            else:
                log.task_done()
                try:
                    # If called from the GUI, send log through pipe
                    pipe_out.send((scenario, severity, msg))
                except AttributeError:
                    print('[{level}] {name} - {msg}'.format
                        (level=severity, name=scenario, msg=msg))
                if severity == 'ERROR' or msg == 'END':
                    # Stop execution on first error or completed scenario
                    try:
                        pipe_out.send(('All', 'COMMAND', 'END'))
                    except AttributeError:
                        gui.stop()
                        poller.stop()
                        return
                try:
                    if pipe_out.poll():
                        cmd = pipe_out.recv()
                        if cmd == 'STOP':
                            gui.stop()
                            poller.stop()
                            return
                except AttributeError:
                    pass


if __name__ == "__main__":
    signal.signal(signal.SIGINT, signal.SIG_DFL)
    udpController = None
    if '--udp' in sys.argv:
        # Create UDP Controller with default IP/Port values (127.0.0.1:7755:7756)
        udpController = tasteUDP()
    QCoreApplication(sys.argv)
    sys.exit(runScenario(udpController))
