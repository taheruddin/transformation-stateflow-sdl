-- This file was generated automatically: DO NOT MODIFY IT !

with TASTE_BasicTypes;
use TASTE_BasicTypes;
with adaasn1rtl;
use adaasn1rtl;



package functions is
    --  Provided interface "e"
    procedure e(x: access asn1SccT_Int32);
    pragma Export(C, e, "functions_e");
    --  Required interface "out_msg"
    procedure RIÜout_msg(y: access asn1SccT_Int32);
    pragma import(C, RIÜout_msg, "functions_RI_out_msg");
end functions;