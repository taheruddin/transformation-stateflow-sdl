#!/usr/bin/python

import DV

FVname = "gui"

tc = {}
tm = {}
errCodes = {}

tm["out_msg"] = {'nodeTypename': 'MyString', 'type': 'STRING', 'id': 'out_msg', 'minSize': 0, 'maxSize': 255}
tc["get_init_tmpr"] = {'nodeTypename': 'T-Int32', 'type': 'INTEGER', 'id': 'get_init_tmpr', 'minR': -2147483648, 'maxR': 2147483647}
tc["get_init_water"] = {'nodeTypename': 'T-Int32', 'type': 'INTEGER', 'id': 'get_init_water', 'minR': -2147483648, 'maxR': 2147483647}
tc["for_water"] = {'nodeTypename': 'MyString', 'type': 'STRING', 'id': 'for_water', 'minSize': 0, 'maxSize': 255}
tc["for_water_tmpr"] = {'nodeTypename': 'MyString', 'type': 'STRING', 'id': 'for_water_tmpr', 'minSize': 0, 'maxSize': 255}
tc["for_coffee"] = {'nodeTypename': 'MyString', 'type': 'STRING', 'id': 'for_coffee', 'minSize': 0, 'maxSize': 255}
tc["for_ticking"] = {'nodeTypename': 'MyString', 'type': 'STRING', 'id': 'for_ticking', 'minSize': 0, 'maxSize': 255}
