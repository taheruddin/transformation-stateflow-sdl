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

functions['gui']['interfaces']['out_msg'] = {
    'port_name': 'out_msg',
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

functions['gui']['interfaces']['out_msg']['paramsInOrdered'] = ['msg']

functions['gui']['interfaces']['out_msg']['paramsOutOrdered'] = []

functions['gui']['interfaces']['out_msg']['in']['msg'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/tmp/uniqhometasteguard_1__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'out_msg',
    'param_direction': param_in
}

functions['gui']['interfaces']['get_data'] = {
    'port_name': 'get_data',
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
    'distant_fv': 'guard_1',
    'calling_threads': {},
    'distant_name': 'get_data',
    'queue_size': 1
}

functions['gui']['interfaces']['get_data']['paramsInOrdered'] = ['x']

functions['gui']['interfaces']['get_data']['paramsOutOrdered'] = []

functions['gui']['interfaces']['get_data']['in']['x'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': '/tmp/uniqhometasteguard_1__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'get_data',
    'param_direction': param_in
}

functions['gui']['interfaces']['check'] = {
    'port_name': 'check',
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
    'distant_fv': 'guard_1',
    'calling_threads': {},
    'distant_name': 'check',
    'queue_size': 1
}

functions['gui']['interfaces']['check']['paramsInOrdered'] = ['whatever']

functions['gui']['interfaces']['check']['paramsOutOrdered'] = []

functions['gui']['interfaces']['check']['in']['whatever'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/tmp/uniqhometasteguard_1__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'check',
    'param_direction': param_in
}

functions['guard_1'] = {
    'name_with_case' : 'guard_1',
    'runtime_nature': thread,
    'language': Ada,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['guard_1']['interfaces']['get_data'] = {
    'port_name': 'get_data',
    'parent_fv': 'guard_1',
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

functions['guard_1']['interfaces']['get_data']['paramsInOrdered'] = ['x']

functions['guard_1']['interfaces']['get_data']['paramsOutOrdered'] = []

functions['guard_1']['interfaces']['get_data']['in']['x'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': '/tmp/uniqhometasteguard_1__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'get_data',
    'param_direction': param_in
}

functions['guard_1']['interfaces']['check'] = {
    'port_name': 'check',
    'parent_fv': 'guard_1',
    'direction': PI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': variator,
    'period': 1000,
    'wcet_low': 0,
    'wcet_low_unit': 'ms',
    'wcet_high': 0,
    'wcet_high_unit': 'ms',
    'distant_fv': '',
    'calling_threads': {},
    'distant_name': '',
    'queue_size': 1
}

functions['guard_1']['interfaces']['check']['paramsInOrdered'] = ['whatever']

functions['guard_1']['interfaces']['check']['paramsOutOrdered'] = []

functions['guard_1']['interfaces']['check']['in']['whatever'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/tmp/uniqhometasteguard_1__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'check',
    'param_direction': param_in
}

functions['guard_1']['interfaces']['out_msg'] = {
    'port_name': 'out_msg',
    'parent_fv': 'guard_1',
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

functions['guard_1']['interfaces']['out_msg']['paramsInOrdered'] = ['msg']

functions['guard_1']['interfaces']['out_msg']['paramsOutOrdered'] = []

functions['guard_1']['interfaces']['out_msg']['in']['msg'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/tmp/uniqhometasteguard_1__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'out_msg',
    'param_direction': param_in
}
