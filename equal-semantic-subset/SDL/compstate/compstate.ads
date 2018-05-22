-- This file was generated automatically: DO NOT MODIFY IT !

with TASTE_BasicTypes;
use TASTE_BasicTypes;
with TASTE_Dataview;
use TASTE_Dataview;
with adaasn1rtl;
use adaasn1rtl;



package compstate is
    --  Provided interface "switch_on"
    procedure switch_on(w: access asn1SccMyString);
    pragma Export(C, switch_on, "compstate_switch_on");
    --  Provided interface "switch_off"
    procedure switch_off(w: access asn1SccMyString);
    pragma Export(C, switch_off, "compstate_switch_off");
    --  Provided interface "restart"
    procedure restart(w: access asn1SccMyString);
    pragma Export(C, restart, "compstate_restart");
    --  Provided interface "start_recording"
    procedure start_recording(w: access asn1SccMyString);
    pragma Export(C, start_recording, "compstate_start_recording");
    --  Provided interface "pause"
    procedure pause(w: access asn1SccMyString);
    pragma Export(C, pause, "compstate_pause");
    --  Provided interface "resume"
    procedure resume(w: access asn1SccMyString);
    pragma Export(C, resume, "compstate_resume");
    --  Provided interface "stop_recording"
    procedure stop_recording(w: access asn1SccMyString);
    pragma Export(C, stop_recording, "compstate_stop_recording");
    --  Provided interface "fail"
    procedure fail(w: access asn1SccMyString);
    pragma Export(C, fail, "compstate_fail");
    --  Provided interface "t"
    procedure t;
    pragma Export(C, t, "compstate_t");
    --  Required interface "out_msg"
    procedure RIÜout_msg(msg: access asn1SccMyString);
    pragma import(C, RIÜout_msg, "compstate_RI_out_msg");
    --  Timer t SET and RESET functions
    procedure SET_t(val: access asn1SccT_UInt32);
    pragma import(C, SET_t, "compstate_RI_set_t");
    procedure RESET_t;
    pragma import(C, RESET_t, "compstate_RI_reset_t");
end compstate;