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

package body lamp is
    type States is (on, off);
    type ctxt_Ty is
        record
        state : States;
        initDone : Boolean := False;
        w : aliased asn1SccMyString;
    end record;
    ctxt: aliased ctxt_Ty;
    CS_Only  : constant Integer := 2;
    procedure runTransition(Id: Integer);
    procedure push(w: access asn1SccMyString) is
        begin
            case ctxt.state is
                when on =>
                    runTransition(CS_Only);
                when off =>
                    ctxt.w := w.all;
                    runTransition(1);
                when others =>
                    runTransition(CS_Only);
            end case;
        end push;
        

    procedure runTransition(Id: Integer) is
        trId : Integer := Id;
        begin
            while (trId /= -1) loop
                case trId is
                    when 0 =>
                        -- NEXT_STATE OFF (9,18) at 320, 60
                        trId := -1;
                        ctxt.state := OFF;
                        goto next_transition;
                    when 1 =>
                        -- NEXT_STATE ON (18,22) at 320, 170
                        trId := -1;
                        ctxt.state := ON;
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
end lamp;