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
