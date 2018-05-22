#!/usr/bin/python

import DV

FVname = "gui"

tc = {}
tm = {}
errCodes = {}

tm["outputmsg"] = {'nodeTypename': 'MyString', 'type': 'STRING', 'id': 'outputmsg', 'minSize': 0, 'maxSize': 255}
tc["inputmsg"] = {'nodeTypename': 'T-Int32', 'type': 'INTEGER', 'id': 'inputmsg', 'minR': -2147483648, 'maxR': 2147483647}
