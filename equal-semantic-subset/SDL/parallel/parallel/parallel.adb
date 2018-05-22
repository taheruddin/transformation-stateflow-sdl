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
    type States is (s1, s1Üs12, s1Üs11, s1Üs12Üs121, s1Üs11Üs111, Üfinished);
    type ctxt_Ty is
        record
        state : States;
        initDone : Boolean := False;
        s1Üs11Üstate: States;
        s1Üs12Üstate: States;
    end record;
    ctxt: aliased ctxt_Ty;
    CS_Only  : constant Integer := 3;
    s1Üs11ÜSTART : constant := 1;
    s1Üs12ÜSTART : constant := 2;
    procedure s1ÜSTART;
    procedure runTransition(Id: Integer);
    procedure s1ÜSTART is
        begin
            runTransition(s1Üs11ÜSTART);
            runTransition(s1Üs12ÜSTART);
        end s1ÜSTART;
        

    procedure in_msg(msg: access asn1SccMyString) is
        begin
            case ctxt.state is
                when s1Üs12 =>
                    runTransition(CS_Only);
                when s1 =>
                    -- this is a state aggregation
                    null;
                when s1Üs11 =>
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
                        s1ÜSTART;
                        ctxt.state := S1;
                        trId := -1;
                        goto next_transition;
                    when 1 =>
                        -- NEXT_STATE s1Üs11ÜS111 (10,34) at 42, 111
                        trId := -1;
                        ctxt.s1Üs11Üstate := s1Üs11ÜS111;
                        goto next_transition;
                    when 2 =>
                        -- NEXT_STATE s1Üs12ÜS121 (20,34) at 84, 106
                        trId := -1;
                        ctxt.s1Üs12Üstate := s1Üs12ÜS121;
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