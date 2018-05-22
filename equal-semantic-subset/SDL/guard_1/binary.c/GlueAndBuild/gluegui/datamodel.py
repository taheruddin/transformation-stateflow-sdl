#!/usr/bin/python

import DV

FVname = "gui"

tc = {}
tm = {}
errCodes = {}

tm["out_msg"] = {'nodeTypename': 'MyString', 'type': 'STRING', 'id': 'out_msg', 'minSize': 0, 'maxSize': 255}
tc["get_data"] = {'nodeTypename': 'MyReal', 'type': 'REAL', 'id': 'get_data', 'minR': 0, 'maxR': 1000}
tc["check"] = {'nodeTypename': 'MyString', 'type': 'STRING', 'id': 'check', 'minSize': 0, 'maxSize': 255}
