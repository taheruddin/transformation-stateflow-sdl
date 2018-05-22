-- This file was generated automatically: DO NOT MODIFY IT !

-- Declaration of the provided and required interfaces

pragma style_checks (off);
pragma warnings (off);
with taste_basictypes;
use taste_basictypes;

with adaasn1rtl;
use adaasn1rtl;

with TASTE_Dataview;
use TASTE_Dataview;

package compstate is

   --  ----------------------------------------------------  --
   --  Provided interface "switch_on"
   --  ----------------------------------------------------  --
   procedure switch_on(w: access asn1sccMyString);
   pragma Export(C, switch_on, "compstate_PI_switch_on");

   --  ----------------------------------------------------  --
   --  Provided interface "switch_off"
   --  ----------------------------------------------------  --
   procedure switch_off(w: access asn1sccMyString);
   pragma Export(C, switch_off, "compstate_PI_switch_off");

   --  ----------------------------------------------------  --
   --  Provided interface "restart"
   --  ----------------------------------------------------  --
   procedure restart(w: access asn1sccMyString);
   pragma Export(C, restart, "compstate_PI_restart");

   --  ----------------------------------------------------  --
   --  Provided interface "start_recording"
   --  ----------------------------------------------------  --
   procedure start_recording(w: access asn1sccMyString);
   pragma Export(C, start_recording, "compstate_PI_start_recording");

   --  ----------------------------------------------------  --
   --  Provided interface "pause"
   --  ----------------------------------------------------  --
   procedure pause(w: access asn1sccMyString);
   pragma Export(C, pause, "compstate_PI_pause");

   --  ----------------------------------------------------  --
   --  Provided interface "resume"
   --  ----------------------------------------------------  --
   procedure resume(w: access asn1sccMyString);
   pragma Export(C, resume, "compstate_PI_resume");

   --  ----------------------------------------------------  --
   --  Provided interface "stop_recording"
   --  ----------------------------------------------------  --
   procedure stop_recording(w: access asn1sccMyString);
   pragma Export(C, stop_recording, "compstate_PI_stop_recording");

   --  ----------------------------------------------------  --
   --  Provided interface "fail"
   --  ----------------------------------------------------  --
   procedure fail(w: access asn1sccMyString);
   pragma Export(C, fail, "compstate_PI_fail");

   --  --------------------------------------------------- --
   --  Required interface "out_msg"
   --  --------------------------------------------------- --
   procedure out_msg(msg: access asn1sccMyString);
   pragma Import(C, out_msg, "compstate_RI_out_msg");
   procedure RIÜout_msg(msg: access asn1sccMyString) renames out_msg;

   --  TASTE API to check if the input queue is empty
   procedure Check_Queue(res: access asn1SccT_Boolean);
   pragma Import(C, Check_Queue, "compstate_RI_check_queue");

end compstate;
