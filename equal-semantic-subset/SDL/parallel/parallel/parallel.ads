-- This file was generated automatically: DO NOT MODIFY IT !

with TASTE_BasicTypes;
use TASTE_BasicTypes;
with TASTE_Dataview;
use TASTE_Dataview;
with adaasn1rtl;
use adaasn1rtl;



package parallel is
    --  Provided interface "in_msg"
    procedure in_msg(msg: access asn1SccMyString);
    pragma Export(C, in_msg, "parallel_in_msg");
    --  Required interface "out_msg"
    procedure RI�out_msg(msg: access asn1SccMyString);
    pragma import(C, RI�out_msg, "parallel_RI_out_msg");
end parallel;