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

package body compstate is
    type States is (onÜready, off, service, onÜpaused, onÜrecording, faulty);
    type ctxt_Ty is
        record
        state : States;
        initDone : Boolean := False;
        length : aliased asn1SccMyReal;
        w : aliased asn1SccMyString;
    end record;
    ctxt: aliased ctxt_Ty;
    CS_Only  : constant Integer := 13;
    onÜrecovered_START : constant := 5;
    onÜSTART : constant := 6;
    procedure runTransition(Id: Integer);
    procedure pÜonÜentry;
    procedure pÜonÜexit;
    procedure pÜonÜentry is
        tmp1 : aliased asn1SccMyString;
        begin
            -- out_msg('entry') (12,27)
            tmp1 := (Data => (101, 110, 116, 114, 121, others => 0), Length => 5);
            RIÜout_msg(tmp1'Access);
            -- RETURN  (None,None) at 84, 173
            return;
        end pÜonÜentry;
        

    procedure pÜonÜexit is
        tmp3 : aliased asn1SccMyString;
        begin
            -- out_msg('exit') (21,27)
            tmp3 := (Data => (101, 120, 105, 116, others => 0), Length => 4);
            RIÜout_msg(tmp3'Access);
            -- RETURN  (None,None) at 94, 154
            return;
        end pÜonÜexit;
        

    procedure switch_on(w: access asn1SccMyString) is
        begin
            case ctxt.state is
                when onÜready =>
                    runTransition(CS_Only);
                when off =>
                    ctxt.w := w.all;
                    runTransition(4);
                when service =>
                    runTransition(CS_Only);
                when onÜpaused =>
                    runTransition(CS_Only);
                when onÜrecording =>
                    runTransition(CS_Only);
                when faulty =>
                    runTransition(CS_Only);
                when others =>
                    runTransition(CS_Only);
            end case;
        end switch_on;
        

    procedure switch_off(w: access asn1SccMyString) is
        begin
            case ctxt.state is
                when onÜready =>
                    pÜonÜexit;
                    ctxt.w := w.all;
                    runTransition(2);
                when off =>
                    runTransition(CS_Only);
                when service =>
                    runTransition(CS_Only);
                when onÜpaused =>
                    pÜonÜexit;
                    ctxt.w := w.all;
                    runTransition(2);
                when onÜrecording =>
                    pÜonÜexit;
                    ctxt.w := w.all;
                    runTransition(2);
                when faulty =>
                    runTransition(CS_Only);
                when others =>
                    runTransition(CS_Only);
            end case;
        end switch_off;
        

    procedure restart(w: access asn1SccMyString) is
        begin
            case ctxt.state is
                when onÜready =>
                    runTransition(CS_Only);
                when off =>
                    runTransition(CS_Only);
                when service =>
                    runTransition(CS_Only);
                when onÜpaused =>
                    runTransition(CS_Only);
                when onÜrecording =>
                    runTransition(CS_Only);
                when faulty =>
                    ctxt.w := w.all;
                    runTransition(1);
                when others =>
                    runTransition(CS_Only);
            end case;
        end restart;
        

    procedure start_recording(w: access asn1SccMyString) is
        begin
            case ctxt.state is
                when onÜready =>
                    ctxt.w := w.all;
                    runTransition(12);
                when off =>
                    runTransition(CS_Only);
                when service =>
                    runTransition(CS_Only);
                when onÜpaused =>
                    runTransition(CS_Only);
                when onÜrecording =>
                    runTransition(CS_Only);
                when faulty =>
                    runTransition(CS_Only);
                when others =>
                    runTransition(CS_Only);
            end case;
        end start_recording;
        

    procedure pause(w: access asn1SccMyString) is
        begin
            case ctxt.state is
                when onÜready =>
                    runTransition(CS_Only);
                when off =>
                    runTransition(CS_Only);
                when service =>
                    runTransition(CS_Only);
                when onÜpaused =>
                    runTransition(CS_Only);
                when onÜrecording =>
                    ctxt.w := w.all;
                    runTransition(11);
                when faulty =>
                    runTransition(CS_Only);
                when others =>
                    runTransition(CS_Only);
            end case;
        end pause;
        

    procedure resume(w: access asn1SccMyString) is
        begin
            case ctxt.state is
                when onÜready =>
                    runTransition(CS_Only);
                when off =>
                    runTransition(CS_Only);
                when service =>
                    runTransition(CS_Only);
                when onÜpaused =>
                    ctxt.w := w.all;
                    runTransition(10);
                when onÜrecording =>
                    runTransition(CS_Only);
                when faulty =>
                    runTransition(CS_Only);
                when others =>
                    runTransition(CS_Only);
            end case;
        end resume;
        

    procedure stop_recording(w: access asn1SccMyString) is
        begin
            case ctxt.state is
                when onÜready =>
                    runTransition(CS_Only);
                when off =>
                    runTransition(CS_Only);
                when service =>
                    runTransition(CS_Only);
                when onÜpaused =>
                    ctxt.w := w.all;
                    runTransition(8);
                when onÜrecording =>
                    ctxt.w := w.all;
                    runTransition(9);
                when faulty =>
                    runTransition(CS_Only);
                when others =>
                    runTransition(CS_Only);
            end case;
        end stop_recording;
        

    procedure fail(w: access asn1SccMyString) is
        begin
            case ctxt.state is
                when onÜready =>
                    runTransition(CS_Only);
                when off =>
                    runTransition(CS_Only);
                when service =>
                    runTransition(CS_Only);
                when onÜpaused =>
                    runTransition(CS_Only);
                when onÜrecording =>
                    ctxt.w := w.all;
                    runTransition(7);
                when faulty =>
                    runTransition(CS_Only);
                when others =>
                    runTransition(CS_Only);
            end case;
        end fail;
        

    procedure t is
        begin
            case ctxt.state is
                when onÜready =>
                    runTransition(CS_Only);
                when off =>
                    runTransition(CS_Only);
                when service =>
                    runTransition(CS_Only);
                when onÜpaused =>
                    runTransition(CS_Only);
                when onÜrecording =>
                    runTransition(CS_Only);
                when faulty =>
                    runTransition(CS_Only);
                when others =>
                    runTransition(CS_Only);
            end case;
        end t;
        

    procedure runTransition(Id: Integer) is
        trId : Integer := Id;
        tmp5 : aliased asn1SccMyString;
        tmp10 : aliased asn1SccMyString;
        tmp22 : aliased asn1SccMyString;
        tmp20 : aliased asn1SccMyString;
        tmp12 : aliased asn1SccMyString;
        tmp14 : aliased asn1SccMyString;
        tmp18 : aliased asn1SccMyString;
        tmp24 : aliased asn1SccMyString;
        tmp16 : aliased asn1SccMyString;
        tmp8 : aliased asn1SccMyString;
        begin
            while (trId /= -1) loop
                case trId is
                    when 0 =>
                        -- NEXT_STATE OFF (105,18) at 367, 130
                        trId := -1;
                        ctxt.state := OFF;
                        goto next_transition;
                    when 1 =>
                        -- out_msg('READY in ON') (114,19)
                        tmp18 := (Data => (82, 69, 65, 68, 89, 32, 105, 110, 32, 79, 78, others => 0), Length => 11);
                        RIÜout_msg(tmp18'Access);
                        -- NEXT_STATE ON (116,22) at 642, 527
                        trId := ONÜRECOVERED_START;
                        goto next_transition;
                    when 2 =>
                        -- out_msg('OFF') (123,19)
                        tmp20 := (Data => (79, 70, 70, others => 0), Length => 3);
                        RIÜout_msg(tmp20'Access);
                        -- NEXT_STATE OFF (125,22) at 519, 360
                        trId := -1;
                        ctxt.state := OFF;
                        goto next_transition;
                    when 3 =>
                        -- out_msg('FAULTY') (129,19)
                        tmp22 := (Data => (70, 65, 85, 76, 84, 89, others => 0), Length => 6);
                        RIÜout_msg(tmp22'Access);
                        -- NEXT_STATE FAULTY (131,22) at 675, 362
                        trId := -1;
                        ctxt.state := FAULTY;
                        goto next_transition;
                    when 4 =>
                        -- out_msg('ON') (147,19)
                        tmp24 := (Data => (79, 78, others => 0), Length => 2);
                        RIÜout_msg(tmp24'Access);
                        -- NEXT_STATE ON (149,22) at 367, 344
                        trId := onÜSTART;
                        goto next_transition;
                    when 5 =>
                        -- entry (None,None)
                        pÜonÜentry;
                        -- NEXT_STATE onÜREADY (28,26) at 1144, 178
                        trId := -1;
                        ctxt.state := onÜREADY;
                        goto next_transition;
                    when 6 =>
                        -- entry (None,None)
                        pÜonÜentry;
                        -- NEXT_STATE onÜREADY (32,26) at 85, 191
                        trId := -1;
                        ctxt.state := onÜREADY;
                        goto next_transition;
                    when 7 =>
                        -- out_msg('going out of ON') (38,27)
                        tmp5 := (Data => (103, 111, 105, 110, 103, 32, 111, 117, 116, 32, 111, 102, 32, 79, 78, others => 0), Length => 15);
                        RIÜout_msg(tmp5'Access);
                        -- exit (None,None)
                        pÜonÜexit;
                        -- RETURN troubleshoot (None,None) at 975, 406
                        trId := 3;
                        goto next_transition;
                    when 8 =>
                        -- out_msg('READY') (47,27)
                        tmp8 := (Data => (82, 69, 65, 68, 89, others => 0), Length => 5);
                        RIÜout_msg(tmp8'Access);
                        -- NEXT_STATE onÜREADY (49,30) at 790, 410
                        trId := -1;
                        ctxt.state := onÜREADY;
                        goto next_transition;
                    when 9 =>
                        -- out_msg('READY') (56,27)
                        tmp10 := (Data => (82, 69, 65, 68, 89, others => 0), Length => 5);
                        RIÜout_msg(tmp10'Access);
                        -- NEXT_STATE onÜREADY (58,30) at 633, 409
                        trId := -1;
                        ctxt.state := onÜREADY;
                        goto next_transition;
                    when 10 =>
                        -- out_msg('RECORDING') (65,27)
                        tmp12 := (Data => (82, 69, 67, 79, 82, 68, 73, 78, 71, others => 0), Length => 9);
                        RIÜout_msg(tmp12'Access);
                        -- NEXT_STATE onÜRECORDING (67,30) at 445, 410
                        trId := -1;
                        ctxt.state := onÜRECORDING;
                        goto next_transition;
                    when 11 =>
                        -- out_msg('PAUSED') (77,27)
                        tmp14 := (Data => (80, 65, 85, 83, 69, 68, others => 0), Length => 6);
                        RIÜout_msg(tmp14'Access);
                        -- NEXT_STATE onÜPAUSED (79,30) at 276, 413
                        trId := -1;
                        ctxt.state := onÜPAUSED;
                        goto next_transition;
                    when 12 =>
                        -- out_msg('RECORDING') (92,27)
                        tmp16 := (Data => (82, 69, 67, 79, 82, 68, 73, 78, 71, others => 0), Length => 9);
                        RIÜout_msg(tmp16'Access);
                        -- NEXT_STATE onÜRECORDING (94,30) at 73, 419
                        trId := -1;
                        ctxt.state := onÜRECORDING;
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
end compstate;