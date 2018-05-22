#!/usr/bin/python

import DV

FVname = "gui"

tc = {}
tm = {}
errCodes = {}

tm["outmsg"] = {'nodeTypename': 'MyString', 'type': 'STRING', 'id': 'outmsg', 'minSize': 0, 'maxSize': 255}
tc["inmsg"] = {'nodeTypename': 'MyString', 'type': 'STRING', 'id': 'inmsg', 'minSize': 0, 'maxSize': 255}
errCodes = {1001: {'name': 'T_Int32', 'constraint': '(-2147483648..2147483647)'}, 1002: {'name': 'T_UInt32', 'constraint': '(0..4294967295)'}, 1003: {'name': 'T_Int8', 'constraint': '(-128..127)'}, 1004: {'name': 'T_UInt8', 'constraint': '(0..255)'}, 1005: {'name': 'MyString', 'constraint': '(SIZE(0..255))'}}
