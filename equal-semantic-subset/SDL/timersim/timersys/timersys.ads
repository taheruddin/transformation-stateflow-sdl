-- This file was generated automatically: DO NOT MODIFY IT !

with TASTE_BasicTypes;
use TASTE_BasicTypes;
with TASTE_Dataview;
use TASTE_Dataview;
with adaasn1rtl;
use adaasn1rtl;



package timersys is
    --  Provided interface "inputmsg"
    procedure inputmsg(into: access asn1SccT_Boolean);
    pragma Export(C, inputmsg, "timersys_inputmsg");
    --  Provided interface "sdltmr"
    procedure sdltmr;
    pragma Export(C, sdltmr, "timersys_sdltmr");
    --  Required interface "outputmsg"
    procedure RIÜoutputmsg(outgo: access asn1SccT_Boolean);
    pragma import(C, RIÜoutputmsg, "timersys_RI_outputmsg");
    --  Timer sdltmr SET and RESET functions
    procedure SET_sdltmr(val: access asn1SccT_UInt32);
    pragma import(C, SET_sdltmr, "timersys_RI_set_sdltmr");
    procedure RESET_sdltmr;
    pragma import(C, RESET_sdltmr, "timersys_RI_reset_sdltmr");
end timersys;