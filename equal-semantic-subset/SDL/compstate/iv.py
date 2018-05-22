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
    'asn1_filename': '/home/taste/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'out_msg',
    'param_direction': param_in
}

functions['gui']['interfaces']['switch_on'] = {
    'port_name': 'switch_on',
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
    'distant_fv': 'compstate',
    'calling_threads': {},
    'distant_name': 'switch_on',
    'queue_size': 1
}

functions['gui']['interfaces']['switch_on']['paramsInOrdered'] = ['w']

functions['gui']['interfaces']['switch_on']['paramsOutOrdered'] = []

functions['gui']['interfaces']['switch_on']['in']['w'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/home/taste/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'switch_on',
    'param_direction': param_in
}

functions['gui']['interfaces']['switch_off'] = {
    'port_name': 'switch_off',
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
    'distant_fv': 'compstate',
    'calling_threads': {},
    'distant_name': 'switch_off',
    'queue_size': 1
}

functions['gui']['interfaces']['switch_off']['paramsInOrdered'] = ['w']

functions['gui']['interfaces']['switch_off']['paramsOutOrdered'] = []

functions['gui']['interfaces']['switch_off']['in']['w'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/home/taste/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'switch_off',
    'param_direction': param_in
}

functions['gui']['interfaces']['restart'] = {
    'port_name': 'restart',
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
    'distant_fv': 'compstate',
    'calling_threads': {},
    'distant_name': 'restart',
    'queue_size': 1
}

functions['gui']['interfaces']['restart']['paramsInOrdered'] = ['w']

functions['gui']['interfaces']['restart']['paramsOutOrdered'] = []

functions['gui']['interfaces']['restart']['in']['w'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/home/taste/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'restart',
    'param_direction': param_in
}

functions['gui']['interfaces']['start_recording'] = {
    'port_name': 'start_recording',
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
    'distant_fv': 'compstate',
    'calling_threads': {},
    'distant_name': 'start_recording',
    'queue_size': 1
}

functions['gui']['interfaces']['start_recording']['paramsInOrdered'] = ['w']

functions['gui']['interfaces']['start_recording']['paramsOutOrdered'] = []

functions['gui']['interfaces']['start_recording']['in']['w'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/home/taste/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'start_recording',
    'param_direction': param_in
}

functions['gui']['interfaces']['pause'] = {
    'port_name': 'pause',
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
    'distant_fv': 'compstate',
    'calling_threads': {},
    'distant_name': 'pause',
    'queue_size': 1
}

functions['gui']['interfaces']['pause']['paramsInOrdered'] = ['w']

functions['gui']['interfaces']['pause']['paramsOutOrdered'] = []

functions['gui']['interfaces']['pause']['in']['w'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/home/taste/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'pause',
    'param_direction': param_in
}

functions['gui']['interfaces']['resume'] = {
    'port_name': 'resume',
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
    'distant_fv': 'compstate',
    'calling_threads': {},
    'distant_name': 'resume',
    'queue_size': 1
}

functions['gui']['interfaces']['resume']['paramsInOrdered'] = ['w']

functions['gui']['interfaces']['resume']['paramsOutOrdered'] = []

functions['gui']['interfaces']['resume']['in']['w'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/home/taste/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'resume',
    'param_direction': param_in
}

functions['gui']['interfaces']['fail'] = {
    'port_name': 'fail',
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
    'distant_fv': 'compstate',
    'calling_threads': {},
    'distant_name': 'fail',
    'queue_size': 1
}

functions['gui']['interfaces']['fail']['paramsInOrdered'] = ['w']

functions['gui']['interfaces']['fail']['paramsOutOrdered'] = []

functions['gui']['interfaces']['fail']['in']['w'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/home/taste/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'fail',
    'param_direction': param_in
}

functions['gui']['interfaces']['stop_recording'] = {
    'port_name': 'stop_recording',
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
    'distant_fv': 'compstate',
    'calling_threads': {},
    'distant_name': 'stop_recording',
    'queue_size': 1
}

functions['gui']['interfaces']['stop_recording']['paramsInOrdered'] = ['w']

functions['gui']['interfaces']['stop_recording']['paramsOutOrdered'] = []

functions['gui']['interfaces']['stop_recording']['in']['w'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/home/taste/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'stop_recording',
    'param_direction': param_in
}

functions['compstate'] = {
    'name_with_case' : 'compstate',
    'runtime_nature': thread,
    'language': OG,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['compstate']['interfaces']['switch_on'] = {
    'port_name': 'switch_on',
    'parent_fv': 'compstate',
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

functions['compstate']['interfaces']['switch_on']['paramsInOrdered'] = ['w']

functions['compstate']['interfaces']['switch_on']['paramsOutOrdered'] = []

functions['compstate']['interfaces']['switch_on']['in']['w'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/home/taste/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'switch_on',
    'param_direction': param_in
}

functions['compstate']['interfaces']['switch_off'] = {
    'port_name': 'switch_off',
    'parent_fv': 'compstate',
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

functions['compstate']['interfaces']['switch_off']['paramsInOrdered'] = ['w']

functions['compstate']['interfaces']['switch_off']['paramsOutOrdered'] = []

functions['compstate']['interfaces']['switch_off']['in']['w'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/home/taste/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'switch_off',
    'param_direction': param_in
}

functions['compstate']['interfaces']['restart'] = {
    'port_name': 'restart',
    'parent_fv': 'compstate',
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

functions['compstate']['interfaces']['restart']['paramsInOrdered'] = ['w']

functions['compstate']['interfaces']['restart']['paramsOutOrdered'] = []

functions['compstate']['interfaces']['restart']['in']['w'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/home/taste/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'restart',
    'param_direction': param_in
}

functions['compstate']['interfaces']['start_recording'] = {
    'port_name': 'start_recording',
    'parent_fv': 'compstate',
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

functions['compstate']['interfaces']['start_recording']['paramsInOrdered'] = ['w']

functions['compstate']['interfaces']['start_recording']['paramsOutOrdered'] = []

functions['compstate']['interfaces']['start_recording']['in']['w'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/home/taste/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'start_recording',
    'param_direction': param_in
}

functions['compstate']['interfaces']['pause'] = {
    'port_name': 'pause',
    'parent_fv': 'compstate',
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

functions['compstate']['interfaces']['pause']['paramsInOrdered'] = ['w']

functions['compstate']['interfaces']['pause']['paramsOutOrdered'] = []

functions['compstate']['interfaces']['pause']['in']['w'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/home/taste/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'pause',
    'param_direction': param_in
}

functions['compstate']['interfaces']['resume'] = {
    'port_name': 'resume',
    'parent_fv': 'compstate',
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

functions['compstate']['interfaces']['resume']['paramsInOrdered'] = ['w']

functions['compstate']['interfaces']['resume']['paramsOutOrdered'] = []

functions['compstate']['interfaces']['resume']['in']['w'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/home/taste/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'resume',
    'param_direction': param_in
}

functions['compstate']['interfaces']['stop_recording'] = {
    'port_name': 'stop_recording',
    'parent_fv': 'compstate',
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

functions['compstate']['interfaces']['stop_recording']['paramsInOrdered'] = ['w']

functions['compstate']['interfaces']['stop_recording']['paramsOutOrdered'] = []

functions['compstate']['interfaces']['stop_recording']['in']['w'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/home/taste/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'stop_recording',
    'param_direction': param_in
}

functions['compstate']['interfaces']['fail'] = {
    'port_name': 'fail',
    'parent_fv': 'compstate',
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

functions['compstate']['interfaces']['fail']['paramsInOrdered'] = ['w']

functions['compstate']['interfaces']['fail']['paramsOutOrdered'] = []

functions['compstate']['interfaces']['fail']['in']['w'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/home/taste/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'fail',
    'param_direction': param_in
}

functions['compstate']['interfaces']['out_msg'] = {
    'port_name': 'out_msg',
    'parent_fv': 'compstate',
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

functions['compstate']['interfaces']['out_msg']['paramsInOrdered'] = ['msg']

functions['compstate']['interfaces']['out_msg']['paramsOutOrdered'] = []

functions['compstate']['interfaces']['out_msg']['in']['msg'] = {
    'type': 'MyString',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': string,
    'asn1_filename': '/home/taste/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'out_msg',
    'param_direction': param_in
}
