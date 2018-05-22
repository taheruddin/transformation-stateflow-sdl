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

package body parallel is
    type States is (s1, s1�s12, s1�s11, s1�s12�s121, s1�s11�s111, �finished);
    type ctxt_Ty is
        record
        state : States;
        initDone : Boolean := False;
        s1�s11�state: States;
        s1�s12�state: States;
    end record;
    ctxt: aliased ctxt_Ty;
    CS_Only  : constant Integer := 3;
    s1�s11�START : constant := 1;
    s1�s12�START : constant := 2;
    procedure s1�START;
    procedure runTransition(Id: Integer);
    procedure s1�START is
        begin
            runTransition(s1�s11�START);
            runTransition(s1�s12�START);
        end s1�START;
        

    procedure in_msg(msg: access asn1SccMyString) is
        begin
            case ctxt.state is
                when s1�s12 =>
                    runTransition(CS_Only);
                when s1 =>
                    -- this is a state aggregation
                    null;
                when s1�s11 =>
                    runTransition(CS_Only);
                when others =>
                    runTransition(CS_Only);
            end case;
        end in_msg;
        

    procedure runTransition(Id: Integer) is
        trId : Integer := Id;
        begin
            while (trId /= -1) loop
                case trId is
                    when 0 =>
                        -- NEXT_STATE S1 (35,18) at 424, 112
                        -- Entering state aggregation S1
                        s1�START;
                        ctxt.state := S1;
                        trId := -1;
                        goto next_transition;
                    when 1 =>
                        -- NEXT_STATE s1�s11�S111 (10,34) at 42, 111
                        trId := -1;
                        ctxt.s1�s11�state := s1�s11�S111;
                        goto next_transition;
                    when 2 =>
                        -- NEXT_STATE s1�s12�S121 (20,34) at 84, 106
                        trId := -1;
                        ctxt.s1�s12�state := s1�s12�S121;
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
end parallel;