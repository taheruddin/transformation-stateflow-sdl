#!/usr/bin/python

import DV

FVname = "gui"

tc = {}
tm = {}
errCodes = {}

tm["transaction"] = {'nodeTypename': 'Amount', 'type': 'INTEGER', 'id': 'transaction', 'minR': 0, 'maxR': 999999}
tm["display"] = {'nodeTypename': 'MyString', 'type': 'STRING', 'id': 'display', 'minSize': 0, 'maxSize': 255}
tm["eject_card"] = {'nodeTypename': 'MyString', 'type': 'STRING', 'id': 'eject_card', 'minSize': 0, 'maxSize': 255}
tm["out_msg"] = {'nodeTypename': 'MyString', 'type': 'STRING', 'id': 'out_msg', 'minSize': 0, 'maxSize': 255}
tc["accept_card"] = {'nodeTypename': 'MyString', 'type': 'STRING', 'id': 'accept_card', 'minSize': 0, 'maxSize': 255}
tc["reject_transaction"] = {'nodeTypename': 'MyString', 'type': 'STRING', 'id': 'reject_transaction', 'minSize': 0, 'maxSize': 255}
tc["out_of_service"] = {'nodeTypename': 'MyString', 'type': 'STRING', 'id': 'out_of_service', 'minSize': 0, 'maxSize': 255}
tc["abort_out"] = {'nodeTypename': 'MyString', 'type': 'STRING', 'id': 'abort_out', 'minSize': 0, 'maxSize': 255}
tc["amount"] = {'nodeTypename': 'Amount', 'type': 'INTEGER', 'id': 'amount', 'minR': 0, 'maxR': 999999}
tc["other_amount"] = {'nodeTypename': 'MyString', 'type': 'STRING', 'id': 'other_amount', 'minSize': 0, 'maxSize': 255}
tc["digit"] = {'nodeTypename': 'Num', 'type': 'INTEGER', 'id': 'digit', 'minR': 0, 'maxR': 9}
tc["ok"] = {'nodeTypename': 'MyString', 'type': 'STRING', 'id': 'ok', 'minSize': 0, 'maxSize': 255}
tc["transaction_succeseeded"] = {'nodeTypename': 'MyString', 'type': 'STRING', 'id': 'transaction_succeseeded', 'minSize': 0, 'maxSize': 255}
errCodes = {1001: {'name': 'T_Int32', 'constraint': '(-2147483648..2147483647)'}, 1002: {'name': 'T_UInt32', 'constraint': '(0..4294967295)'}, 1003: {'name': 'T_Int8', 'constraint': '(-128..127)'}, 1004: {'name': 'T_UInt8', 'constraint': '(0..255)'}, 1005: {'name': 'MyReal', 'constraint': '(0.00000000000000000000E+000..1.00000000000000000000E+003)'}, 1006: {'name': 'MyString', 'constraint': '(SIZE(0..255))'}, 1007: {'name': 'Num', 'constraint': '(0..9)'}, 1008: {'name': 'Amount', 'constraint': '(0..999999)'}}
