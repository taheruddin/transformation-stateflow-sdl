#!/usr/bin/python

import DV

FVname = "gui"

tc = {}
tm = {}
errCodes = {}

tm["out_msg"] = {'nodeTypename': 'T-Int32', 'type': 'INTEGER', 'id': 'out_msg', 'minR': -2147483648, 'maxR': 2147483647}
tc["push"] = {'nodeTypename': 'MyString', 'type': 'STRING', 'id': 'push', 'minSize': 0, 'maxSize': 255}
tc["tap"] = {'nodeTypename': 'MyString', 'type': 'STRING', 'id': 'tap', 'minSize': 0, 'maxSize': 255}
errCodes = {1001: {'name': 'T_Int32', 'constraint': '(-2147483648..2147483647)'}, 1002: {'name': 'T_UInt32', 'constraint': '(0..4294967295)'}, 1003: {'name': 'T_Int8', 'constraint': '(-128..127)'}, 1004: {'name': 'T_UInt8', 'constraint': '(0..255)'}, 1005: {'name': 'MyString', 'constraint': '(SIZE(0..255))'}}
