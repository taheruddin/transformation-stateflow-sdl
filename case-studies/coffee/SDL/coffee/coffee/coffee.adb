-- This file was generated automatically: DO NOT MODIFY IT !

with System.IO;
use System.IO;

with Ada.Unchecked_Conversion;
with Ada.Numerics.Generic_Elementary_Functions;

with TASTE_BasicTypes;
use TASTE_BasicTypes;
with TASTE_Dataview;
use TASTE_Dataview;
with adaasn1rtl;
use adaasn1rtl;

with Interfaces;
use Interfaces;

package body coffee is
    type States is (off, onÜbeeping, standby, onÜheating, onÜfeeling_carafe, onÜticking);
    type ctxt_Ty is
        record
        state : States;
        initDone : Boolean := False;
        coffee : aliased asn1SccT_Int32;
        init_tmpr : aliased asn1SccT_Int32;
        water : aliased asn1SccT_Int32;
        water_tmpr : aliased asn1SccT_Int32;
        w : aliased asn1SccMyString;
        init_water : aliased asn1SccT_Int32;
    end record;
    ctxt: aliased ctxt_Ty;
    CS_Only  : constant Integer := 15;
    onÜSTART : constant := 6;
    procedure runTransition(Id: Integer);
    procedure get_init_tmpr(init_tmpr: access asn1SccT_Int32) is
        begin
            case ctxt.state is
                when off =>
                    runTransition(CS_Only);
                when onÜbeeping =>
                    ctxt.init_tmpr := init_tmpr.all;
                    runTransition(5);
                when standby =>
                    runTransition(CS_Only);
                when onÜheating =>
                    ctxt.init_tmpr := init_tmpr.all;
                    runTransition(5);
                when onÜfeeling_carafe =>
                    ctxt.init_tmpr := init_tmpr.all;
                    runTransition(5);
                when onÜticking =>
                    ctxt.init_tmpr := init_tmpr.all;
                    runTransition(5);
                when others =>
                    runTransition(CS_Only);
            end case;
        end get_init_tmpr;
        

    procedure get_init_water(init_water: access asn1SccT_Int32) is
        begin
            case ctxt.state is
                when off =>
                    ctxt.init_water := init_water.all;
                    runTransition(1);
                when onÜbeeping =>
                    runTransition(CS_Only);
                when standby =>
                    runTransition(CS_Only);
                when onÜheating =>
                    runTransition(CS_Only);
                when onÜfeeling_carafe =>
                    runTransition(CS_Only);
                when onÜticking =>
                    runTransition(CS_Only);
                when others =>
                    runTransition(CS_Only);
            end case;
        end get_init_water;
        

    procedure for_water(w: access asn1SccMyString) is
        begin
            case ctxt.state is
                when off =>
                    ctxt.w := w.all;
                    runTransition(2);
                when onÜbeeping =>
                    ctxt.w := w.all;
                    runTransition(3);
                when standby =>
                    runTransition(CS_Only);
                when onÜheating =>
                    ctxt.w := w.all;
                    runTransition(3);
                when onÜfeeling_carafe =>
                    ctxt.w := w.all;
                    runTransition(3);
                when onÜticking =>
                    ctxt.w := w.all;
                    runTransition(3);
                when others =>
                    runTransition(CS_Only);
            end case;
        end for_water;
        

    procedure for_water_tmpr(w: access asn1SccMyString) is
        begin
            case ctxt.state is
                when off =>
                    runTransition(CS_Only);
                when onÜbeeping =>
                    runTransition(CS_Only);
                when standby =>
                    runTransition(CS_Only);
                when onÜheating =>
                    ctxt.w := w.all;
                    runTransition(13);
                when onÜfeeling_carafe =>
                    runTransition(CS_Only);
                when onÜticking =>
                    runTransition(CS_Only);
                when others =>
                    runTransition(CS_Only);
            end case;
        end for_water_tmpr;
        

    procedure for_coffee(w: access asn1SccMyString) is
        begin
            case ctxt.state is
                when off =>
                    runTransition(CS_Only);
                when onÜbeeping =>
                    runTransition(CS_Only);
                when standby =>
                    runTransition(CS_Only);
                when onÜheating =>
                    runTransition(CS_Only);
                when onÜfeeling_carafe =>
                    ctxt.w := w.all;
                    runTransition(10);
                when onÜticking =>
                    runTransition(CS_Only);
                when others =>
                    runTransition(CS_Only);
            end case;
        end for_coffee;
        

    procedure for_ticking(w: access asn1SccMyString) is
        begin
            case ctxt.state is
                when off =>
                    runTransition(CS_Only);
                when onÜbeeping =>
                    ctxt.w := w.all;
                    runTransition(9);
                when standby =>
                    runTransition(CS_Only);
                when onÜheating =>
                    ctxt.w := w.all;
                    runTransition(14);
                when onÜfeeling_carafe =>
                    ctxt.w := w.all;
                    runTransition(11);
                when onÜticking =>
                    runTransition(CS_Only);
                when others =>
                    runTransition(CS_Only);
            end case;
        end for_ticking;
        

    procedure tmr is
        begin
            case ctxt.state is
                when off =>
                    runTransition(CS_Only);
                when onÜbeeping =>
                    runTransition(CS_Only);
                when standby =>
                    runTransition(CS_Only);
                when onÜheating =>
                    runTransition(CS_Only);
                when onÜfeeling_carafe =>
                    runTransition(CS_Only);
                when onÜticking =>
                    runTransition(CS_Only);
                when others =>
                    runTransition(CS_Only);
            end case;
        end tmr;
        

    procedure tmr1 is
        begin
            case ctxt.state is
                when off =>
                    runTransition(CS_Only);
                when onÜbeeping =>
                    runTransition(CS_Only);
                when standby =>
                    runTransition(CS_Only);
                when onÜheating =>
                    runTransition(CS_Only);
                when onÜfeeling_carafe =>
                    runTransition(CS_Only);
                when onÜticking =>
                    runTransition(8);
                when others =>
                    runTransition(CS_Only);
            end case;
        end tmr1;
        

    procedure tmr2 is
        begin
            case ctxt.state is
                when off =>
                    runTransition(CS_Only);
                when onÜbeeping =>
                    runTransition(CS_Only);
                when standby =>
                    runTransition(CS_Only);
                when onÜheating =>
                    runTransition(CS_Only);
                when onÜfeeling_carafe =>
                    runTransition(CS_Only);
                when onÜticking =>
                    runTransition(7);
                when others =>
                    runTransition(CS_Only);
            end case;
        end tmr2;
        

    procedure tmr3 is
        begin
            case ctxt.state is
                when off =>
                    runTransition(CS_Only);
                when onÜbeeping =>
                    runTransition(CS_Only);
                when standby =>
                    runTransition(CS_Only);
                when onÜheating =>
                    runTransition(CS_Only);
                when onÜfeeling_carafe =>
                    runTransition(CS_Only);
                when onÜticking =>
                    runTransition(12);
                when others =>
                    runTransition(CS_Only);
            end case;
        end tmr3;
        

    procedure runTransition(Id: Integer) is
        trId : Integer := Id;
        tmp46 : aliased asn1SccMyString;
        tmp7 : aliased asn1SccMyString;
        tmp77 : aliased asn1SccMyString;
        tmp13 : aliased asn1SccMyString;
        tmp59 : aliased asn1SccT_UInt32;
        tmp68 : aliased asn1SccMyString;
        tmp84 : aliased asn1SccMyString;
        tmp54 : aliased asn1SccMyString;
        tmp62 : aliased asn1SccMyString;
        tmp10 : aliased asn1SccT_UInt32;
        tmp1 : aliased asn1SccMyString;
        tmp75 : aliased asn1SccMyString;
        tmp44 : aliased asn1SccMyString;
        tmp88 : aliased asn1SccMyString;
        tmp56 : aliased asn1SccMyString;
        tmp28 : aliased asn1SccMyString;
        tmp92 : aliased asn1SccMyString;
        tmp86 : aliased asn1SccMyString;
        tmp30 : aliased asn1SccMyString;
        tmp41 : aliased asn1SccT_UInt32;
        begin
            while (trId /= -1) loop
                case trId is
                    when 0 =>
                        -- NEXT_STATE OFF (141,18) at 220, 90
                        trId := -1;
                        ctxt.state := OFF;
                        goto next_transition;
                    when 1 =>
                        -- coffee:=0 (147,17)
                        ctxt.coffee := Asn1Int(0);
                        -- water:=init_water (148,0)
                        ctxt.water := Asn1Int(ctxt.init_water);
                        -- out_msg('OFF') (150,19)
                        tmp68 := (Data => (79, 70, 70, others => 0), Length => 3);
                        RIÜout_msg(tmp68'Access);
                        -- NEXT_STATE OFF (152,22) at 220, 313
                        trId := -1;
                        ctxt.state := OFF;
                        goto next_transition;
                    when 2 =>
                        -- DECISION water>=100 (159,26)
                        -- ANSWER true (161,17)
                        if ((ctxt.water >= 100)) = true then
                            -- out_msg('ON') (163,27)
                            tmp75 := (Data => (79, 78, others => 0), Length => 2);
                            RIÜout_msg(tmp75'Access);
                            -- NEXT_STATE ON (165,30) at 399, 309
                            trId := onÜSTART;
                            goto next_transition;
                            -- ANSWER ELSE (None,None)
                        else
                            -- out_msg('OFF') (169,27)
                            tmp77 := (Data => (79, 70, 70, others => 0), Length => 3);
                            RIÜout_msg(tmp77'Access);
                            -- NEXT_STATE OFF (171,30) at 520, 304
                            trId := -1;
                            ctxt.state := OFF;
                            goto next_transition;
                        end if;
                    when 3 =>
                        -- DECISION water<100 (179,26)
                        -- ANSWER true (181,17)
                        if ((ctxt.water < 100)) = true then
                            -- out_msg('OFF') (183,27)
                            tmp84 := (Data => (79, 70, 70, others => 0), Length => 3);
                            RIÜout_msg(tmp84'Access);
                            -- NEXT_STATE OFF (185,30) at 156, 697
                            trId := -1;
                            ctxt.state := OFF;
                            goto next_transition;
                            -- ANSWER ELSE (None,None)
                        else
                            -- out_msg('ON') (189,27)
                            tmp86 := (Data => (79, 78, others => 0), Length => 2);
                            RIÜout_msg(tmp86'Access);
                            -- NEXT_STATE ON (191,30) at 276, 697
                            trId := onÜSTART;
                            goto next_transition;
                        end if;
                    when 4 =>
                        -- out_msg('STANDBY') (199,19)
                        tmp88 := (Data => (83, 84, 65, 78, 68, 66, 89, others => 0), Length => 7);
                        RIÜout_msg(tmp88'Access);
                        -- NEXT_STATE STANDBY (201,22) at 678, 583
                        trId := -1;
                        ctxt.state := STANDBY;
                        goto next_transition;
                    when 5 =>
                        -- water_tmpr:=init_tmpr (217,17)
                        ctxt.water_tmpr := Asn1Int(ctxt.init_tmpr);
                        -- out_msg('ON') (219,19)
                        tmp92 := (Data => (79, 78, others => 0), Length => 2);
                        RIÜout_msg(tmp92'Access);
                        -- NEXT_STATE ON (221,22) at 452, 637
                        trId := onÜSTART;
                        goto next_transition;
                    when 6 =>
                        -- NEXT_STATE onÜHEATING (9,26) at 471, 94
                        trId := -1;
                        ctxt.state := onÜHEATING;
                        goto next_transition;
                    when 7 =>
                        -- out_msg('FEELING_CARAFE') (15,27)
                        tmp1 := (Data => (70, 69, 69, 76, 73, 78, 71, 95, 67, 65, 82, 65, 70, 69, others => 0), Length => 14);
                        RIÜout_msg(tmp1'Access);
                        -- NEXT_STATE onÜFEELING_CARAFE (17,30) at 739, 668
                        trId := -1;
                        ctxt.state := onÜFEELING_CARAFE;
                        goto next_transition;
                    when 8 =>
                        -- water_tmpr:=water_tmpr+10 (24,25)
                        ctxt.water_tmpr := Asn1Int((ctxt.water_tmpr + 10));
                        -- out_msg('HEATING') (26,27)
                        tmp7 := (Data => (72, 69, 65, 84, 73, 78, 71, others => 0), Length => 7);
                        RIÜout_msg(tmp7'Access);
                        -- NEXT_STATE onÜHEATING (28,30) at 734, 355
                        trId := -1;
                        ctxt.state := onÜHEATING;
                        goto next_transition;
                    when 9 =>
                        -- set_timer(3000, tmr3) (44,25)
                        tmp10 := 3000;
                        SET_tmr3(tmp10'access);
                        -- out_msg('TICKING') (46,27)
                        tmp13 := (Data => (84, 73, 67, 75, 73, 78, 71, others => 0), Length => 7);
                        RIÜout_msg(tmp13'Access);
                        -- NEXT_STATE onÜTICKING (48,30) at 481, 1088
                        trId := -1;
                        ctxt.state := onÜTICKING;
                        goto next_transition;
                    when 10 =>
                        -- water:=water-20 (55,25)
                        ctxt.water := Asn1Int((ctxt.water - 20));
                        -- coffee:=coffee+20 (56,0)
                        ctxt.coffee := Asn1Int((ctxt.coffee + 20));
                        -- DECISION coffee>=100 (58,35)
                        -- ANSWER true (60,25)
                        if ((ctxt.coffee >= 100)) = true then
                            -- out_msg('BEEPING') (62,35)
                            tmp28 := (Data => (66, 69, 69, 80, 73, 78, 71, others => 0), Length => 7);
                            RIÜout_msg(tmp28'Access);
                            -- NEXT_STATE onÜBEEPING (64,38) at 140, 785
                            trId := -1;
                            ctxt.state := onÜBEEPING;
                            goto next_transition;
                            -- ANSWER ELSE (None,None)
                        else
                            -- out_msg('FEELING_CARAFE') (68,35)
                            tmp30 := (Data => (70, 69, 69, 76, 73, 78, 71, 95, 67, 65, 82, 65, 70, 69, others => 0), Length => 14);
                            RIÜout_msg(tmp30'Access);
                            -- NEXT_STATE onÜFEELING_CARAFE (70,38) at 289, 785
                            trId := -1;
                            ctxt.state := onÜFEELING_CARAFE;
                            goto next_transition;
                        end if;
                    when 11 =>
                        -- water:=water-20 (75,25)
                        ctxt.water := Asn1Int((ctxt.water - 20));
                        -- coffee:=coffee+20 (76,0)
                        ctxt.coffee := Asn1Int((ctxt.coffee + 20));
                        -- set_timer(1000, tmr2) (78,25)
                        tmp41 := 1000;
                        SET_tmr2(tmp41'access);
                        -- out_msg('TICKING') (80,27)
                        tmp44 := (Data => (84, 73, 67, 75, 73, 78, 71, others => 0), Length => 7);
                        RIÜout_msg(tmp44'Access);
                        -- NEXT_STATE onÜTICKING (82,30) at 543, 727
                        trId := -1;
                        ctxt.state := onÜTICKING;
                        goto next_transition;
                    when 12 =>
                        -- out_msg('STANDBY') (92,27)
                        tmp46 := (Data => (83, 84, 65, 78, 68, 66, 89, others => 0), Length => 7);
                        RIÜout_msg(tmp46'Access);
                        -- RETURN to_standby (None,None) at 699, 1048
                        trId := 4;
                        goto next_transition;
                    when 13 =>
                        -- DECISION water_tmpr >= 100 (101,40)
                        -- ANSWER true (103,25)
                        if ((ctxt.water_tmpr >= 100)) = true then
                            -- out_msg('FEELING_CARAFE') (105,35)
                            tmp54 := (Data => (70, 69, 69, 76, 73, 78, 71, 95, 67, 65, 82, 65, 70, 69, others => 0), Length => 14);
                            RIÜout_msg(tmp54'Access);
                            -- NEXT_STATE onÜFEELING_CARAFE (107,38) at 186, 372
                            trId := -1;
                            ctxt.state := onÜFEELING_CARAFE;
                            goto next_transition;
                            -- ANSWER ELSE (None,None)
                        else
                            -- out_msg('HEATING') (111,35)
                            tmp56 := (Data => (72, 69, 65, 84, 73, 78, 71, others => 0), Length => 7);
                            RIÜout_msg(tmp56'Access);
                            -- NEXT_STATE onÜHEATING (113,38) at 389, 372
                            trId := -1;
                            ctxt.state := onÜHEATING;
                            goto next_transition;
                        end if;
                    when 14 =>
                        -- set_timer(1000, tmr1) (118,25)
                        tmp59 := 1000;
                        SET_tmr1(tmp59'access);
                        -- out_msg('TICKING') (120,27)
                        tmp62 := (Data => (84, 73, 67, 75, 73, 78, 71, others => 0), Length => 7);
                        RIÜout_msg(tmp62'Access);
                        -- NEXT_STATE onÜTICKING (122,30) at 551, 304
                        trId := -1;
                        ctxt.state := onÜTICKING;
                        goto next_transition;
                    when CS_Only =>
                        trId := -1;
                        goto next_transition;
                    when others =>
                        null;
                end case;
                <<next_transition>>
                null;
            end loop;
        end runTransition;
        

    begin
        runTransition(0);
        ctxt.initDone := True;
end coffee;