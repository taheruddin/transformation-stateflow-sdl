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

functions['gui']['interfaces']['outputmsg'] = {
    'port_name': 'outputmsg',
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

functions['gui']['interfaces']['outputmsg']['paramsInOrdered'] = ['outgo']

functions['gui']['interfaces']['outputmsg']['paramsOutOrdered'] = []

functions['gui']['interfaces']['outputmsg']['in']['outgo'] = {
    'type': 'T_Boolean',
    'asn1_module': 'TASTE_BasicTypes',
    'basic_type': boolean,
    'asn1_filename': '/home/taste/timersim/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'outputmsg',
    'param_direction': param_in
}

functions['gui']['interfaces']['inputmsg'] = {
    'port_name': 'inputmsg',
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
    'distant_fv': 'timersys',
    'calling_threads': {},
    'distant_name': 'inputmsg',
    'queue_size': 1
}

functions['gui']['interfaces']['inputmsg']['paramsInOrdered'] = ['into']

functions['gui']['interfaces']['inputmsg']['paramsOutOrdered'] = []

functions['gui']['interfaces']['inputmsg']['in']['into'] = {
    'type': 'T_Boolean',
    'asn1_module': 'TASTE_BasicTypes',
    'basic_type': boolean,
    'asn1_filename': '/home/taste/timersim/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'inputmsg',
    'param_direction': param_in
}

functions['timersys'] = {
    'name_with_case' : 'timerSys',
    'runtime_nature': thread,
    'language': OG,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['timersys']['functional_states']['sdltmr'] = {
    'fullFsName' : 'sdltmr',
    'typeName' : 'Timer',
    'moduleName' : 'TASTE-Directives',
    'asn1FileName' : 'dummy'
}

functions['timersys']['interfaces']['inputmsg'] = {
    'port_name': 'inputmsg',
    'parent_fv': 'timersys',
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

functions['timersys']['interfaces']['inputmsg']['paramsInOrdered'] = ['into']

functions['timersys']['interfaces']['inputmsg']['paramsOutOrdered'] = []

functions['timersys']['interfaces']['inputmsg']['in']['into'] = {
    'type': 'T_Boolean',
    'asn1_module': 'TASTE_BasicTypes',
    'basic_type': boolean,
    'asn1_filename': '/home/taste/timersim/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'inputmsg',
    'param_direction': param_in
}

functions['timersys']['interfaces']['outputmsg'] = {
    'port_name': 'outputmsg',
    'parent_fv': 'timersys',
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
    'distant_name': 'outputmsg',
    'queue_size': 1
}

functions['timersys']['interfaces']['outputmsg']['paramsInOrdered'] = ['outgo']

functions['timersys']['interfaces']['outputmsg']['paramsOutOrdered'] = []

functions['timersys']['interfaces']['outputmsg']['in']['outgo'] = {
    'type': 'T_Boolean',
    'asn1_module': 'TASTE_BasicTypes',
    'basic_type': boolean,
    'asn1_filename': '/home/taste/timersim/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'outputmsg',
    'param_direction': param_in
}
