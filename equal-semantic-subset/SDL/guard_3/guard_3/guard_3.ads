-- This file was generated automatically: DO NOT MODIFY IT !

with TASTE_Dataview;
use TASTE_Dataview;
with TASTE_BasicTypes;
use TASTE_BasicTypes;
with adaasn1rtl;
use adaasn1rtl;



package guard_3 is
    --  Provided interface "e"
    procedure e(x: access asn1SccMyReal);
    pragma Export(C, e, "guard_3_e");
    --  Required interface "out_msg"
    procedure RI�out_msg(msg: access asn1SccMyString);
    pragma import(C, RI�out_msg, "guard_3_RI_out_msg");
end guard_3;