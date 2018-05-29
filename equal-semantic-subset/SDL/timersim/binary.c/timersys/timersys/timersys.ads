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

package timersys is

   --  ----------------------------------------------------  --
   --  Provided interface "inputmsg"
   --  ----------------------------------------------------  --
   procedure inputmsg(into: access asn1sccT_Boolean);
   pragma Export(C, inputmsg, "timersys_PI_inputmsg");

   --  --------------------------------------------------- --
   --  Required interface "outputmsg"
   --  --------------------------------------------------- --
   procedure outputmsg(outgo: access asn1sccT_Boolean);
   pragma Import(C, outputmsg, "timersys_RI_outputmsg");
   procedure RIÜoutputmsg(outgo: access asn1sccT_Boolean) renames outputmsg;

   --  TASTE API to check if the input queue is empty
   procedure Check_Queue(res: access asn1SccT_Boolean);
   pragma Import(C, Check_Queue, "timersys_RI_check_queue");
   --  ------------------------------------------------  --
   --                  Timers management                 --
   --  ------------------------------------------------  --


   --  This function is called when the timer "sdltmr" expires
   procedure sdltmr;
   pragma Export(C, sdltmr, "timersys_PI_sdltmr");

   -- Call this function to set (enable) the timer
   -- Value is in milliseconds, and must be a multiple of 100
   procedure Set_sdltmr(val: access asn1sccT_UInt32);

   pragma Import(C, Set_sdltmr, "timersys_RI_SET_sdltmr");

   -- Call this function to reset (disable) the timer
   procedure Reset_sdltmr;

   pragma Import(C, Reset_sdltmr, "timersys_RI_RESET_sdltmr");


end timersys;
