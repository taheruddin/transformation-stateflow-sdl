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
    'asn1_filename': '/home/taste/coffee/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'out_msg',
    'param_direction': param_in
}

functions['gui']['interfaces']['get_init_tmpr'] = {
    'port_name': 'get_init_tmpr',
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
    'distant_fv': 'coffee',
    'calling_threads': {},
    'distant_name': 'get_init_tmpr',
    'queue_size': 1
}

functions['gui']['interfaces']['get_init_tmpr']['paramsInOrdered'] = ['init_tmpr']

functions['gui']['interfaces']['get_init_tmpr']['paramsOutOrdered'] = []

functions['gui']['interfaces']['get_init_tmpr']['in']['init_tmpr'] = {
    'type': 'T_Int32',
    'asn1_module': 'TASTE_BasicTypes',
    'basic_type': integer,
    'asn1_filename': '/home/taste/coffee/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'get_init_tmpr',
    'param_direction': param_in
}

functions['gui']['interfaces']['get_init_water'] = {
    'port_name': 'get_init_water',
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
    'distant_fv': 'coffee',
    'calling_threads': {},
    'distant_name': 'get_init_water',
    'queue_size': 1
}

functions['gui']['interfaces']['get_init_water']['paramsInOrdered'] = ['init_water']

functions['gui']['interfaces']['get_init_water']['paramsOutOrdered'] = []

functions['gui']['interfaces']['get_init_water']['in']['init_water'] = {
    'type': 'T_Int32',
    'asn1_module': 'TASTE_BasicTypes',
    'basic_type': integer,
    'asn1_filename': '/home/taste/coffee/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'get_init_water',
    'param_direction': param_in
}

functions['gui']['interfaces']['for_water'] = {
    'port_name': 'for_water',
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
    'distant_fv': 'coffee',
    'calling_threads': {},
    'distant_name': 'for_water',
    'queue_size': 1
}

functions['gui']['interfaces']['for_water']['paramsInOrdered'] = ['w']

functions['gui']['interfaces']['for_water']['paramsOutOrdered'] = []

functions['gui']['interfaces']['for_water']['in']['w'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/home/taste/coffee/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'for_water',
    'param_direction': param_in
}

functions['gui']['interfaces']['for_water_tmpr'] = {
    'port_name': 'for_water_tmpr',
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
    'distant_fv': 'coffee',
    'calling_threads': {},
    'distant_name': 'for_water_tmpr',
    'queue_size': 1
}

functions['gui']['interfaces']['for_water_tmpr']['paramsInOrdered'] = ['w']

functions['gui']['interfaces']['for_water_tmpr']['paramsOutOrdered'] = []

functions['gui']['interfaces']['for_water_tmpr']['in']['w'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/home/taste/coffee/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'for_water_tmpr',
    'param_direction': param_in
}

functions['gui']['interfaces']['for_coffee'] = {
    'port_name': 'for_coffee',
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
    'distant_fv': 'coffee',
    'calling_threads': {},
    'distant_name': 'for_coffee',
    'queue_size': 1
}

functions['gui']['interfaces']['for_coffee']['paramsInOrdered'] = ['w']

functions['gui']['interfaces']['for_coffee']['paramsOutOrdered'] = []

functions['gui']['interfaces']['for_coffee']['in']['w'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/home/taste/coffee/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'for_coffee',
    'param_direction': param_in
}

functions['gui']['interfaces']['for_ticking'] = {
    'port_name': 'for_ticking',
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
    'distant_fv': 'coffee',
    'calling_threads': {},
    'distant_name': 'for_ticking',
    'queue_size': 1
}

functions['gui']['interfaces']['for_ticking']['paramsInOrdered'] = ['w']

functions['gui']['interfaces']['for_ticking']['paramsOutOrdered'] = []

functions['gui']['interfaces']['for_ticking']['in']['w'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/home/taste/coffee/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'for_ticking',
    'param_direction': param_in
}

functions['coffee'] = {
    'name_with_case' : 'coffee',
    'runtime_nature': thread,
    'language': OG,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['coffee']['functional_states']['tmr'] = {
    'fullFsName' : 'tmr',
    'typeName' : 'Timer',
    'moduleName' : 'TASTE-Directives',
    'asn1FileName' : 'dummy'
}

functions['coffee']['functional_states']['tmr1'] = {
    'fullFsName' : 'tmr1',
    'typeName' : 'Timer',
    'moduleName' : 'TASTE-Directives',
    'asn1FileName' : 'dummy'
}

functions['coffee']['functional_states']['tmr2'] = {
    'fullFsName' : 'tmr2',
    'typeName' : 'Timer',
    'moduleName' : 'TASTE-Directives',
    'asn1FileName' : 'dummy'
}

functions['coffee']['functional_states']['tmr3'] = {
    'fullFsName' : 'tmr3',
    'typeName' : 'Timer',
    'moduleName' : 'TASTE-Directives',
    'asn1FileName' : 'dummy'
}

functions['coffee']['interfaces']['get_init_tmpr'] = {
    'port_name': 'get_init_tmpr',
    'parent_fv': 'coffee',
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

functions['coffee']['interfaces']['get_init_tmpr']['paramsInOrdered'] = ['init_tmpr']

functions['coffee']['interfaces']['get_init_tmpr']['paramsOutOrdered'] = []

functions['coffee']['interfaces']['get_init_tmpr']['in']['init_tmpr'] = {
    'type': 'T_Int32',
    'asn1_module': 'TASTE_BasicTypes',
    'basic_type': integer,
    'asn1_filename': '/home/taste/coffee/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'get_init_tmpr',
    'param_direction': param_in
}

functions['coffee']['interfaces']['get_init_water'] = {
    'port_name': 'get_init_water',
    'parent_fv': 'coffee',
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

functions['coffee']['interfaces']['get_init_water']['paramsInOrdered'] = ['init_water']

functions['coffee']['interfaces']['get_init_water']['paramsOutOrdered'] = []

functions['coffee']['interfaces']['get_init_water']['in']['init_water'] = {
    'type': 'T_Int32',
    'asn1_module': 'TASTE_BasicTypes',
    'basic_type': integer,
    'asn1_filename': '/home/taste/coffee/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'get_init_water',
    'param_direction': param_in
}

functions['coffee']['interfaces']['for_water'] = {
    'port_name': 'for_water',
    'parent_fv': 'coffee',
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

functions['coffee']['interfaces']['for_water']['paramsInOrdered'] = ['w']

functions['coffee']['interfaces']['for_water']['paramsOutOrdered'] = []

functions['coffee']['interfaces']['for_water']['in']['w'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/home/taste/coffee/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'for_water',
    'param_direction': param_in
}

functions['coffee']['interfaces']['for_water_tmpr'] = {
    'port_name': 'for_water_tmpr',
    'parent_fv': 'coffee',
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

functions['coffee']['interfaces']['for_water_tmpr']['paramsInOrdered'] = ['w']

functions['coffee']['interfaces']['for_water_tmpr']['paramsOutOrdered'] = []

functions['coffee']['interfaces']['for_water_tmpr']['in']['w'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/home/taste/coffee/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'for_water_tmpr',
    'param_direction': param_in
}

functions['coffee']['interfaces']['for_coffee'] = {
    'port_name': 'for_coffee',
    'parent_fv': 'coffee',
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

functions['coffee']['interfaces']['for_coffee']['paramsInOrdered'] = ['w']

functions['coffee']['interfaces']['for_coffee']['paramsOutOrdered'] = []

functions['coffee']['interfaces']['for_coffee']['in']['w'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/home/taste/coffee/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'for_coffee',
    'param_direction': param_in
}

functions['coffee']['interfaces']['for_ticking'] = {
    'port_name': 'for_ticking',
    'parent_fv': 'coffee',
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

functions['coffee']['interfaces']['for_ticking']['paramsInOrdered'] = ['w']

functions['coffee']['interfaces']['for_ticking']['paramsOutOrdered'] = []

functions['coffee']['interfaces']['for_ticking']['in']['w'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/home/taste/coffee/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'for_ticking',
    'param_direction': param_in
}

functions['coffee']['interfaces']['out_msg'] = {
    'port_name': 'out_msg',
    'parent_fv': 'coffee',
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

functions['coffee']['interfaces']['out_msg']['paramsInOrdered'] = ['msg']

functions['coffee']['interfaces']['out_msg']['paramsOutOrdered'] = []

functions['coffee']['interfaces']['out_msg']['in']['msg'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/home/taste/coffee/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'out_msg',
    'param_direction': param_in
}
