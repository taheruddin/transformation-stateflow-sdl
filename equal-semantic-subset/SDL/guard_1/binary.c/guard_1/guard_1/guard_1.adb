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

package body guard_1 is
    type States is (s2, s1);
    type ctxt_Ty is
        record
        state : States;
        initDone : Boolean := False;
        x : aliased asn1SccMyReal;
        whatever : aliased asn1SccMyString;
    end record;
    ctxt: aliased ctxt_Ty;
    CS_Only  : constant Integer := 3;
    procedure runTransition(Id: Integer);
    procedure get_data(x: access asn1SccMyReal) is
        begin
            case ctxt.state is
                when s2 =>
                    runTransition(CS_Only);
                when s1 =>
                    ctxt.x := x.all;
                    runTransition(2);
                when others =>
                    runTransition(CS_Only);
            end case;
        end get_data;
        

    procedure check(whatever: access asn1SccMyString) is
        begin
            case ctxt.state is
                when s2 =>
                    runTransition(CS_Only);
                when s1 =>
                    ctxt.whatever := whatever.all;
                    runTransition(1);
                when others =>
                    runTransition(CS_Only);
            end case;
        end check;
        

    procedure runTransition(Id: Integer) is
        trId : Integer := Id;
        tmp6 : aliased asn1SccMyString;
        tmp8 : aliased asn1SccMyString;
        begin
            while (trId /= -1) loop
                case trId is
                    when 0 =>
                        -- NEXT_STATE S1 (10,18) at 347, 127
                        trId := -1;
                        ctxt.state := S1;
                        goto next_transition;
                    when 1 =>
                        -- DECISION x>5.0 (22,22)
                        -- ANSWER true (24,17)
                        if ((ctxt.x > 5.0)) = true then
                            -- out_msg('S2') (26,27)
                            tmp6 := (Data => (83, 50, others => 0), Length => 2);
                            RIÜout_msg(tmp6'Access);
                            -- NEXT_STATE S2 (28,30) at 464, 328
                            trId := -1;
                            ctxt.state := S2;
                            goto next_transition;
                            -- ANSWER ELSE (None,None)
                        else
                            -- out_msg('S1') (32,27)
                            tmp8 := (Data => (83, 49, others => 0), Length => 2);
                            RIÜout_msg(tmp8'Access);
                            -- NEXT_STATE S1 (34,30) at 577, 328
                            trId := -1;
                            ctxt.state := S1;
                            goto next_transition;
                        end if;
                    when 2 =>
                        -- NEXT_STATE S1 (42,22) at 347, 237
                        trId := -1;
                        ctxt.state := S1;
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
end guard_1;