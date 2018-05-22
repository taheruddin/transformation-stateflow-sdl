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

package initsys is

   --  ----------------------------------------------------  --
   --  Provided interface "inmsg"
   --  ----------------------------------------------------  --
   procedure inmsg(whatever: access asn1sccMyString);
   pragma Export(C, inmsg, "initsys_PI_inmsg");

   --  --------------------------------------------------- --
   --  Required interface "outmsg"
   --  --------------------------------------------------- --
   procedure outmsg(msg: access asn1sccMyString);
   pragma Import(C, outmsg, "initsys_RI_outmsg");
   procedure RIÜoutmsg(msg: access asn1sccMyString) renames outmsg;

   --  TASTE API to check if the input queue is empty
   procedure Check_Queue(res: access asn1SccT_Boolean);
   pragma Import(C, Check_Queue, "initsys_RI_check_queue");

end initsys;
