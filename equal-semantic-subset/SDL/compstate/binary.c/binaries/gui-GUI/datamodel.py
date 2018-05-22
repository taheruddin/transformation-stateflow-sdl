#!/usr/bin/python

import DV

FVname = "gui"

tc = {}
tm = {}
errCodes = {}

tm["out_msg"] = {'nodeTypename': 'MyString', 'type': 'STRING', 'id': 'out_msg', 'minSize': 0, 'maxSize': 255}
tc["switch_on"] = {'nodeTypename': 'MyString', 'type': 'STRING', 'id': 'switch_on', 'minSize': 0, 'maxSize': 255}
tc["switch_off"] = {'nodeTypename': 'MyString', 'type': 'STRING', 'id': 'switch_off', 'minSize': 0, 'maxSize': 255}
tc["restart"] = {'nodeTypename': 'MyString', 'type': 'STRING', 'id': 'restart', 'minSize': 0, 'maxSize': 255}
tc["start_recording"] = {'nodeTypename': 'MyString', 'type': 'STRING', 'id': 'start_recording', 'minSize': 0, 'maxSize': 255}
tc["pause"] = {'nodeTypename': 'MyString', 'type': 'STRING', 'id': 'pause', 'minSize': 0, 'maxSize': 255}
tc["resume"] = {'nodeTypename': 'MyString', 'type': 'STRING', 'id': 'resume', 'minSize': 0, 'maxSize': 255}
tc["fail"] = {'nodeTypename': 'MyString', 'type': 'STRING', 'id': 'fail', 'minSize': 0, 'maxSize': 255}
tc["stop_recording"] = {'nodeTypename': 'MyString', 'type': 'STRING', 'id': 'stop_recording', 'minSize': 0, 'maxSize': 255}
errCodes = {1001: {'name': 'MyReal', 'constraint': '(0.00000000000000000000E+000..1.00000000000000000000E+003)'}, 1002: {'name': 'MyString', 'constraint': '(SIZE(0..255))'}, 1003: {'name': 'T_Int32', 'constraint': '(-2147483648..2147483647)'}, 1004: {'name': 'T_UInt32', 'constraint': '(0..4294967295)'}, 1005: {'name': 'T_Int8', 'constraint': '(-128..127)'}, 1006: {'name': 'T_UInt8', 'constraint': '(0..255)'}}
