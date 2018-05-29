import opengeode


#ast = opengeode.parse (['/home/taste/lamp/lamp/lamp.pr', '/home/taste/lamp/lamp/system_structure.pr', '/home/taste/lamp/lamp/DataView.pr'])

ast = opengeode.parse (['/home/taste/lamp/lamp/lamp.pr'])


root_ast = ast[0]
proc = root_ast.processes[0]
print(proc.mapping)
print(len(proc.transitions))
print(proc.mapping['off'][0].transition)
print(type(proc.mapping['off'][0]))
print(proc.mapping['off'][0].inputString)
print(type(proc.mapping['off'][0].transition.terminator.kind))
print(proc.mapping['on'])

kind = 'off'
terminator = opengeode.ogAST.Terminator()
terminator.kind = kind
transition = opengeode.ogAST.Transition()
input = opengeode.ogAST.Input()
input.transition = transition
input.inputString = 'push(w)'
proc.mapping['on'].append(input)

print(proc.mapping['on'][0].transition.trace())
print(root_ast.processes[0].mapping['on'][0].trace())
print(proc.mapping)
opengeode.Pr.parse_scene(root_ast)






print("end")
