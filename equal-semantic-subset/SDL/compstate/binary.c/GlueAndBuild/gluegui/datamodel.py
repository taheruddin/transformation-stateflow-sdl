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
