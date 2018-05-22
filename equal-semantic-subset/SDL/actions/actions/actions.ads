-- This file was generated automatically: DO NOT MODIFY IT !

with TASTE_BasicTypes;
use TASTE_BasicTypes;
with TASTE_Dataview;
use TASTE_Dataview;
with adaasn1rtl;
use adaasn1rtl;



package actions is
    --  Provided interface "push"
    procedure push(w: access asn1SccMyString);
    pragma Export(C, push, "actions_push");
    --  Provided interface "tap"
    procedure tap(w: access asn1SccMyString);
    pragma Export(C, tap, "actions_tap");
    --  Required interface "out_msg"
    procedure RIÜout_msg(msg: access asn1SccT_Int32);
    pragma import(C, RIÜout_msg, "actions_RI_out_msg");
end actions;