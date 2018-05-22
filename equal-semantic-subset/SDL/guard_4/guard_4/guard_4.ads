-- This file was generated automatically: DO NOT MODIFY IT !

with TASTE_BasicTypes;
use TASTE_BasicTypes;
with TASTE_Dataview;
use TASTE_Dataview;
with adaasn1rtl;
use adaasn1rtl;



package guard_4 is
    --  Provided interface "e"
    procedure e(x: access asn1SccMyReal);
    pragma Export(C, e, "guard_4_e");
    --  Required interface "out_msg"
    procedure RIÜout_msg(msg: access asn1SccMyString);
    pragma import(C, RIÜout_msg, "guard_4_RI_out_msg");
end guard_4;