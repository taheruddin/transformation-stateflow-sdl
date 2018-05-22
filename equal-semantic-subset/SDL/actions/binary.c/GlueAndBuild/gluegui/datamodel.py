#!/usr/bin/python

import DV

FVname = "gui"

tc = {}
tm = {}
errCodes = {}

tm["out_msg"] = {'nodeTypename': 'T-Int32', 'type': 'INTEGER', 'id': 'out_msg', 'minR': -2147483648, 'maxR': 2147483647}
tc["push"] = {'nodeTypename': 'MyString', 'type': 'STRING', 'id': 'push', 'minSize': 0, 'maxSize': 255}
tc["tap"] = {'nodeTypename': 'MyString', 'type': 'STRING', 'id': 'tap', 'minSize': 0, 'maxSize': 255}
