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

with TASTE_BasicTypes;
use TASTE_BasicTypes;

package actions is

   --  ----------------------------------------------------  --
   --  Provided interface "push"
   --  ----------------------------------------------------  --
   procedure push(w: access asn1sccMyString);
   pragma Export(C, push, "actions_PI_push");

   --  ----------------------------------------------------  --
   --  Provided interface "tap"
   --  ----------------------------------------------------  --
   procedure tap(w: access asn1sccMyString);
   pragma Export(C, tap, "actions_PI_tap");

   --  --------------------------------------------------- --
   --  Required interface "out_msg"
   --  --------------------------------------------------- --
   procedure out_msg(msg: access asn1sccT_Int32);
   pragma Import(C, out_msg, "actions_RI_out_msg");
   procedure RIÜout_msg(msg: access asn1sccT_Int32) renames out_msg;

   --  TASTE API to check if the input queue is empty
   procedure Check_Queue(res: access asn1SccT_Boolean);
   pragma Import(C, Check_Queue, "actions_RI_check_queue");

end actions;
