-- This file was generated automatically: DO NOT MODIFY IT !

with TASTE_BasicTypes;
use TASTE_BasicTypes;
with TASTE_Dataview;
use TASTE_Dataview;
with adaasn1rtl;
use adaasn1rtl;



package guard_2 is
    --  Provided interface "e"
    procedure e(imsg: access asn1SccMyString);
    pragma Export(C, e, "guard_2_e");
    --  Required interface "out_msg"
    procedure RIÜout_msg(omsg: access asn1SccMyString);
    pragma import(C, RIÜout_msg, "guard_2_RI_out_msg");
end guard_2;