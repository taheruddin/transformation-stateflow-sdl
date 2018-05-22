#!/usr/bin/python

import DV

FVname = "gui"

tc = {}
tm = {}
errCodes = {}

tm["out_msg"] = {'nodeTypename': 'MyString', 'type': 'STRING', 'id': 'out_msg', 'minSize': 0, 'maxSize': 255}
tc["e"] = {'nodeTypename': 'MyReal', 'type': 'REAL', 'id': 'e', 'minR': 0, 'maxR': 1000}
errCodes = {1001: {'name': 'MyString', 'constraint': '(SIZE(0..255))'}, 1002: {'name': 'MyReal', 'constraint': '(0.00000000000000000000E+000..1.00000000000000000000E+003)'}, 1003: {'name': 'T_Int32', 'constraint': '(-2147483648..2147483647)'}, 1004: {'name': 'T_UInt32', 'constraint': '(0..4294967295)'}, 1005: {'name': 'T_Int8', 'constraint': '(-128..127)'}, 1006: {'name': 'T_UInt8', 'constraint': '(0..255)'}}
