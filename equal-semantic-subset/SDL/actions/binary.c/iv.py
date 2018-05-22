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
    'type': 'T_Int32',
    'asn1_module': 'TASTE_BasicTypes',
    'basic_type': integer,
    'asn1_filename': '/tmp/uniqhometasteactions__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'out_msg',
    'param_direction': param_in
}

functions['gui']['interfaces']['push'] = {
    'port_name': 'push',
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
    'distant_fv': 'actions',
    'calling_threads': {},
    'distant_name': 'push',
    'queue_size': 1
}

functions['gui']['interfaces']['push']['paramsInOrdered'] = ['w']

functions['gui']['interfaces']['push']['paramsOutOrdered'] = []

functions['gui']['interfaces']['push']['in']['w'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/tmp/uniqhometasteactions__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'push',
    'param_direction': param_in
}

functions['gui']['interfaces']['tap'] = {
    'port_name': 'tap',
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
    'distant_fv': 'actions',
    'calling_threads': {},
    'distant_name': 'tap',
    'queue_size': 1
}

functions['gui']['interfaces']['tap']['paramsInOrdered'] = ['w']

functions['gui']['interfaces']['tap']['paramsOutOrdered'] = []

functions['gui']['interfaces']['tap']['in']['w'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/tmp/uniqhometasteactions__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'tap',
    'param_direction': param_in
}

functions['actions'] = {
    'name_with_case' : 'actions',
    'runtime_nature': thread,
    'language': Ada,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['actions']['interfaces']['push'] = {
    'port_name': 'push',
    'parent_fv': 'actions',
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

functions['actions']['interfaces']['push']['paramsInOrdered'] = ['w']

functions['actions']['interfaces']['push']['paramsOutOrdered'] = []

functions['actions']['interfaces']['push']['in']['w'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/tmp/uniqhometasteactions__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'push',
    'param_direction': param_in
}

functions['actions']['interfaces']['tap'] = {
    'port_name': 'tap',
    'parent_fv': 'actions',
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

functions['actions']['interfaces']['tap']['paramsInOrdered'] = ['w']

functions['actions']['interfaces']['tap']['paramsOutOrdered'] = []

functions['actions']['interfaces']['tap']['in']['w'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/tmp/uniqhometasteactions__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'tap',
    'param_direction': param_in
}

functions['actions']['interfaces']['out_msg'] = {
    'port_name': 'out_msg',
    'parent_fv': 'actions',
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

functions['actions']['interfaces']['out_msg']['paramsInOrdered'] = ['msg']

functions['actions']['interfaces']['out_msg']['paramsOutOrdered'] = []

functions['actions']['interfaces']['out_msg']['in']['msg'] = {
    'type': 'T_Int32',
    'asn1_module': 'TASTE_BasicTypes',
    'basic_type': integer,
    'asn1_filename': '/tmp/uniqhometasteactions__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'out_msg',
    'param_direction': param_in
}
