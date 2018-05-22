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

package body atm is
    type States is (verifying_transaction, read_amount‹amount_selection, verifying_card, read_amount‹enter_amount, out_of_service, card_released);
    type ctxt_Ty is
        record
        state : States;
        initDone : Boolean := False;
        account : aliased asn1SccMyString;
        num : aliased asn1SccNum;
        amount : aliased asn1SccAmount;
        w : aliased asn1SccMyString;
    end record;
    ctxt: aliased ctxt_Ty;
    CS_Only  : constant Integer := 14;
    read_amount‹reenter_START : constant := 7;
    read_amount‹START : constant := 8;
    procedure runTransition(Id: Integer);
    procedure accept_card(account: access asn1SccMyString) is
        begin
            case ctxt.state is
                when verifying_transaction =>
                    runTransition(CS_Only);
                when out_of_service =>
                    runTransition(CS_Only);
                when verifying_card =>
                    ctxt.account := account.all;
                    runTransition(6);
                when read_amount‹enter_amount =>
                    runTransition(CS_Only);
                when read_amount‹amount_selection =>
                    runTransition(CS_Only);
                when card_released =>
                    runTransition(CS_Only);
                when others =>
                    runTransition(CS_Only);
            end case;
        end accept_card;
        

    procedure reject_transaction(w: access asn1SccMyString) is
        begin
            case ctxt.state is
                when verifying_transaction =>
                    ctxt.w := w.all;
                    runTransition(1);
                when out_of_service =>
                    runTransition(CS_Only);
                when verifying_card =>
                    runTransition(CS_Only);
                when read_amount‹enter_amount =>
                    runTransition(CS_Only);
                when read_amount‹amount_selection =>
                    runTransition(CS_Only);
                when card_released =>
                    runTransition(CS_Only);
                when others =>
                    runTransition(CS_Only);
            end case;
        end reject_transaction;
        

    procedure out_of_service(w: access asn1SccMyString) is
        begin
            case ctxt.state is
                when verifying_transaction =>
                    runTransition(CS_Only);
                when out_of_service =>
                    runTransition(CS_Only);
                when verifying_card =>
                    runTransition(CS_Only);
                when read_amount‹enter_amount =>
                    ctxt.w := w.all;
                    runTransition(3);
                when read_amount‹amount_selection =>
                    ctxt.w := w.all;
                    runTransition(3);
                when card_released =>
                    runTransition(CS_Only);
                when others =>
                    runTransition(CS_Only);
            end case;
        end out_of_service;
        

    procedure abort_out(w: access asn1SccMyString) is
        begin
            case ctxt.state is
                when verifying_transaction =>
                    runTransition(CS_Only);
                when out_of_service =>
                    runTransition(CS_Only);
                when verifying_card =>
                    runTransition(CS_Only);
                when read_amount‹enter_amount =>
                    ctxt.w := w.all;
                    runTransition(9);
                when read_amount‹amount_selection =>
                    ctxt.w := w.all;
                    runTransition(9);
                when card_released =>
                    runTransition(CS_Only);
                when others =>
                    runTransition(CS_Only);
            end case;
        end abort_out;
        

    procedure amount(amount: access asn1SccAmount) is
        begin
            case ctxt.state is
                when verifying_transaction =>
                    runTransition(CS_Only);
                when out_of_service =>
                    runTransition(CS_Only);
                when verifying_card =>
                    runTransition(CS_Only);
                when read_amount‹enter_amount =>
                    runTransition(CS_Only);
                when read_amount‹amount_selection =>
                    ctxt.amount := amount.all;
                    runTransition(12);
                when card_released =>
                    runTransition(CS_Only);
                when others =>
                    runTransition(CS_Only);
            end case;
        end amount;
        

    procedure other_amount(w: access asn1SccMyString) is
        begin
            case ctxt.state is
                when verifying_transaction =>
                    runTransition(CS_Only);
                when out_of_service =>
                    runTransition(CS_Only);
                when verifying_card =>
                    runTransition(CS_Only);
                when read_amount‹enter_amount =>
                    runTransition(CS_Only);
                when read_amount‹amount_selection =>
                    ctxt.w := w.all;
                    runTransition(13);
                when card_released =>
                    runTransition(CS_Only);
                when others =>
                    runTransition(CS_Only);
            end case;
        end other_amount;
        

    procedure digit(num: access asn1SccNum) is
        begin
            case ctxt.state is
                when verifying_transaction =>
                    runTransition(CS_Only);
                when out_of_service =>
                    runTransition(CS_Only);
                when verifying_card =>
                    runTransition(CS_Only);
                when read_amount‹enter_amount =>
                    ctxt.num := num.all;
                    runTransition(10);
                when read_amount‹amount_selection =>
                    runTransition(CS_Only);
                when card_released =>
                    runTransition(CS_Only);
                when others =>
                    runTransition(CS_Only);
            end case;
        end digit;
        

    procedure ok(w: access asn1SccMyString) is
        begin
            case ctxt.state is
                when verifying_transaction =>
                    runTransition(CS_Only);
                when out_of_service =>
                    runTransition(CS_Only);
                when verifying_card =>
                    runTransition(CS_Only);
                when read_amount‹enter_amount =>
                    ctxt.w := w.all;
                    runTransition(11);
                when read_amount‹amount_selection =>
                    runTransition(CS_Only);
                when card_released =>
                    runTransition(CS_Only);
                when others =>
                    runTransition(CS_Only);
            end case;
        end ok;
        

    procedure transaction_succeseeded(w: access asn1SccMyString) is
        begin
            case ctxt.state is
                when verifying_transaction =>
                    ctxt.w := w.all;
                    runTransition(2);
                when out_of_service =>
                    runTransition(CS_Only);
                when verifying_card =>
                    runTransition(CS_Only);
                when read_amount‹enter_amount =>
                    runTransition(CS_Only);
                when read_amount‹amount_selection =>
                    runTransition(CS_Only);
                when card_released =>
                    runTransition(CS_Only);
                when others =>
                    runTransition(CS_Only);
            end case;
        end transaction_succeseeded;
        

    procedure runTransition(Id: Integer) is
        trId : Integer := Id;
        tmp36 : aliased asn1SccMyString;
        tmp12 : aliased asn1SccMyString;
        tmp1 : aliased asn1SccMyString;
        tmp26 : aliased asn1SccMyString;
        tmp18 : aliased asn1SccMyString;
        tmp22 : aliased asn1SccMyString;
        tmp20 : aliased asn1SccMyString;
        tmp34 : aliased asn1SccMyString;
        tmp38 : aliased asn1SccMyString;
        tmp3 : aliased asn1SccMyString;
        tmp28 : aliased asn1SccMyString;
        tmp14 : aliased asn1SccMyString;
        tmp24 : aliased asn1SccMyString;
        tmp32 : aliased asn1SccMyString;
        begin
            while (trId /= -1) loop
                case trId is
                    when 0 =>
                        -- NEXT_STATE VERIFYING_CARD (76,18) at 588, 140
                        trId := -1;
                        ctxt.state := VERIFYING_CARD;
                        goto next_transition;
                    when 1 =>
                        -- display('Limit exceeded') (97,19)
                        tmp20 := (Data => (76, 105, 109, 105, 116, 32, 101, 120, 99, 101, 101, 100, 101, 100, others => 0), Length => 14);
                        RI‹display(tmp20'Access);
                        -- out_msg('READ_AMOUNT->reenter') (99,19)
                        tmp22 := (Data => (82, 69, 65, 68, 95, 65, 77, 79, 85, 78, 84, 45, 62, 114, 101, 101, 110, 116, 101, 114, others => 0), Length => 20);
                        RI‹out_msg(tmp22'Access);
                        -- NEXT_STATE READ_AMOUNT (101,22) at 26, 705
                        trId := READ_AMOUNT‹reenter_START;
                        goto next_transition;
                    when 2 =>
                        -- eject_card('') (105,19)
                        tmp24 := (Data => (others => 0), Length => 0);
                        RI‹eject_card(tmp24'Access);
                        -- out_msg('CARD_RELEASED') (107,19)
                        tmp26 := (Data => (67, 65, 82, 68, 95, 82, 69, 76, 69, 65, 83, 69, 68, others => 0), Length => 13);
                        RI‹out_msg(tmp26'Access);
                        -- NEXT_STATE CARD_RELEASED (109,22) at 281, 705
                        trId := -1;
                        ctxt.state := CARD_RELEASED;
                        goto next_transition;
                    when 3 =>
                        -- out_msg('OUT_OF_SERVICE') (116,19)
                        tmp28 := (Data => (79, 85, 84, 95, 79, 70, 95, 83, 69, 82, 86, 73, 67, 69, others => 0), Length => 14);
                        RI‹out_msg(tmp28'Access);
                        -- NEXT_STATE OUT_OF_SERVICE (118,22) at 713, 450
                        trId := -1;
                        ctxt.state := OUT_OF_SERVICE;
                        goto next_transition;
                    when 4 =>
                        -- transaction(amount) (122,19)
                        RI‹transaction(ctxt.amount'Access);
                        -- out_msg('VERIFYING_TRANSACTION') (124,19)
                        tmp32 := (Data => (86, 69, 82, 73, 70, 89, 73, 78, 71, 95, 84, 82, 65, 78, 83, 65, 67, 84, 73, 79, 78, others => 0), Length => 21);
                        RI‹out_msg(tmp32'Access);
                        -- NEXT_STATE VERIFYING_TRANSACTION (126,22) at 260, 500
                        trId := -1;
                        ctxt.state := VERIFYING_TRANSACTION;
                        goto next_transition;
                    when 5 =>
                        -- eject_card('') (130,19)
                        tmp34 := (Data => (others => 0), Length => 0);
                        RI‹eject_card(tmp34'Access);
                        -- out_msg('CARD_RELEASED') (132,19)
                        tmp36 := (Data => (67, 65, 82, 68, 95, 82, 69, 76, 69, 65, 83, 69, 68, others => 0), Length => 13);
                        RI‹out_msg(tmp36'Access);
                        -- NEXT_STATE CARD_RELEASED (134,22) at 513, 510
                        trId := -1;
                        ctxt.state := CARD_RELEASED;
                        goto next_transition;
                    when 6 =>
                        -- out_msg('READ_AMOUNT') (141,19)
                        tmp38 := (Data => (82, 69, 65, 68, 95, 65, 77, 79, 85, 78, 84, others => 0), Length => 11);
                        RI‹out_msg(tmp38'Access);
                        -- NEXT_STATE READ_AMOUNT (143,22) at 592, 295
                        trId := read_amount‹START;
                        goto next_transition;
                    when 7 =>
                        -- JOIN read_amount‹read_amount‹ntr_otr_amt (10,21) at 448, 264
                        goto read_amount‹read_amount‹ntr_otr_amt;
                    when 8 =>
                        -- display('Select amount') (14,23)
                        tmp1 := (Data => (83, 101, 108, 101, 99, 116, 32, 97, 109, 111, 117, 110, 116, others => 0), Length => 13);
                        RI‹display(tmp1'Access);
                        -- out_msg('AMOUNT_SELECTION') (16,23)
                        tmp3 := (Data => (65, 77, 79, 85, 78, 84, 95, 83, 69, 76, 69, 67, 84, 73, 79, 78, others => 0), Length => 16);
                        RI‹out_msg(tmp3'Access);
                        -- NEXT_STATE read_amount‹AMOUNT_SELECTION (18,26) at 176, 228
                        trId := -1;
                        ctxt.state := read_amount‹AMOUNT_SELECTION;
                        goto next_transition;
                    when 9 =>
                        -- RETURN aborted (None,None) at 444, 137
                        trId := 5;
                        goto next_transition;
                    when 10 =>
                        -- amount:=amount*10+num (37,25)
                        ctxt.amount := Asn1Int(((ctxt.amount * 10) + ctxt.num));
                        -- out_msg('ENTER_AMOUNT') (39,27)
                        tmp12 := (Data => (69, 78, 84, 69, 82, 95, 65, 77, 79, 85, 78, 84, others => 0), Length => 12);
                        RI‹out_msg(tmp12'Access);
                        -- NEXT_STATE read_amount‹ENTER_AMOUNT (41,30) at 179, 763
                        trId := -1;
                        ctxt.state := read_amount‹ENTER_AMOUNT;
                        goto next_transition;
                    when 11 =>
                        -- RETURN  (None,None) at 375, 658
                        trId := 4;
                        goto next_transition;
                    when 12 =>
                        -- RETURN  (None,None) at 44, 338
                        trId := 4;
                        goto next_transition;
                    when 13 =>
                        -- JOIN read_amount‹read_amount‹ntr_otr_amt (None,None) at None, None
                        goto read_amount‹read_amount‹ntr_otr_amt;
                    when CS_Only =>
                        trId := -1;
                        goto next_transition;
                    when others =>
                        null;
                end case;
                goto next_transition;
                -- CONNECTION read_amount‹read_amount‹ntr_otr_amt (56,20)
                <<read_amount‹read_amount‹ntr_otr_amt>>
                -- display('Enter amount') (58,27)
                tmp14 := (Data => (69, 110, 116, 101, 114, 32, 97, 109, 111, 117, 110, 116, others => 0), Length => 12);
                RI‹display(tmp14'Access);
                -- amount:=0 (60,25)
                ctxt.amount := Asn1Int(0);
                -- out_msg('ENTER_AMOUNT') (62,27)
                tmp18 := (Data => (69, 78, 84, 69, 82, 95, 65, 77, 79, 85, 78, 84, others => 0), Length => 12);
                RI‹out_msg(tmp18'Access);
                -- NEXT_STATE read_amount‹ENTER_AMOUNT (64,30) at 260, 548
                trId := -1;
                ctxt.state := read_amount‹ENTER_AMOUNT;
                goto next_transition;
                <<next_transition>>
                null;
            end loop;
        end runTransition;
        

    begin
        runTransition(0);
        ctxt.initDone := True;
end atm;