-- This file was generated automatically: DO NOT MODIFY IT !

with TASTE_BasicTypes;
use TASTE_BasicTypes;
with TASTE_Dataview;
use TASTE_Dataview;
with adaasn1rtl;
use adaasn1rtl;



package atm is
    --  Provided interface "accept_card"
    procedure accept_card(account: access asn1SccMyString);
    pragma Export(C, accept_card, "atm_accept_card");
    --  Provided interface "reject_transaction"
    procedure reject_transaction(w: access asn1SccMyString);
    pragma Export(C, reject_transaction, "atm_reject_transaction");
    --  Provided interface "out_of_service"
    procedure out_of_service(w: access asn1SccMyString);
    pragma Export(C, out_of_service, "atm_out_of_service");
    --  Provided interface "abort_out"
    procedure abort_out(w: access asn1SccMyString);
    pragma Export(C, abort_out, "atm_abort_out");
    --  Provided interface "amount"
    procedure amount(amount: access asn1SccAmount);
    pragma Export(C, amount, "atm_amount");
    --  Provided interface "other_amount"
    procedure other_amount(w: access asn1SccMyString);
    pragma Export(C, other_amount, "atm_other_amount");
    --  Provided interface "digit"
    procedure digit(num: access asn1SccNum);
    pragma Export(C, digit, "atm_digit");
    --  Provided interface "ok"
    procedure ok(w: access asn1SccMyString);
    pragma Export(C, ok, "atm_ok");
    --  Provided interface "transaction_succeseeded"
    procedure transaction_succeseeded(w: access asn1SccMyString);
    pragma Export(C, transaction_succeseeded, "atm_transaction_succeseeded");
    --  Required interface "out_msg"
    procedure RI�out_msg(msg: access asn1SccMyString);
    pragma import(C, RI�out_msg, "atm_RI_out_msg");
    --  Required interface "transaction"
    procedure RI�transaction(amount: access asn1SccAmount);
    pragma import(C, RI�transaction, "atm_RI_transaction");
    --  Required interface "display"
    procedure RI�display(msg: access asn1SccMyString);
    pragma import(C, RI�display, "atm_RI_display");
    --  Required interface "eject_card"
    procedure RI�eject_card(w: access asn1SccMyString);
    pragma import(C, RI�eject_card, "atm_RI_eject_card");
end atm;