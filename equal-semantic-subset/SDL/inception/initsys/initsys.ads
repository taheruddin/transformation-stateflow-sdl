-- This file was generated automatically: DO NOT MODIFY IT !

with TASTE_BasicTypes;
use TASTE_BasicTypes;
with TASTE_Dataview;
use TASTE_Dataview;
with adaasn1rtl;
use adaasn1rtl;



package initsys is
    --  Provided interface "inmsg"
    procedure inmsg(whatever: access asn1SccMyString);
    pragma Export(C, inmsg, "initsys_inmsg");
    --  Required interface "outmsg"
    procedure RI�outmsg(msg: access asn1SccMyString);
    pragma import(C, RI�outmsg, "initsys_RI_outmsg");
end initsys;