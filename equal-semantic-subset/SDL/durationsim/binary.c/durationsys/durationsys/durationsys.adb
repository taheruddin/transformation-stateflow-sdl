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

package body durationsys is
    type States is (ready, ticking, wait);
    type ctxt_Ty is
        record
        state : States;
        initDone : Boolean := False;
        someval : aliased asn1SccT_Int32;
    end record;
    ctxt: aliased ctxt_Ty;
    CS_Only  : constant Integer := 4;
    procedure runTransition(Id: Integer);
    procedure inputmsg(inmsg: access asn1SccT_Int32) is
        begin
            case ctxt.state is
                when ready =>
                    runTransition(CS_Only);
                when ticking =>
                    ctxt.someval := inmsg.all;
                    runTransition(1);
                when wait =>
                    ctxt.someval := inmsg.all;
                    runTransition(3);
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
                    runTransition(2);
                when wait =>
                    runTransition(CS_Only);
                when others =>
                    runTransition(CS_Only);
            end case;
        end sdltmr;
        

    procedure runTransition(Id: Integer) is
        trId : Integer := Id;
        tmp14 : aliased asn1SccT_UInt32;
        tmp19 : aliased asn1SccMyString;
        tmp17 : aliased asn1SccMyString;
        tmp6 : aliased asn1SccMyString;
        tmp8 : aliased asn1SccMyString;
        begin
            while (trId /= -1) loop
                case trId is
                    when 0 =>
                        -- NEXT_STATE WAIT (11,18) at 604, 261
                        trId := -1;
                        ctxt.state := WAIT;
                        goto next_transition;
                    when 1 =>
                        -- DECISION someval (-1,-1)
                        -- ANSWER 3 (28,17)
                        if (ctxt.someval) = 3 then
                            -- NEXT_STATE TICKING (30,30) at 802, 555
                            trId := -1;
                            ctxt.state := TICKING;
                            goto next_transition;
                            -- ANSWER ELSE (None,None)
                        else
                            -- reset_timer(sdltmr) (34,25)
                            RESET_sdltmr;
                            -- outputmsg('WAIT') (36,27)
                            tmp6 := (Data => (87, 65, 73, 84, others => 0), Length => 4);
                            RIÜoutputmsg(tmp6'Access);
                            -- NEXT_STATE WAIT (38,30) at 923, 665
                            trId := -1;
                            ctxt.state := WAIT;
                            goto next_transition;
                        end if;
                    when 2 =>
                        -- outputmsg('READY') (43,19)
                        tmp8 := (Data => (82, 69, 65, 68, 89, others => 0), Length => 5);
                        RIÜoutputmsg(tmp8'Access);
                        -- NEXT_STATE READY (45,22) at 1079, 497
                        trId := -1;
                        ctxt.state := READY;
                        goto next_transition;
                    when 3 =>
                        -- DECISION someval (-1,-1)
                        -- ANSWER 3 (54,17)
                        if (ctxt.someval) = 3 then
                            -- set_timer(5000, sdltmr) (56,25)
                            tmp14 := 5000;
                            SET_sdltmr(tmp14'access);
                            -- outputmsg('TICKING') (58,27)
                            tmp17 := (Data => (84, 73, 67, 75, 73, 78, 71, others => 0), Length => 7);
                            RIÜoutputmsg(tmp17'Access);
                            -- NEXT_STATE TICKING (60,30) at 536, 589
                            trId := -1;
                            ctxt.state := TICKING;
                            goto next_transition;
                            -- ANSWER ELSE (None,None)
                        else
                            -- outputmsg('WAIT') (64,27)
                            tmp19 := (Data => (87, 65, 73, 84, others => 0), Length => 4);
                            RIÜoutputmsg(tmp19'Access);
                            -- NEXT_STATE WAIT (66,30) at 691, 539
                            trId := -1;
                            ctxt.state := WAIT;
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
end durationsys;