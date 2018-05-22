-- This file was generated automatically: DO NOT MODIFY IT !

with TASTE_BasicTypes;
use TASTE_BasicTypes;
with TASTE_Dataview;
use TASTE_Dataview;
with adaasn1rtl;
use adaasn1rtl;



package guard_1 is
    --  Provided interface "get_data"
    procedure get_data(x: access asn1SccMyReal);
    pragma Export(C, get_data, "guard_1_get_data");
    --  Provided interface "check"
    procedure check(whatever: access asn1SccMyString);
    pragma Export(C, check, "guard_1_check");
    --  Required interface "out_msg"
    procedure RIÜout_msg(msg: access asn1SccMyString);
    pragma import(C, RIÜout_msg, "guard_1_RI_out_msg");
end guard_1;