-- This file was generated automatically: DO NOT MODIFY IT !

with TASTE_Dataview;
use TASTE_Dataview;
with TASTE_BasicTypes;
use TASTE_BasicTypes;
with adaasn1rtl;
use adaasn1rtl;



package lamp is
    --  Provided interface "push"
    procedure push(w: access asn1SccMyString);
    pragma Export(C, push, "lamp_push");
end lamp;