#!/usr/bin/python

import DV

FVname = "gui"

tc = {}
tm = {}
errCodes = {}

tm["outmsg"] = {'nodeTypename': 'MyString', 'type': 'STRING', 'id': 'outmsg', 'minSize': 0, 'maxSize': 255}
tc["inmsg"] = {'nodeTypename': 'MyString', 'type': 'STRING', 'id': 'inmsg', 'minSize': 0, 'maxSize': 255}
