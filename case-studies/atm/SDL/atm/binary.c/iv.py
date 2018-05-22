#! /usr/bin/python

Ada, C, GUI, SIMULINK, VHDL, OG, RTDS, SYSTEM_C, SCADE6, VDM, CPP = range(11)
thread, passive, unknown = range(3)
PI, RI = range(2)
synch, asynch = range(2)
param_in, param_out = range(2)
UPER, NATIVE, ACN = range(3)
cyclic, sporadic, variator, protected, unprotected = range(5)
enumerated, sequenceof, sequence, set, setof, integer, boolean, real, choice, octetstring, string = range(11)
functions = {}

functions['gui'] = {
    'name_with_case' : 'gui',
    'runtime_nature': thread,
    'language': GUI,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['gui']['interfaces']['transaction'] = {
    'port_name': 'transaction',
    'parent_fv': 'gui',
    'direction': PI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': sporadic,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': 'ms',
    'wcet_high': 0,
    'wcet_high_unit': 'ms',
    'distant_fv': '',
    'calling_threads': {},
    'distant_name': '',
    'queue_size': 1
}

functions['gui']['interfaces']['transaction']['paramsInOrdered'] = ['amount']

functions['gui']['interfaces']['transaction']['paramsOutOrdered'] = []

functions['gui']['interfaces']['transaction']['in']['amount'] = {
    'type': 'Amount',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': '/tmp/uniqhometasteatm__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'transaction',
    'param_direction': param_in
}

functions['gui']['interfaces']['display'] = {
    'port_name': 'display',
    'parent_fv': 'gui',
    'direction': PI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': variator,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': 'ms',
    'wcet_high': 0,
    'wcet_high_unit': 'ms',
    'distant_fv': '',
    'calling_threads': {},
    'distant_name': '',
    'queue_size': 1
}

functions['gui']['interfaces']['display']['paramsInOrdered'] = ['msg']

functions['gui']['interfaces']['display']['paramsOutOrdered'] = []

functions['gui']['interfaces']['display']['in']['msg'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/tmp/uniqhometasteatm__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'display',
    'param_direction': param_in
}

functions['gui']['interfaces']['eject_card'] = {
    'port_name': 'eject_card',
    'parent_fv': 'gui',
    'direction': PI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': variator,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': 'ms',
    'wcet_high': 0,
    'wcet_high_unit': 'ms',
    'distant_fv': '',
    'calling_threads': {},
    'distant_name': '',
    'queue_size': 1
}

functions['gui']['interfaces']['eject_card']['paramsInOrdered'] = ['w']

functions['gui']['interfaces']['eject_card']['paramsOutOrdered'] = []

functions['gui']['interfaces']['eject_card']['in']['w'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/tmp/uniqhometasteatm__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'eject_card',
    'param_direction': param_in
}

functions['gui']['interfaces']['out_msg'] = {
    'port_name': 'out_msg',
    'parent_fv': 'gui',
    'direction': PI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': variator,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': 'ms',
    'wcet_high': 0,
    'wcet_high_unit': 'ms',
    'distant_fv': '',
    'calling_threads': {},
    'distant_name': '',
    'queue_size': 1
}

functions['gui']['interfaces']['out_msg']['paramsInOrdered'] = ['msg']

functions['gui']['interfaces']['out_msg']['paramsOutOrdered'] = []

functions['gui']['interfaces']['out_msg']['in']['msg'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/tmp/uniqhometasteatm__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'out_msg',
    'param_direction': param_in
}

functions['gui']['interfaces']['accept_card'] = {
    'port_name': 'accept_card',
    'parent_fv': 'gui',
    'direction': RI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': sporadic,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': '',
    'wcet_high': 0,
    'wcet_high_unit': '',
    'distant_fv': 'atm',
    'calling_threads': {},
    'distant_name': 'accept_card',
    'queue_size': 1
}

functions['gui']['interfaces']['accept_card']['paramsInOrdered'] = ['account']

functions['gui']['interfaces']['accept_card']['paramsOutOrdered'] = []

functions['gui']['interfaces']['accept_card']['in']['account'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/tmp/uniqhometasteatm__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'accept_card',
    'param_direction': param_in
}

functions['gui']['interfaces']['reject_transaction'] = {
    'port_name': 'reject_transaction',
    'parent_fv': 'gui',
    'direction': RI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': sporadic,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': '',
    'wcet_high': 0,
    'wcet_high_unit': '',
    'distant_fv': 'atm',
    'calling_threads': {},
    'distant_name': 'reject_transaction',
    'queue_size': 1
}

functions['gui']['interfaces']['reject_transaction']['paramsInOrdered'] = ['w']

functions['gui']['interfaces']['reject_transaction']['paramsOutOrdered'] = []

functions['gui']['interfaces']['reject_transaction']['in']['w'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/tmp/uniqhometasteatm__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'reject_transaction',
    'param_direction': param_in
}

functions['gui']['interfaces']['out_of_service'] = {
    'port_name': 'out_of_service',
    'parent_fv': 'gui',
    'direction': RI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': sporadic,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': '',
    'wcet_high': 0,
    'wcet_high_unit': '',
    'distant_fv': 'atm',
    'calling_threads': {},
    'distant_name': 'out_of_service',
    'queue_size': 1
}

functions['gui']['interfaces']['out_of_service']['paramsInOrdered'] = ['w']

functions['gui']['interfaces']['out_of_service']['paramsOutOrdered'] = []

functions['gui']['interfaces']['out_of_service']['in']['w'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/tmp/uniqhometasteatm__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'out_of_service',
    'param_direction': param_in
}

functions['gui']['interfaces']['abort_out'] = {
    'port_name': 'abort_out',
    'parent_fv': 'gui',
    'direction': RI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': sporadic,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': '',
    'wcet_high': 0,
    'wcet_high_unit': '',
    'distant_fv': 'atm',
    'calling_threads': {},
    'distant_name': 'abort_out',
    'queue_size': 1
}

functions['gui']['interfaces']['abort_out']['paramsInOrdered'] = ['w']

functions['gui']['interfaces']['abort_out']['paramsOutOrdered'] = []

functions['gui']['interfaces']['abort_out']['in']['w'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/tmp/uniqhometasteatm__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'abort_out',
    'param_direction': param_in
}

functions['gui']['interfaces']['amount'] = {
    'port_name': 'amount',
    'parent_fv': 'gui',
    'direction': RI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': sporadic,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': '',
    'wcet_high': 0,
    'wcet_high_unit': '',
    'distant_fv': 'atm',
    'calling_threads': {},
    'distant_name': 'amount',
    'queue_size': 1
}

functions['gui']['interfaces']['amount']['paramsInOrdered'] = ['amount']

functions['gui']['interfaces']['amount']['paramsOutOrdered'] = []

functions['gui']['interfaces']['amount']['in']['amount'] = {
    'type': 'Amount',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': '/tmp/uniqhometasteatm__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'amount',
    'param_direction': param_in
}

functions['gui']['interfaces']['other_amount'] = {
    'port_name': 'other_amount',
    'parent_fv': 'gui',
    'direction': RI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': sporadic,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': '',
    'wcet_high': 0,
    'wcet_high_unit': '',
    'distant_fv': 'atm',
    'calling_threads': {},
    'distant_name': 'other_amount',
    'queue_size': 1
}

functions['gui']['interfaces']['other_amount']['paramsInOrdered'] = ['w']

functions['gui']['interfaces']['other_amount']['paramsOutOrdered'] = []

functions['gui']['interfaces']['other_amount']['in']['w'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/tmp/uniqhometasteatm__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'other_amount',
    'param_direction': param_in
}

functions['gui']['interfaces']['digit'] = {
    'port_name': 'digit',
    'parent_fv': 'gui',
    'direction': RI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': sporadic,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': '',
    'wcet_high': 0,
    'wcet_high_unit': '',
    'distant_fv': 'atm',
    'calling_threads': {},
    'distant_name': 'digit',
    'queue_size': 1
}

functions['gui']['interfaces']['digit']['paramsInOrdered'] = ['num']

functions['gui']['interfaces']['digit']['paramsOutOrdered'] = []

functions['gui']['interfaces']['digit']['in']['num'] = {
    'type': 'Num',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': '/tmp/uniqhometasteatm__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'digit',
    'param_direction': param_in
}

functions['gui']['interfaces']['ok'] = {
    'port_name': 'ok',
    'parent_fv': 'gui',
    'direction': RI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': sporadic,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': '',
    'wcet_high': 0,
    'wcet_high_unit': '',
    'distant_fv': 'atm',
    'calling_threads': {},
    'distant_name': 'ok',
    'queue_size': 1
}

functions['gui']['interfaces']['ok']['paramsInOrdered'] = ['w']

functions['gui']['interfaces']['ok']['paramsOutOrdered'] = []

functions['gui']['interfaces']['ok']['in']['w'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/tmp/uniqhometasteatm__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'ok',
    'param_direction': param_in
}

functions['gui']['interfaces']['transaction_succeseeded'] = {
    'port_name': 'transaction_succeseeded',
    'parent_fv': 'gui',
    'direction': RI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': sporadic,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': '',
    'wcet_high': 0,
    'wcet_high_unit': '',
    'distant_fv': 'atm',
    'calling_threads': {},
    'distant_name': 'transaction_succeseeded',
    'queue_size': 1
}

functions['gui']['interfaces']['transaction_succeseeded']['paramsInOrdered'] = ['w']

functions['gui']['interfaces']['transaction_succeseeded']['paramsOutOrdered'] = []

functions['gui']['interfaces']['transaction_succeseeded']['in']['w'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/tmp/uniqhometasteatm__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'transaction_succeseeded',
    'param_direction': param_in
}

functions['atm'] = {
    'name_with_case' : 'atm',
    'runtime_nature': thread,
    'language': Ada,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['atm']['interfaces']['accept_card'] = {
    'port_name': 'accept_card',
    'parent_fv': 'atm',
    'direction': PI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': sporadic,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': 'ms',
    'wcet_high': 0,
    'wcet_high_unit': 'ms',
    'distant_fv': '',
    'calling_threads': {},
    'distant_name': '',
    'queue_size': 1
}

functions['atm']['interfaces']['accept_card']['paramsInOrdered'] = ['account']

functions['atm']['interfaces']['accept_card']['paramsOutOrdered'] = []

functions['atm']['interfaces']['accept_card']['in']['account'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/tmp/uniqhometasteatm__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'accept_card',
    'param_direction': param_in
}

functions['atm']['interfaces']['reject_transaction'] = {
    'port_name': 'reject_transaction',
    'parent_fv': 'atm',
    'direction': PI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': variator,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': 'ms',
    'wcet_high': 0,
    'wcet_high_unit': 'ms',
    'distant_fv': '',
    'calling_threads': {},
    'distant_name': '',
    'queue_size': 1
}

functions['atm']['interfaces']['reject_transaction']['paramsInOrdered'] = ['w']

functions['atm']['interfaces']['reject_transaction']['paramsOutOrdered'] = []

functions['atm']['interfaces']['reject_transaction']['in']['w'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/tmp/uniqhometasteatm__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'reject_transaction',
    'param_direction': param_in
}

functions['atm']['interfaces']['out_of_service'] = {
    'port_name': 'out_of_service',
    'parent_fv': 'atm',
    'direction': PI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': variator,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': 'ms',
    'wcet_high': 0,
    'wcet_high_unit': 'ms',
    'distant_fv': '',
    'calling_threads': {},
    'distant_name': '',
    'queue_size': 1
}

functions['atm']['interfaces']['out_of_service']['paramsInOrdered'] = ['w']

functions['atm']['interfaces']['out_of_service']['paramsOutOrdered'] = []

functions['atm']['interfaces']['out_of_service']['in']['w'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/tmp/uniqhometasteatm__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'out_of_service',
    'param_direction': param_in
}

functions['atm']['interfaces']['abort_out'] = {
    'port_name': 'abort_out',
    'parent_fv': 'atm',
    'direction': PI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': variator,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': 'ms',
    'wcet_high': 0,
    'wcet_high_unit': 'ms',
    'distant_fv': '',
    'calling_threads': {},
    'distant_name': '',
    'queue_size': 1
}

functions['atm']['interfaces']['abort_out']['paramsInOrdered'] = ['w']

functions['atm']['interfaces']['abort_out']['paramsOutOrdered'] = []

functions['atm']['interfaces']['abort_out']['in']['w'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/tmp/uniqhometasteatm__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'abort_out',
    'param_direction': param_in
}

functions['atm']['interfaces']['amount'] = {
    'port_name': 'amount',
    'parent_fv': 'atm',
    'direction': PI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': variator,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': 'ms',
    'wcet_high': 0,
    'wcet_high_unit': 'ms',
    'distant_fv': '',
    'calling_threads': {},
    'distant_name': '',
    'queue_size': 1
}

functions['atm']['interfaces']['amount']['paramsInOrdered'] = ['amount']

functions['atm']['interfaces']['amount']['paramsOutOrdered'] = []

functions['atm']['interfaces']['amount']['in']['amount'] = {
    'type': 'Amount',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': '/tmp/uniqhometasteatm__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'amount',
    'param_direction': param_in
}

functions['atm']['interfaces']['other_amount'] = {
    'port_name': 'other_amount',
    'parent_fv': 'atm',
    'direction': PI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': variator,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': 'ms',
    'wcet_high': 0,
    'wcet_high_unit': 'ms',
    'distant_fv': '',
    'calling_threads': {},
    'distant_name': '',
    'queue_size': 1
}

functions['atm']['interfaces']['other_amount']['paramsInOrdered'] = ['w']

functions['atm']['interfaces']['other_amount']['paramsOutOrdered'] = []

functions['atm']['interfaces']['other_amount']['in']['w'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/tmp/uniqhometasteatm__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'other_amount',
    'param_direction': param_in
}

functions['atm']['interfaces']['digit'] = {
    'port_name': 'digit',
    'parent_fv': 'atm',
    'direction': PI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': variator,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': 'ms',
    'wcet_high': 0,
    'wcet_high_unit': 'ms',
    'distant_fv': '',
    'calling_threads': {},
    'distant_name': '',
    'queue_size': 1
}

functions['atm']['interfaces']['digit']['paramsInOrdered'] = ['num']

functions['atm']['interfaces']['digit']['paramsOutOrdered'] = []

functions['atm']['interfaces']['digit']['in']['num'] = {
    'type': 'Num',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': '/tmp/uniqhometasteatm__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'digit',
    'param_direction': param_in
}

functions['atm']['interfaces']['ok'] = {
    'port_name': 'ok',
    'parent_fv': 'atm',
    'direction': PI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': variator,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': 'ms',
    'wcet_high': 0,
    'wcet_high_unit': 'ms',
    'distant_fv': '',
    'calling_threads': {},
    'distant_name': '',
    'queue_size': 1
}

functions['atm']['interfaces']['ok']['paramsInOrdered'] = ['w']

functions['atm']['interfaces']['ok']['paramsOutOrdered'] = []

functions['atm']['interfaces']['ok']['in']['w'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/tmp/uniqhometasteatm__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'ok',
    'param_direction': param_in
}

functions['atm']['interfaces']['transaction_succeseeded'] = {
    'port_name': 'transaction_succeseeded',
    'parent_fv': 'atm',
    'direction': PI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': variator,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': 'ms',
    'wcet_high': 0,
    'wcet_high_unit': 'ms',
    'distant_fv': '',
    'calling_threads': {},
    'distant_name': '',
    'queue_size': 1
}

functions['atm']['interfaces']['transaction_succeseeded']['paramsInOrdered'] = ['w']

functions['atm']['interfaces']['transaction_succeseeded']['paramsOutOrdered'] = []

functions['atm']['interfaces']['transaction_succeseeded']['in']['w'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/tmp/uniqhometasteatm__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'transaction_succeseeded',
    'param_direction': param_in
}

functions['atm']['interfaces']['out_msg'] = {
    'port_name': 'out_msg',
    'parent_fv': 'atm',
    'direction': RI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': sporadic,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': '',
    'wcet_high': 0,
    'wcet_high_unit': '',
    'distant_fv': 'gui',
    'calling_threads': {},
    'distant_name': 'out_msg',
    'queue_size': 1
}

functions['atm']['interfaces']['out_msg']['paramsInOrdered'] = ['msg']

functions['atm']['interfaces']['out_msg']['paramsOutOrdered'] = []

functions['atm']['interfaces']['out_msg']['in']['msg'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/tmp/uniqhometasteatm__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'out_msg',
    'param_direction': param_in
}

functions['atm']['interfaces']['transaction'] = {
    'port_name': 'transaction',
    'parent_fv': 'atm',
    'direction': RI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': sporadic,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': '',
    'wcet_high': 0,
    'wcet_high_unit': '',
    'distant_fv': 'gui',
    'calling_threads': {},
    'distant_name': 'transaction',
    'queue_size': 1
}

functions['atm']['interfaces']['transaction']['paramsInOrdered'] = ['amount']

functions['atm']['interfaces']['transaction']['paramsOutOrdered'] = []

functions['atm']['interfaces']['transaction']['in']['amount'] = {
    'type': 'Amount',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': '/tmp/uniqhometasteatm__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'transaction',
    'param_direction': param_in
}

functions['atm']['interfaces']['display'] = {
    'port_name': 'display',
    'parent_fv': 'atm',
    'direction': RI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': sporadic,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': '',
    'wcet_high': 0,
    'wcet_high_unit': '',
    'distant_fv': 'gui',
    'calling_threads': {},
    'distant_name': 'display',
    'queue_size': 1
}

functions['atm']['interfaces']['display']['paramsInOrdered'] = ['msg']

functions['atm']['interfaces']['display']['paramsOutOrdered'] = []

functions['atm']['interfaces']['display']['in']['msg'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/tmp/uniqhometasteatm__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'display',
    'param_direction': param_in
}

functions['atm']['interfaces']['eject_card'] = {
    'port_name': 'eject_card',
    'parent_fv': 'atm',
    'direction': RI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': sporadic,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': '',
    'wcet_high': 0,
    'wcet_high_unit': '',
    'distant_fv': 'gui',
    'calling_threads': {},
    'distant_name': 'eject_card',
    'queue_size': 1
}

functions['atm']['interfaces']['eject_card']['paramsInOrdered'] = ['w']

functions['atm']['interfaces']['eject_card']['paramsOutOrdered'] = []

functions['atm']['interfaces']['eject_card']['in']['w'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/tmp/uniqhometasteatm__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'eject_card',
    'param_direction': param_in
}
