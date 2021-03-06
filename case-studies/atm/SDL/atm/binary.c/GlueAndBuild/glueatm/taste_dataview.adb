-- Code automatically generated by asn1scc tool
WITH adaasn1rtl;
WITH TASTE_BasicTypes;
use type adaasn1rtl.Asn1UInt;
use type adaasn1rtl.Asn1Int;
use type adaasn1rtl.BIT;


PACKAGE BODY TASTE_Dataview IS



FUNCTION asn1SccMyReal_Init return asn1SccMyReal
IS 
BEGIN
    RETURN 0.00000000000000000000E+000;
END asn1SccMyReal_Init;

FUNCTION asn1SccMyReal_IsConstraintValid(val : in asn1SccMyReal) return adaasn1rtl.ASN1_RESULT
IS
    ret : adaasn1rtl.ASN1_RESULT;
 
 
BEGIN
-- REAL (0.00000000000000000000E+000 .. 1.00000000000000000000E+003)-------
-- REAL (0.00000000000000000000E+000 .. 1.00000000000000000000E+003)


    ret := adaasn1rtl.ASN1_RESULT'(Success => (0.00000000000000000000E+000 <= val AND val <= 1.00000000000000000000E+003), ErrorCode => ERR_asn1SccMyReal);
    RETURN ret;
END asn1SccMyReal_IsConstraintValid;

function asn1SccMyReal_Equal(val1, val2: in asn1SccMyReal) return Boolean
is
begin
    return Asn1Real_Equal(val1, val2);
end asn1SccMyReal_Equal;

FUNCTION asn1SccMyString_Init return asn1SccMyString
IS 
BEGIN
    RETURN asn1SccMyString'(Length => 0,Data => asn1SccMyString_array'( others=> 16#0#)) ;
END asn1SccMyString_Init;

FUNCTION asn1SccMyString_IsConstraintValid(val : in asn1SccMyString) return adaasn1rtl.ASN1_RESULT
IS
    ret : adaasn1rtl.ASN1_RESULT;
 
 
BEGIN
-- OCTET STRING (SIZE(0 .. 255))-------
-- OCTET STRING (SIZE(0 .. 255))


    ret := adaasn1rtl.ASN1_RESULT'(Success => (0 <= val.Length AND val.Length <= 255), ErrorCode => ERR_asn1SccMyString);
    RETURN ret;
END asn1SccMyString_IsConstraintValid;

function asn1SccMyString_Equal(val1, val2: in asn1SccMyString) return Boolean
is
    subtype Slice is Natural range 1 .. val1.Length;
begin
    return (val1.Length = val2.Length and then val1.Data(Slice) = val2.Data(Slice));	
end asn1SccMyString_Equal;

FUNCTION asn1SccNum_Init return asn1SccNum
IS 
BEGIN
    RETURN 0;
END asn1SccNum_Init;

FUNCTION asn1SccNum_IsConstraintValid(val : in asn1SccNum) return adaasn1rtl.ASN1_RESULT
IS
    ret : adaasn1rtl.ASN1_RESULT;
 
 
BEGIN
-- INTEGER  (0 .. 9)-------
-- INTEGER  (0 .. 9)


    ret := adaasn1rtl.ASN1_RESULT'(Success => (0 <= val AND val <= 9), ErrorCode => ERR_asn1SccNum);
    RETURN ret;
END asn1SccNum_IsConstraintValid;

function asn1SccNum_Equal(val1, val2: in asn1SccNum) return Boolean
is
begin
    return val1 = val2;
end asn1SccNum_Equal;

FUNCTION asn1SccAmount_Init return asn1SccAmount
IS 
BEGIN
    RETURN 0;
END asn1SccAmount_Init;

FUNCTION asn1SccAmount_IsConstraintValid(val : in asn1SccAmount) return adaasn1rtl.ASN1_RESULT
IS
    ret : adaasn1rtl.ASN1_RESULT;
 
 
BEGIN
-- INTEGER  (0 .. 999999)-------
-- INTEGER  (0 .. 999999)


    ret := adaasn1rtl.ASN1_RESULT'(Success => (0 <= val AND val <= 999999), ErrorCode => ERR_asn1SccAmount);
    RETURN ret;
END asn1SccAmount_IsConstraintValid;

function asn1SccAmount_Equal(val1, val2: in asn1SccAmount) return Boolean
is
begin
    return val1 = val2;
end asn1SccAmount_Equal;

 

END TASTE_Dataview;