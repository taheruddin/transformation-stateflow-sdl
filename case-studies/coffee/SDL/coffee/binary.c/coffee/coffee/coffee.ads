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

with TASTE_Dataview;
use TASTE_Dataview;

package coffee is

   --  ----------------------------------------------------  --
   --  Provided interface "get_init_tmpr"
   --  ----------------------------------------------------  --
   procedure get_init_tmpr(init_tmpr: access asn1sccT_Int32);
   pragma Export(C, get_init_tmpr, "coffee_PI_get_init_tmpr");

   --  ----------------------------------------------------  --
   --  Provided interface "get_init_water"
   --  ----------------------------------------------------  --
   procedure get_init_water(init_water: access asn1sccT_Int32);
   pragma Export(C, get_init_water, "coffee_PI_get_init_water");

   --  ----------------------------------------------------  --
   --  Provided interface "for_water"
   --  ----------------------------------------------------  --
   procedure for_water(w: access asn1sccMyString);
   pragma Export(C, for_water, "coffee_PI_for_water");

   --  ----------------------------------------------------  --
   --  Provided interface "for_water_tmpr"
   --  ----------------------------------------------------  --
   procedure for_water_tmpr(w: access asn1sccMyString);
   pragma Export(C, for_water_tmpr, "coffee_PI_for_water_tmpr");

   --  ----------------------------------------------------  --
   --  Provided interface "for_coffee"
   --  ----------------------------------------------------  --
   procedure for_coffee(w: access asn1sccMyString);
   pragma Export(C, for_coffee, "coffee_PI_for_coffee");

   --  ----------------------------------------------------  --
   --  Provided interface "for_ticking"
   --  ----------------------------------------------------  --
   procedure for_ticking(w: access asn1sccMyString);
   pragma Export(C, for_ticking, "coffee_PI_for_ticking");

   --  --------------------------------------------------- --
   --  Required interface "out_msg"
   --  --------------------------------------------------- --
   procedure out_msg(msg: access asn1sccMyString);
   pragma Import(C, out_msg, "coffee_RI_out_msg");
   procedure RIÜout_msg(msg: access asn1sccMyString) renames out_msg;

   --  TASTE API to check if the input queue is empty
   procedure Check_Queue(res: access asn1SccT_Boolean);
   pragma Import(C, Check_Queue, "coffee_RI_check_queue");
   --  ------------------------------------------------  --
   --                  Timers management                 --
   --  ------------------------------------------------  --


   --  This function is called when the timer "tmr" expires
   procedure tmr;
   pragma Export(C, tmr, "coffee_PI_tmr");

   -- Call this function to set (enable) the timer
   -- Value is in milliseconds, and must be a multiple of 100
   procedure Set_tmr(val: access asn1sccT_UInt32);

   pragma Import(C, Set_tmr, "coffee_RI_SET_tmr");

   -- Call this function to reset (disable) the timer
   procedure Reset_tmr;

   pragma Import(C, Reset_tmr, "coffee_RI_RESET_tmr");

   --  This function is called when the timer "tmr1" expires
   procedure tmr1;
   pragma Export(C, tmr1, "coffee_PI_tmr1");

   -- Call this function to set (enable) the timer
   -- Value is in milliseconds, and must be a multiple of 100
   procedure Set_tmr1(val: access asn1sccT_UInt32);

   pragma Import(C, Set_tmr1, "coffee_RI_SET_tmr1");

   -- Call this function to reset (disable) the timer
   procedure Reset_tmr1;

   pragma Import(C, Reset_tmr1, "coffee_RI_RESET_tmr1");

   --  This function is called when the timer "tmr2" expires
   procedure tmr2;
   pragma Export(C, tmr2, "coffee_PI_tmr2");

   -- Call this function to set (enable) the timer
   -- Value is in milliseconds, and must be a multiple of 100
   procedure Set_tmr2(val: access asn1sccT_UInt32);

   pragma Import(C, Set_tmr2, "coffee_RI_SET_tmr2");

   -- Call this function to reset (disable) the timer
   procedure Reset_tmr2;

   pragma Import(C, Reset_tmr2, "coffee_RI_RESET_tmr2");

   --  This function is called when the timer "tmr3" expires
   procedure tmr3;
   pragma Export(C, tmr3, "coffee_PI_tmr3");

   -- Call this function to set (enable) the timer
   -- Value is in milliseconds, and must be a multiple of 100
   procedure Set_tmr3(val: access asn1sccT_UInt32);

   pragma Import(C, Set_tmr3, "coffee_RI_SET_tmr3");

   -- Call this function to reset (disable) the timer
   procedure Reset_tmr3;

   pragma Import(C, Reset_tmr3, "coffee_RI_RESET_tmr3");


end coffee;
