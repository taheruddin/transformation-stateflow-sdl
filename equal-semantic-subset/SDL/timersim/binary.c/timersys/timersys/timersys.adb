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

package body timersys is
    type States is (ready, ticking, wait);
    type ctxt_Ty is
        record
        state : States;
        initDone : Boolean := False;
        whatever : aliased asn1SccT_Boolean;
    end record;
    ctxt: aliased ctxt_Ty;
    CS_Only  : constant Integer := 3;
    procedure runTransition(Id: Integer);
    procedure inputmsg(into: access asn1SccT_Boolean) is
        begin
            case ctxt.state is
                when ready =>
                    runTransition(CS_Only);
                when ticking =>
                    runTransition(CS_Only);
                when wait =>
                    ctxt.whatever := into.all;
                    runTransition(2);
                when others =>
                    runTransition(CS_Only);
            end case;
        end inputmsg;
        

    procedure sdltmr is
        begin
            case ctxt.state is
                when ready =>
                    runTransition(CS_Only);
                when ticking =>
                    runTransition(1);
                when wait =>
                    runTransition(CS_Only);
                when others =>
                    runTransition(CS_Only);
            end case;
        end sdltmr;
        

    procedure runTransition(Id: Integer) is
        trId : Integer := Id;
        tmp4 : aliased asn1SccT_UInt32;
        tmp1 : aliased asn1SccT_Boolean;
        tmp7 : aliased asn1SccT_Boolean;
        begin
            while (trId /= -1) loop
                case trId is
                    when 0 =>
                        -- NEXT_STATE WAIT (11,18) at 437, 94
                        trId := -1;
                        ctxt.state := WAIT;
                        goto next_transition;
                    when 1 =>
                        -- outputmsg(true) (26,19)
                        tmp1 := true;
                        RIÜoutputmsg(tmp1'Access);
                        -- NEXT_STATE READY (28,22) at 624, 275
                        trId := -1;
                        ctxt.state := READY;
                        goto next_transition;
                    when 2 =>
                        -- set_timer(2000, sdltmr) (35,17)
                        tmp4 := 2000;
                        SET_sdltmr(tmp4'access);
                        -- outputmsg(false) (37,19)
                        tmp7 := false;
                        RIÜoutputmsg(tmp7'Access);
                        -- NEXT_STATE TICKING (39,22) at 437, 310
                        trId := -1;
                        ctxt.state := TICKING;
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
end timersys;