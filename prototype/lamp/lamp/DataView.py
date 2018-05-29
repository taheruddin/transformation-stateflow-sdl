#!/usr/bin/env python
# ASN.1 Data model
asn1Files = []
asn1Modules = []
exportedTypes = {}
exportedVariables = {}
importedModules = {}
types = {}
variables = {}
asn1Files.append("./dataview-uniq.asn")
asn1Modules.append("TASTE-Dataview")
exportedTypes["TASTE-Dataview"] = ["TASTE-Boolean", "MyString", "T-Int32", "T-UInt32", "T-Int8", "T-UInt8", "T-Boolean"]
exportedVariables["TASTE-Dataview"] = []
importedModules["TASTE-Dataview"] = [{"TASTE-BasicTypes":{"ImportedTypes": ["T-Int32","T-UInt32","T-Int8","T-UInt8","T-Boolean"], "ImportedVariables": []}}]

types["TASTE-Boolean"] = type("TASTE-Boolean", (object,), {
    "Line": 5, "CharPositionInLine": 0, "type": type("TASTE-Boolean_type", (object,), {
        "Line": 5, "CharPositionInLine": 18, "kind": "BooleanType"
    })
})

types["MyString"] = type("MyString", (object,), {
    "Line": 6, "CharPositionInLine": 0, "type": type("MyString_type", (object,), {
        "Line": 6, "CharPositionInLine": 13, "kind": "OctetStringType", "Min": "0", "Max": "255"
    })
})



asn1Modules.append("TASTE-BasicTypes")
exportedTypes["TASTE-BasicTypes"] = ["T-Int32", "T-UInt32", "T-Int8", "T-UInt8", "T-Boolean"]
exportedVariables["TASTE-BasicTypes"] = []
importedModules["TASTE-BasicTypes"] = []

types["T-Int32"] = type("T-Int32", (object,), {
    "Line": 47, "CharPositionInLine": 0, "type": type("T-Int32_type", (object,), {
        "Line": 47, "CharPositionInLine": 13, "kind": "IntegerType", "Min": "-2147483648", "Max": "2147483647"
    })
})

types["T-UInt32"] = type("T-UInt32", (object,), {
    "Line": 49, "CharPositionInLine": 0, "type": type("T-UInt32_type", (object,), {
        "Line": 49, "CharPositionInLine": 13, "kind": "IntegerType", "Min": "0", "Max": "4294967295"
    })
})

types["T-Int8"] = type("T-Int8", (object,), {
    "Line": 51, "CharPositionInLine": 0, "type": type("T-Int8_type", (object,), {
        "Line": 51, "CharPositionInLine": 11, "kind": "IntegerType", "Min": "-128", "Max": "127"
    })
})

types["T-UInt8"] = type("T-UInt8", (object,), {
    "Line": 53, "CharPositionInLine": 0, "type": type("T-UInt8_type", (object,), {
        "Line": 53, "CharPositionInLine": 12, "kind": "IntegerType", "Min": "0", "Max": "255"
    })
})

types["T-Boolean"] = type("T-Boolean", (object,), {
    "Line": 55, "CharPositionInLine": 0, "type": type("T-Boolean_type", (object,), {
        "Line": 55, "CharPositionInLine": 14, "kind": "BooleanType"
    })
})


