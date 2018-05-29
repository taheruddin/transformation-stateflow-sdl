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
    'runtime_nature': passive,
    'language': GUI,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
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
    'distant_fv': 'lamp',
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
    'asn1_filename': '/home/taste/lamp/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'push',
    'param_direction': param_in
}

functions['lamp'] = {
    'name_with_case' : 'lamp',
    'runtime_nature': thread,
    'language': OG,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['lamp']['interfaces']['push'] = {
    'port_name': 'push',
    'parent_fv': 'lamp',
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

functions['lamp']['interfaces']['push']['paramsInOrdered'] = ['w']

functions['lamp']['interfaces']['push']['paramsOutOrdered'] = []

functions['lamp']['interfaces']['push']['in']['w'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/home/taste/lamp/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'push',
    'param_direction': param_in
}
