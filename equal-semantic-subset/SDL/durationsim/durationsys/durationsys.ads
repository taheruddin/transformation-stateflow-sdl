-- This file was generated automatically: DO NOT MODIFY IT !

with TASTE_BasicTypes;
use TASTE_BasicTypes;
with TASTE_Dataview;
use TASTE_Dataview;
with adaasn1rtl;
use adaasn1rtl;



package durationsys is
    --  Provided interface "inputmsg"
    procedure inputmsg(inmsg: access asn1SccT_Int32);
    pragma Export(C, inputmsg, "durationsys_inputmsg");
    --  Provided interface "sdltmr"
    procedure sdltmr;
    pragma Export(C, sdltmr, "durationsys_sdltmr");
    --  Required interface "outputmsg"
    procedure RIÜoutputmsg(outmsg: access asn1SccMyString);
    pragma import(C, RIÜoutputmsg, "durationsys_RI_outputmsg");
    --  Timer sdltmr SET and RESET functions
    procedure SET_sdltmr(val: access asn1SccT_UInt32);
    pragma import(C, SET_sdltmr, "durationsys_RI_set_sdltmr");
    procedure RESET_sdltmr;
    pragma import(C, RESET_sdltmr, "durationsys_RI_reset_sdltmr");
end durationsys;