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

package guard_1 is

   --  ----------------------------------------------------  --
   --  Provided interface "get_data"
   --  ----------------------------------------------------  --
   procedure get_data(x: access asn1sccMyReal);
   pragma Export(C, get_data, "guard_1_PI_get_data");

   --  ----------------------------------------------------  --
   --  Provided interface "check"
   --  ----------------------------------------------------  --
   procedure check(whatever: access asn1sccMyString);
   pragma Export(C, check, "guard_1_PI_check");

   --  --------------------------------------------------- --
   --  Required interface "out_msg"
   --  --------------------------------------------------- --
   procedure out_msg(msg: access asn1sccMyString);
   pragma Import(C, out_msg, "guard_1_RI_out_msg");
   procedure RIÜout_msg(msg: access asn1sccMyString) renames out_msg;

   --  TASTE API to check if the input queue is empty
   procedure Check_Queue(res: access asn1SccT_Boolean);
   pragma Import(C, Check_Queue, "guard_1_RI_check_queue");

end guard_1;
