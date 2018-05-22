-- This file was generated automatically: DO NOT MODIFY IT !

with System.IO;
use System.IO;

with Ada.Unchecked_Conversion;
with Ada.Numerics.Generic_Elementary_Functions;

with TASTE_BasicTypes;
use TASTE_BasicTypes;
with adaasn1rtl;
use adaasn1rtl;

with Interfaces;
use Interfaces;

package body functions is
    type States is (s2, s1);
    type ctxt_Ty is
        record
        state : States;
        initDone : Boolean := False;
        y : aliased asn1SccT_Int32;
        x : aliased asn1SccT_Int32;
    end record;
    ctxt: aliased ctxt_Ty;
    CS_Only  : constant Integer := 2;
    procedure runTransition(Id: Integer);
    procedure pÜfodo;
    procedure pÜfodo is
        begin
            -- DECISION x>9 (12,22)
            -- ANSWER true (14,17)
            if ((ctxt.x > 9)) = true then
                -- y:=1 (16,25)
                ctxt.y := Asn1Int(1);
                -- RETURN  (None,None) at 86, 263
                return;
                -- ANSWER ELSE (None,None)
            else
                -- y:=0 (22,25)
                ctxt.y := Asn1Int(0);
                -- RETURN  (None,None) at 176, 263
                return;
            end if;
        end pÜfodo;
        

    procedure e(x: access asn1SccT_Int32) is
        begin
            case ctxt.state is
                when s2 =>
                    runTransition(CS_Only);
                when s1 =>
                    ctxt.x := x.all;
                    runTransition(1);
                when others =>
                    runTransition(CS_Only);
            end case;
        end e;
        

    procedure runTransition(Id: Integer) is
        trId : Integer := Id;
        begin
            while (trId /= -1) loop
                case trId is
                    when 0 =>
                        -- NEXT_STATE S1 (30,18) at 582, 71
                        trId := -1;
                        ctxt.state := S1;
                        goto next_transition;
                    when 1 =>
                        -- fodo (36,17)
                        pÜfodo;
                        -- out_msg(y) (38,19)
                        RIÜout_msg(ctxt.y'Access);
                        -- NEXT_STATE S2 (40,22) at 582, 291
                        trId := -1;
                        ctxt.state := S2;
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
end functions;