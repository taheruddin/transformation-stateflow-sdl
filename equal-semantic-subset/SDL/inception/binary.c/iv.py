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

functions['gui']['interfaces']['outmsg'] = {
    'port_name': 'outmsg',
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

functions['gui']['interfaces']['outmsg']['paramsInOrdered'] = ['msg']

functions['gui']['interfaces']['outmsg']['paramsOutOrdered'] = []

functions['gui']['interfaces']['outmsg']['in']['msg'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/tmp/uniqhometasteinception__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'outmsg',
    'param_direction': param_in
}

functions['gui']['interfaces']['inmsg'] = {
    'port_name': 'inmsg',
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
    'distant_fv': 'initsys',
    'calling_threads': {},
    'distant_name': 'inmsg',
    'queue_size': 1
}

functions['gui']['interfaces']['inmsg']['paramsInOrdered'] = ['whatever']

functions['gui']['interfaces']['inmsg']['paramsOutOrdered'] = []

functions['gui']['interfaces']['inmsg']['in']['whatever'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/tmp/uniqhometasteinception__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'inmsg',
    'param_direction': param_in
}

functions['initsys'] = {
    'name_with_case' : 'initsys',
    'runtime_nature': thread,
    'language': Ada,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['initsys']['interfaces']['inmsg'] = {
    'port_name': 'inmsg',
    'parent_fv': 'initsys',
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

functions['initsys']['interfaces']['inmsg']['paramsInOrdered'] = ['whatever']

functions['initsys']['interfaces']['inmsg']['paramsOutOrdered'] = []

functions['initsys']['interfaces']['inmsg']['in']['whatever'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/tmp/uniqhometasteinception__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'inmsg',
    'param_direction': param_in
}

functions['initsys']['interfaces']['outmsg'] = {
    'port_name': 'outmsg',
    'parent_fv': 'initsys',
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
    'distant_name': 'outmsg',
    'queue_size': 1
}

functions['initsys']['interfaces']['outmsg']['paramsInOrdered'] = ['msg']

functions['initsys']['interfaces']['outmsg']['paramsOutOrdered'] = []

functions['initsys']['interfaces']['outmsg']['in']['msg'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/tmp/uniqhometasteinception__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'outmsg',
    'param_direction': param_in
}
