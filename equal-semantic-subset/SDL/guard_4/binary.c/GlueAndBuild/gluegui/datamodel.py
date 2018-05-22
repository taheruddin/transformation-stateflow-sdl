#!/usr/bin/python

import DV

FVname = "gui"

tc = {}
tm = {}
errCodes = {}

tm["out_msg"] = {'nodeTypename': 'MyString', 'type': 'STRING', 'id': 'out_msg', 'minSize': 0, 'maxSize': 255}
tc["e"] = {'nodeTypename': 'MyReal', 'type': 'REAL', 'id': 'e', 'minR': 0, 'maxR': 1000}
