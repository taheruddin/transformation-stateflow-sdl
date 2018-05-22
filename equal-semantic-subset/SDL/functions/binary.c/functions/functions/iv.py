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

functions['gui']['interfaces']['out_msg']['paramsInOrdered'] = ['y']

functions['gui']['interfaces']['out_msg']['paramsOutOrdered'] = []

functions['gui']['interfaces']['out_msg']['in']['y'] = {
    'type': 'T_Int32',
    'asn1_module': 'TASTE_BasicTypes',
    'basic_type': integer,
    'asn1_filename': '/home/taste/actions/functions/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'out_msg',
    'param_direction': param_in
}

functions['gui']['interfaces']['e'] = {
    'port_name': 'e',
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
    'distant_fv': 'functions',
    'calling_threads': {},
    'distant_name': 'e',
    'queue_size': 1
}

functions['gui']['interfaces']['e']['paramsInOrdered'] = ['x']

functions['gui']['interfaces']['e']['paramsOutOrdered'] = []

functions['gui']['interfaces']['e']['in']['x'] = {
    'type': 'T_Int32',
    'asn1_module': 'TASTE_BasicTypes',
    'basic_type': integer,
    'asn1_filename': '/home/taste/actions/functions/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'e',
    'param_direction': param_in
}

functions['functions'] = {
    'name_with_case' : 'functions',
    'runtime_nature': thread,
    'language': OG,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['functions']['interfaces']['e'] = {
    'port_name': 'e',
    'parent_fv': 'functions',
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

functions['functions']['interfaces']['e']['paramsInOrdered'] = ['x']

functions['functions']['interfaces']['e']['paramsOutOrdered'] = []

functions['functions']['interfaces']['e']['in']['x'] = {
    'type': 'T_Int32',
    'asn1_module': 'TASTE_BasicTypes',
    'basic_type': integer,
    'asn1_filename': '/home/taste/actions/functions/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'e',
    'param_direction': param_in
}

functions['functions']['interfaces']['out_msg'] = {
    'port_name': 'out_msg',
    'parent_fv': 'functions',
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

functions['functions']['interfaces']['out_msg']['paramsInOrdered'] = ['y']

functions['functions']['interfaces']['out_msg']['paramsOutOrdered'] = []

functions['functions']['interfaces']['out_msg']['in']['y'] = {
    'type': 'T_Int32',
    'asn1_module': 'TASTE_BasicTypes',
    'basic_type': integer,
    'asn1_filename': '/home/taste/actions/functions/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'out_msg',
    'param_direction': param_in
}
