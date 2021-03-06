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

package guard_2 is

   --  ----------------------------------------------------  --
   --  Provided interface "e"
   --  ----------------------------------------------------  --
   procedure e(imsg: access asn1sccMyString);
   pragma Export(C, e, "guard_2_PI_e");

   --  --------------------------------------------------- --
   --  Required interface "out_msg"
   --  --------------------------------------------------- --
   procedure out_msg(omsg: access asn1sccMyString);
   pragma Import(C, out_msg, "guard_2_RI_out_msg");
   procedure RI�out_msg(omsg: access asn1sccMyString) renames out_msg;

   --  TASTE API to check if the input queue is empty
   procedure Check_Queue(res: access asn1SccT_Boolean);
   pragma Import(C, Check_Queue, "guard_2_RI_check_queue");

end guard_2;
