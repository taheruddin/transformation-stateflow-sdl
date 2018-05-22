-- This file was generated automatically: DO NOT MODIFY IT !

with System.IO;
use System.IO;

with Ada.Unchecked_Conversion;
with Ada.Numerics.Generic_Elementary_Functions;

with TASTE_Dataview;
use TASTE_Dataview;
with TASTE_BasicTypes;
use TASTE_BasicTypes;
with adaasn1rtl;
use adaasn1rtl;

with Interfaces;
use Interfaces;

package body compstate is
    type States is (on�paused, off, service, on�ready, on�recording, faulty);
    type ctxt_Ty is
        record
        state : States;
        initDone : Boolean := False;
        length : aliased asn1SccMyReal;
        w : aliased asn1SccMyString;
    end record;
    ctxt: aliased ctxt_Ty;
    CS_Only  : constant Integer := 13;
    on�recovered_START : constant := 5;
    on�START : constant := 6;
    procedure runTransition(Id: Integer);
    procedure p�on�exit;
    procedure p�on�entry;
    procedure p�on�exit is
        begin
            null;  --  Empty procedure
        end p�on�exit;
        

    procedure p�on�entry is
        begin
            null;  --  Empty procedure
        end p�on�entry;
        

    procedure switch_on(w: access asn1SccMyString) is
        begin
            case ctxt.state is
                when on�paused =>
                    runTransition(CS_Only);
                when off =>
                    ctxt.w := w.all;
                    runTransition(4);
                when service =>
                    runTransition(CS_Only);
                when on�ready =>
                    runTransition(CS_Only);
                when on�recording =>
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
                when on�paused =>
                    p�on�exit;
                    ctxt.w := w.all;
                    runTransition(2);
                when off =>
                    runTransition(CS_Only);
                when service =>
                    runTransition(CS_Only);
                when on�ready =>
                    p�on�exit;
                    ctxt.w := w.all;
                    runTransition(2);
                when on�recording =>
                    p�on�exit;
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
                when on�paused =>
                    runTransition(CS_Only);
                when off =>
                    runTransition(CS_Only);
                when service =>
                    runTransition(CS_Only);
                when on�ready =>
                    runTransition(CS_Only);
                when on�recording =>
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
                when on�paused =>
                    runTransition(CS_Only);
                when off =>
                    runTransition(CS_Only);
                when service =>
                    runTransition(CS_Only);
                when on�ready =>
                    ctxt.w := w.all;
                    runTransition(12);
                when on�recording =>
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
                when on�paused =>
                    runTransition(CS_Only);
                when off =>
                    runTransition(CS_Only);
                when service =>
                    runTransition(CS_Only);
                when on�ready =>
                    runTransition(CS_Only);
                when on�recording =>
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
                when on�paused =>
                    ctxt.w := w.all;
                    runTransition(10);
                when off =>
                    runTransition(CS_Only);
                when service =>
                    runTransition(CS_Only);
                when on�ready =>
                    runTransition(CS_Only);
                when on�recording =>
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
                when on�paused =>
                    ctxt.w := w.all;
                    runTransition(8);
                when off =>
                    runTransition(CS_Only);
                when service =>
                    runTransition(CS_Only);
                when on�ready =>
                    runTransition(CS_Only);
                when on�recording =>
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
                when on�paused =>
                    runTransition(CS_Only);
                when off =>
                    runTransition(CS_Only);
                when service =>
                    runTransition(CS_Only);
                when on�ready =>
                    runTransition(CS_Only);
                when on�recording =>
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
                when on�paused =>
                    runTransition(CS_Only);
                when off =>
                    runTransition(CS_Only);
                when service =>
                    runTransition(CS_Only);
                when on�ready =>
                    runTransition(CS_Only);
                when on�recording =>
                    runTransition(CS_Only);
                when faulty =>
                    runTransition(CS_Only);
                when others =>
                    runTransition(CS_Only);
            end case;
        end t;
        

    procedure runTransition(Id: Integer) is
        trId : Integer := Id;
        tmp10 : aliased asn1SccMyString;
        tmp4 : aliased asn1SccMyString;
        tmp6 : aliased asn1SccMyString;
        tmp20 : aliased asn1SccMyString;
        tmp12 : aliased asn1SccMyString;
        tmp8 : aliased asn1SccMyString;
        tmp18 : aliased asn1SccMyString;
        tmp1 : aliased asn1SccMyString;
        tmp16 : aliased asn1SccMyString;
        tmp14 : aliased asn1SccMyString;
        begin
            while (trId /= -1) loop
                case trId is
                    when 0 =>
                        -- NEXT_STATE OFF (93,18) at 320, 60
                        trId := -1;
                        ctxt.state := OFF;
                        goto next_transition;
                    when 1 =>
                        -- out_msg('READY in ON') (105,19)
                        tmp14 := (Data => (82, 69, 65, 68, 89, 32, 105, 110, 32, 79, 78, others => 0), Length => 11);
                        RI�out_msg(tmp14'Access);
                        -- NEXT_STATE ON (107,22) at 672, 472
                        trId := ON�RECOVERED_START;
                        goto next_transition;
                    when 2 =>
                        -- out_msg('OFF') (114,19)
                        tmp16 := (Data => (79, 70, 70, others => 0), Length => 3);
                        RI�out_msg(tmp16'Access);
                        -- NEXT_STATE OFF (116,22) at 558, 307
                        trId := -1;
                        ctxt.state := OFF;
                        goto next_transition;
                    when 3 =>
                        -- out_msg('FAULTY') (120,19)
                        tmp18 := (Data => (70, 65, 85, 76, 84, 89, others => 0), Length => 6);
                        RI�out_msg(tmp18'Access);
                        -- NEXT_STATE FAULTY (122,22) at 707, 307
                        trId := -1;
                        ctxt.state := FAULTY;
                        goto next_transition;
                    when 4 =>
                        -- out_msg('ON') (135,19)
                        tmp20 := (Data => (79, 78, others => 0), Length => 2);
                        RI�out_msg(tmp20'Access);
                        -- NEXT_STATE ON (137,22) at 320, 225
                        trId := on�START;
                        goto next_transition;
                    when 5 =>
                        -- entry (None,None)
                        p�on�entry;
                        -- NEXT_STATE on�READY (16,26) at 1070, 151
                        trId := -1;
                        ctxt.state := on�READY;
                        goto next_transition;
                    when 6 =>
                        -- entry (None,None)
                        p�on�entry;
                        -- NEXT_STATE on�READY (20,26) at 74, 160
                        trId := -1;
                        ctxt.state := on�READY;
                        goto next_transition;
                    when 7 =>
                        -- out_msg('going out of ON') (35,27)
                        tmp1 := (Data => (103, 111, 105, 110, 103, 32, 111, 117, 116, 32, 111, 102, 32, 79, 78, others => 0), Length => 15);
                        RI�out_msg(tmp1'Access);
                        -- exit (None,None)
                        p�on�exit;
                        -- RETURN troubleshoot (None,None) at 933, 260
                        trId := 3;
                        goto next_transition;
                    when 8 =>
                        -- out_msg('READY') (44,27)
                        tmp4 := (Data => (82, 69, 65, 68, 89, others => 0), Length => 5);
                        RI�out_msg(tmp4'Access);
                        -- NEXT_STATE on�READY (46,30) at 745, 261
                        trId := -1;
                        ctxt.state := on�READY;
                        goto next_transition;
                    when 9 =>
                        -- out_msg('READY') (53,27)
                        tmp6 := (Data => (82, 69, 65, 68, 89, others => 0), Length => 5);
                        RI�out_msg(tmp6'Access);
                        -- NEXT_STATE on�READY (55,30) at 603, 266
                        trId := -1;
                        ctxt.state := on�READY;
                        goto next_transition;
                    when 10 =>
                        -- out_msg('RECORDING') (62,27)
                        tmp8 := (Data => (82, 69, 67, 79, 82, 68, 73, 78, 71, others => 0), Length => 9);
                        RI�out_msg(tmp8'Access);
                        -- NEXT_STATE on�RECORDING (64,30) at 444, 267
                        trId := -1;
                        ctxt.state := on�RECORDING;
                        goto next_transition;
                    when 11 =>
                        -- out_msg('PAUSED') (71,27)
                        tmp10 := (Data => (80, 65, 85, 83, 69, 68, others => 0), Length => 6);
                        RI�out_msg(tmp10'Access);
                        -- NEXT_STATE on�PAUSED (73,30) at 296, 267
                        trId := -1;
                        ctxt.state := on�PAUSED;
                        goto next_transition;
                    when 12 =>
                        -- out_msg('RECORDING') (80,27)
                        tmp12 := (Data => (82, 69, 67, 79, 82, 68, 73, 78, 71, others => 0), Length => 9);
                        RI�out_msg(tmp12'Access);
                        -- NEXT_STATE on�RECORDING (82,30) at 61, 325
                        trId := -1;
                        ctxt.state := on�RECORDING;
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