-- This file was generated automatically: DO NOT MODIFY IT !

-- Declaration of the provided and required interfaces

pragma style_checks (off);
pragma warnings (off);
with taste_basictypes;
use taste_basictypes;

with adaasn1rtl;
use adaasn1rtl;

with TASTE_BasicTypes;
use TASTE_BasicTypes;

package functions is

   --  ----------------------------------------------------  --
   --  Provided interface "e"
   --  ----------------------------------------------------  --
   procedure e(x: access asn1sccT_Int32);
   pragma Export(C, e, "functions_PI_e");

   --  --------------------------------------------------- --
   --  Required interface "out_msg"
   --  --------------------------------------------------- --
   procedure out_msg(y: access asn1sccT_Int32);
   pragma Import(C, out_msg, "functions_RI_out_msg");
   procedure RIÜout_msg(y: access asn1sccT_Int32) renames out_msg;

   --  TASTE API to check if the input queue is empty
   procedure Check_Queue(res: access asn1SccT_Boolean);
   pragma Import(C, Check_Queue, "functions_RI_check_queue");

end functions;
