-- This file was generated automatically: DO NOT MODIFY IT !

with TASTE_BasicTypes;
use TASTE_BasicTypes;
with TASTE_Dataview;
use TASTE_Dataview;
with adaasn1rtl;
use adaasn1rtl;



package coffee is
    --  Provided interface "get_init_tmpr"
    procedure get_init_tmpr(init_tmpr: access asn1SccT_Int32);
    pragma Export(C, get_init_tmpr, "coffee_get_init_tmpr");
    --  Provided interface "get_init_water"
    procedure get_init_water(init_water: access asn1SccT_Int32);
    pragma Export(C, get_init_water, "coffee_get_init_water");
    --  Provided interface "for_water"
    procedure for_water(w: access asn1SccMyString);
    pragma Export(C, for_water, "coffee_for_water");
    --  Provided interface "for_water_tmpr"
    procedure for_water_tmpr(w: access asn1SccMyString);
    pragma Export(C, for_water_tmpr, "coffee_for_water_tmpr");
    --  Provided interface "for_coffee"
    procedure for_coffee(w: access asn1SccMyString);
    pragma Export(C, for_coffee, "coffee_for_coffee");
    --  Provided interface "for_ticking"
    procedure for_ticking(w: access asn1SccMyString);
    pragma Export(C, for_ticking, "coffee_for_ticking");
    --  Provided interface "tmr"
    procedure tmr;
    pragma Export(C, tmr, "coffee_tmr");
    --  Provided interface "tmr1"
    procedure tmr1;
    pragma Export(C, tmr1, "coffee_tmr1");
    --  Provided interface "tmr2"
    procedure tmr2;
    pragma Export(C, tmr2, "coffee_tmr2");
    --  Provided interface "tmr3"
    procedure tmr3;
    pragma Export(C, tmr3, "coffee_tmr3");
    --  Required interface "out_msg"
    procedure RIÜout_msg(msg: access asn1SccMyString);
    pragma import(C, RIÜout_msg, "coffee_RI_out_msg");
    --  Timer tmr SET and RESET functions
    procedure SET_tmr(val: access asn1SccT_UInt32);
    pragma import(C, SET_tmr, "coffee_RI_set_tmr");
    procedure RESET_tmr;
    pragma import(C, RESET_tmr, "coffee_RI_reset_tmr");
    --  Timer tmr1 SET and RESET functions
    procedure SET_tmr1(val: access asn1SccT_UInt32);
    pragma import(C, SET_tmr1, "coffee_RI_set_tmr1");
    procedure RESET_tmr1;
    pragma import(C, RESET_tmr1, "coffee_RI_reset_tmr1");
    --  Timer tmr2 SET and RESET functions
    procedure SET_tmr2(val: access asn1SccT_UInt32);
    pragma import(C, SET_tmr2, "coffee_RI_set_tmr2");
    procedure RESET_tmr2;
    pragma import(C, RESET_tmr2, "coffee_RI_reset_tmr2");
    --  Timer tmr3 SET and RESET functions
    procedure SET_tmr3(val: access asn1SccT_UInt32);
    pragma import(C, SET_tmr3, "coffee_RI_set_tmr3");
    procedure RESET_tmr3;
    pragma import(C, RESET_tmr3, "coffee_RI_reset_tmr3");
end coffee;