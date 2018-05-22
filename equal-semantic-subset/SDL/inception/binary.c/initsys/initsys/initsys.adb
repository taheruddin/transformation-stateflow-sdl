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

package body initsys is
    type States is (off);
    type ctxt_Ty is
        record
        state : States;
        initDone : Boolean := False;
    end record;
    ctxt: aliased ctxt_Ty;
    CS_Only  : constant Integer := 1;
    procedure runTransition(Id: Integer);
    procedure inmsg(whatever: access asn1SccMyString) is
        begin
            case ctxt.state is
                when off =>
                    runTransition(CS_Only);
                when others =>
                    runTransition(CS_Only);
            end case;
        end inmsg;
        

    procedure runTransition(Id: Integer) is
        trId : Integer := Id;
        begin
            while (trId /= -1) loop
                case trId is
                    when 0 =>
                        -- NEXT_STATE OFF (6,18) at 353, 127
                        trId := -1;
                        ctxt.state := OFF;
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
end initsys;