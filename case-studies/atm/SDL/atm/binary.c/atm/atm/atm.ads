-- This file was generated automatically: DO NOT MODIFY IT !

-- Declaration of the provided and required interfaces

pragma style_checks (off);
pragma warnings (off);
with taste_basictypes;
use taste_basictypes;

with adaasn1rtl;
use adaasn1rtl;

with TASTE_Dataview;
use TASTE_Dataview;

package atm is

   --  ----------------------------------------------------  --
   --  Provided interface "accept_card"
   --  ----------------------------------------------------  --
   procedure accept_card(account: access asn1sccMyString);
   pragma Export(C, accept_card, "atm_PI_accept_card");

   --  ----------------------------------------------------  --
   --  Provided interface "reject_transaction"
   --  ----------------------------------------------------  --
   procedure reject_transaction(w: access asn1sccMyString);
   pragma Export(C, reject_transaction, "atm_PI_reject_transaction");

   --  ----------------------------------------------------  --
   --  Provided interface "out_of_service"
   --  ----------------------------------------------------  --
   procedure out_of_service(w: access asn1sccMyString);
   pragma Export(C, out_of_service, "atm_PI_out_of_service");

   --  ----------------------------------------------------  --
   --  Provided interface "abort_out"
   --  ----------------------------------------------------  --
   procedure abort_out(w: access asn1sccMyString);
   pragma Export(C, abort_out, "atm_PI_abort_out");

   --  ----------------------------------------------------  --
   --  Provided interface "amount"
   --  ----------------------------------------------------  --
   procedure amount(amount: access asn1sccAmount);
   pragma Export(C, amount, "atm_PI_amount");

   --  ----------------------------------------------------  --
   --  Provided interface "other_amount"
   --  ----------------------------------------------------  --
   procedure other_amount(w: access asn1sccMyString);
   pragma Export(C, other_amount, "atm_PI_other_amount");

   --  ----------------------------------------------------  --
   --  Provided interface "digit"
   --  ----------------------------------------------------  --
   procedure digit(num: access asn1sccNum);
   pragma Export(C, digit, "atm_PI_digit");

   --  ----------------------------------------------------  --
   --  Provided interface "ok"
   --  ----------------------------------------------------  --
   procedure ok(w: access asn1sccMyString);
   pragma Export(C, ok, "atm_PI_ok");

   --  ----------------------------------------------------  --
   --  Provided interface "transaction_succeseeded"
   --  ----------------------------------------------------  --
   procedure transaction_succeseeded(w: access asn1sccMyString);
   pragma Export(C, transaction_succeseeded, "atm_PI_transaction_succeseeded");

   --  --------------------------------------------------- --
   --  Required interface "out_msg"
   --  --------------------------------------------------- --
   procedure out_msg(msg: access asn1sccMyString);
   pragma Import(C, out_msg, "atm_RI_out_msg");
   procedure RIÜout_msg(msg: access asn1sccMyString) renames out_msg;

   --  --------------------------------------------------- --
   --  Required interface "transaction"
   --  --------------------------------------------------- --
   procedure transaction(amount: access asn1sccAmount);
   pragma Import(C, transaction, "atm_RI_transaction");
   procedure RIÜtransaction(amount: access asn1sccAmount) renames transaction;

   --  --------------------------------------------------- --
   --  Required interface "display"
   --  --------------------------------------------------- --
   procedure display(msg: access asn1sccMyString);
   pragma Import(C, display, "atm_RI_display");
   procedure RIÜdisplay(msg: access asn1sccMyString) renames display;

   --  --------------------------------------------------- --
   --  Required interface "eject_card"
   --  --------------------------------------------------- --
   procedure eject_card(w: access asn1sccMyString);
   pragma Import(C, eject_card, "atm_RI_eject_card");
   procedure RIÜeject_card(w: access asn1sccMyString) renames eject_card;

   --  TASTE API to check if the input queue is empty
   procedure Check_Queue(res: access asn1SccT_Boolean);
   pragma Import(C, Check_Queue, "atm_RI_check_queue");

end atm;
