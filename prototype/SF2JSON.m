% Getting handle
h = load_system('lamp.slx')
rt = sfroot
ch = rt.find('-isa', 'Stateflow.Chart', '-and', 'Name', 'LampStateMachine')
ss = ch.find('-isa', 'Stateflow.State')
es = ch.find('-isa', 'Stateflow.Event')
ts = ch.find('-isa', 'Stateflow.Transition')

% Reading events and adding to events cell
keyset = {'scope'}
eventsValue = {}
for i = 1:length(es)
   es(i)
   eventsKey{i} = get(es(i), 'Name')
   eventsValue{i} = containers.Map({'scope'}, {get(es(i), 'Scope')},'UniformValues',false)
end
events = containers.Map(eventsKey,eventsValue,'UniformValues',false)

% Reading states and adding to states cell
keySet = {'parent', 'type'}
for i = 1:length(ss)
   valueSet = {'null', 'basic'}
   temp = containers.Map(keySet,valueSet,'UniformValues',false)
   statesKey{i} = get(ss(i), 'Name')
   statesValue{i} = temp
end
states = containers.Map(statesKey,statesValue,'UniformValues',false)

% Reading transitions and adding to transitions cell
sources = {'sourceless'} % for default events 'sourceless' is the source
transKeys = {'destination', 'event'}
transBySrc = {}
for i = 1:length(ts)
    source = get(get(ts(i), 'Source'), 'Name')
    if (isempty(source))
        if (isempty(transBySrc) || isempty(transBySrc{1}))
            destination = get(get(ts(i), 'Destination'), 'Name')
            event = get(ts(i), 'LabelString')
            transBySrc{1} = {}
            transValues = {destination, event}
            t = containers.Map(transKeys, transValues,'UniformValues',false)
            transBySrc{1} = {t}
        else
            
        end
    else
        src = find(strcmp(sources, source))
        if (isempty(src))
            src = length(sources)+1
            sources{src} = source
            transBySrc{src} = {}
        end
        if (isempty(transBySrc) || isempty(transBySrc{1}))
            
        else
            destination = get(get(ts(i), 'Destination'), 'Name')
            event = get(ts(i), 'LabelString')
            transValues = {destination, event}
            t = containers.Map(transKeys, transValues,'UniformValues',false)
            transBySrc{src} = {t}
        end
    end
end
transitions = containers.Map(sources, transBySrc,'UniformValues',false)

% Putting all in one big cell
jsm = containers.Map({'events', 'states', 'transitions'}, {events, states, transitions},'UniformValues',false)

% Writing the big cell to file in JSON format
file = fopen('SF2.json', 'w')
fprintf(file,'%s', jsonencode(jsm))
fclose(file)
