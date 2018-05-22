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

package body guard_3 is
    type States is (s2, s1);
    type ctxt_Ty is
        record
        state : States;
        initDone : Boolean := False;
        x : aliased asn1SccMyReal;
        star : aliased asn1SccMyReal;
    end record;
    ctxt: aliased ctxt_Ty;
    CS_Only  : constant Integer := 2;
    procedure runTransition(Id: Integer);
    procedure e(x: access asn1SccMyReal) is
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
        tmp10 : aliased asn1SccMyString;
        tmp8 : aliased asn1SccMyString;
        begin
            while (trId /= -1) loop
                case trId is
                    when 0 =>
                        -- NEXT_STATE S1 (10,18) at 385, 74
                        trId := -1;
                        ctxt.state := S1;
                        goto next_transition;
                    when 1 =>
                        -- DECISION x>5.0 (22,22)
                        -- ANSWER true (24,17)
                        if ((ctxt.x > 5.0)) = true then
                            -- star:=x (26,25)
                            ctxt.star := ctxt.x;
                            -- out_msg('S2') (28,27)
                            tmp8 := (Data => (83, 50, others => 0), Length => 2);
                            RIÜout_msg(tmp8'Access);
                            -- NEXT_STATE S2 (30,30) at 317, 405
                            trId := -1;
                            ctxt.state := S2;
                            goto next_transition;
                            -- ANSWER ELSE (None,None)
                        else
                            -- out_msg('S1') (34,27)
                            tmp10 := (Data => (83, 49, others => 0), Length => 2);
                            RIÜout_msg(tmp10'Access);
                            -- NEXT_STATE S1 (36,30) at 430, 353
                            trId := -1;
                            ctxt.state := S1;
                            goto next_transition;
                        end if;
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
end guard_3;