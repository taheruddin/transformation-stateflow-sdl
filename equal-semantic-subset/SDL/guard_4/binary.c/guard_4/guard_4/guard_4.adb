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

package body guard_4 is
    type States is (s2, s1);
    type ctxt_Ty is
        record
        state : States;
        initDone : Boolean := False;
        x : aliased asn1SccMyReal;
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
        tmp1 : aliased asn1SccMyString;
        begin
            while (trId /= -1) loop
                case trId is
                    when 0 =>
                        -- NEXT_STATE S1 (9,18) at 397, 91
                        trId := -1;
                        ctxt.state := S1;
                        goto next_transition;
                    when 1 =>
                        -- out_msg('S2') (15,19)
                        tmp1 := (Data => (83, 50, others => 0), Length => 2);
                        RIÜout_msg(tmp1'Access);
                        -- NEXT_STATE S2 (17,22) at 397, 256
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
end guard_4;