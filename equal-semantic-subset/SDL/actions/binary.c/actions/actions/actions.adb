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

package body actions is
    type States is (s3, s2, s1, s5, s4);
    type ctxt_Ty is
        record
        state : States;
        initDone : Boolean := False;
        x : aliased asn1SccT_Int32;
        whatever : aliased asn1SccMyString;
    end record;
    ctxt: aliased ctxt_Ty;
    CS_Only  : constant Integer := 5;
    procedure runTransition(Id: Integer);
    procedure push(w: access asn1SccMyString) is
        begin
            case ctxt.state is
                when s3 =>
                    ctxt.whatever := w.all;
                    runTransition(4);
                when s2 =>
                    ctxt.whatever := w.all;
                    runTransition(3);
                when s1 =>
                    ctxt.whatever := w.all;
                    runTransition(2);
                when s5 =>
                    runTransition(CS_Only);
                when s4 =>
                    runTransition(CS_Only);
                when others =>
                    runTransition(CS_Only);
            end case;
        end push;
        

    procedure tap(w: access asn1SccMyString) is
        begin
            case ctxt.state is
                when s3 =>
                    runTransition(CS_Only);
                when s2 =>
                    ctxt.whatever := w.all;
                    runTransition(1);
                when s1 =>
                    runTransition(CS_Only);
                when s5 =>
                    runTransition(CS_Only);
                when s4 =>
                    runTransition(CS_Only);
                when others =>
                    runTransition(CS_Only);
            end case;
        end tap;
        

    procedure runTransition(Id: Integer) is
        trId : Integer := Id;
        begin
            while (trId /= -1) loop
                case trId is
                    when 0 =>
                        -- x:=2 (10,13)
                        ctxt.x := Asn1Int(2);
                        -- NEXT_STATE S1 (12,18) at 451, 256
                        trId := -1;
                        ctxt.state := S1;
                        goto next_transition;
                    when 1 =>
                        -- x:=3 (21,17)
                        ctxt.x := Asn1Int(3);
                        -- out_msg(x) (23,19)
                        RIÜout_msg(ctxt.x'Access);
                        -- NEXT_STATE S5 (25,22) at 840, 366
                        trId := -1;
                        ctxt.state := S5;
                        goto next_transition;
                    when 2 =>
                        -- out_msg(x) (35,19)
                        RIÜout_msg(ctxt.x'Access);
                        -- NEXT_STATE S2 (37,22) at 561, 315
                        trId := -1;
                        ctxt.state := S2;
                        goto next_transition;
                    when 3 =>
                        -- x:=3 (47,17)
                        ctxt.x := Asn1Int(3);
                        -- out_msg(x) (49,19)
                        RIÜout_msg(ctxt.x'Access);
                        -- NEXT_STATE S3 (51,22) at 699, 364
                        trId := -1;
                        ctxt.state := S3;
                        goto next_transition;
                    when 4 =>
                        -- out_msg(x) (58,19)
                        RIÜout_msg(ctxt.x'Access);
                        -- x:=4 (60,17)
                        ctxt.x := Asn1Int(4);
                        -- NEXT_STATE S4 (62,22) at 970, 368
                        trId := -1;
                        ctxt.state := S4;
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
end actions;