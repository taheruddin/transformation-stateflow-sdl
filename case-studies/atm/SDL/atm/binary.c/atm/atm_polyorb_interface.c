#include "po_hi_gqueue.h"
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "atm_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_protected.h"

#include "po_hi_task.h"
#include "atm_vm_if.h"

/*----------------------------------------------------
-- Protected Provided Interface "accept_card"
----------------------------------------------------*/
void sync_atm_accept_card(void *account, size_t account_len)
{
   extern process_package__taste_protected_object atm_protected;
   __po_hi_protected_lock (atm_protected.protected_id);
   atm_accept_card(account, account_len);
   __po_hi_protected_unlock (atm_protected.protected_id);
}

/*----------------------------------------------------
-- Protected Provided Interface "reject_transaction"
----------------------------------------------------*/
void sync_atm_reject_transaction(void *w, size_t w_len)
{
   extern process_package__taste_protected_object atm_protected;
   __po_hi_protected_lock (atm_protected.protected_id);
   atm_reject_transaction(w, w_len);
   __po_hi_protected_unlock (atm_protected.protected_id);
}

/*----------------------------------------------------
-- Protected Provided Interface "out_of_service"
----------------------------------------------------*/
void sync_atm_out_of_service(void *w, size_t w_len)
{
   extern process_package__taste_protected_object atm_protected;
   __po_hi_protected_lock (atm_protected.protected_id);
   atm_out_of_service(w, w_len);
   __po_hi_protected_unlock (atm_protected.protected_id);
}

/*----------------------------------------------------
-- Protected Provided Interface "abort_out"
----------------------------------------------------*/
void sync_atm_abort_out(void *w, size_t w_len)
{
   extern process_package__taste_protected_object atm_protected;
   __po_hi_protected_lock (atm_protected.protected_id);
   atm_abort_out(w, w_len);
   __po_hi_protected_unlock (atm_protected.protected_id);
}

/*----------------------------------------------------
-- Protected Provided Interface "amount"
----------------------------------------------------*/
void sync_atm_amount(void *amount, size_t amount_len)
{
   extern process_package__taste_protected_object atm_protected;
   __po_hi_protected_lock (atm_protected.protected_id);
   atm_amount(amount, amount_len);
   __po_hi_protected_unlock (atm_protected.protected_id);
}

/*----------------------------------------------------
-- Protected Provided Interface "other_amount"
----------------------------------------------------*/
void sync_atm_other_amount(void *w, size_t w_len)
{
   extern process_package__taste_protected_object atm_protected;
   __po_hi_protected_lock (atm_protected.protected_id);
   atm_other_amount(w, w_len);
   __po_hi_protected_unlock (atm_protected.protected_id);
}

/*----------------------------------------------------
-- Protected Provided Interface "digit"
----------------------------------------------------*/
void sync_atm_digit(void *num, size_t num_len)
{
   extern process_package__taste_protected_object atm_protected;
   __po_hi_protected_lock (atm_protected.protected_id);
   atm_digit(num, num_len);
   __po_hi_protected_unlock (atm_protected.protected_id);
}

/*----------------------------------------------------
-- Protected Provided Interface "ok"
----------------------------------------------------*/
void sync_atm_ok(void *w, size_t w_len)
{
   extern process_package__taste_protected_object atm_protected;
   __po_hi_protected_lock (atm_protected.protected_id);
   atm_ok(w, w_len);
   __po_hi_protected_unlock (atm_protected.protected_id);
}

/*----------------------------------------------------
-- Protected Provided Interface "transaction_succeseeded"
----------------------------------------------------*/
void sync_atm_transaction_succeseeded(void *w, size_t w_len)
{
   extern process_package__taste_protected_object atm_protected;
   __po_hi_protected_lock (atm_protected.protected_id);
   atm_transaction_succeseeded(w, w_len);
   __po_hi_protected_unlock (atm_protected.protected_id);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "out_msg"
------------------------------------------------------ */
void vm_async_atm_out_msg(void *msg, size_t msg_len)
{
   switch(__po_hi_get_task_id()) {
      case chip_vt_atm_accept_card_k: vm_async_vt_atm_accept_card_out_msg_vt(msg, msg_len); break;
      case chip_vt_atm_reject_transaction_k: vm_async_vt_atm_reject_transaction_out_msg_vt(msg, msg_len); break;
      case chip_vt_atm_out_of_service_k: vm_async_vt_atm_out_of_service_out_msg_vt(msg, msg_len); break;
      case chip_vt_atm_abort_out_k: vm_async_vt_atm_abort_out_out_msg_vt(msg, msg_len); break;
      case chip_vt_atm_amount_k: vm_async_vt_atm_amount_out_msg_vt(msg, msg_len); break;
      case chip_vt_atm_other_amount_k: vm_async_vt_atm_other_amount_out_msg_vt(msg, msg_len); break;
      case chip_vt_atm_digit_k: vm_async_vt_atm_digit_out_msg_vt(msg, msg_len); break;
      case chip_vt_atm_ok_k: vm_async_vt_atm_ok_out_msg_vt(msg, msg_len); break;
      case chip_vt_atm_transaction_succeseeded_k: vm_async_vt_atm_transaction_succeseeded_out_msg_vt(msg, msg_len); break;
      default: break;
   }
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "transaction"
------------------------------------------------------ */
void vm_async_atm_transaction(void *amount, size_t amount_len)
{
   switch(__po_hi_get_task_id()) {
      case chip_vt_atm_accept_card_k: vm_async_vt_atm_accept_card_transaction_vt(amount, amount_len); break;
      case chip_vt_atm_reject_transaction_k: vm_async_vt_atm_reject_transaction_transaction_vt(amount, amount_len); break;
      case chip_vt_atm_out_of_service_k: vm_async_vt_atm_out_of_service_transaction_vt(amount, amount_len); break;
      case chip_vt_atm_abort_out_k: vm_async_vt_atm_abort_out_transaction_vt(amount, amount_len); break;
      case chip_vt_atm_amount_k: vm_async_vt_atm_amount_transaction_vt(amount, amount_len); break;
      case chip_vt_atm_other_amount_k: vm_async_vt_atm_other_amount_transaction_vt(amount, amount_len); break;
      case chip_vt_atm_digit_k: vm_async_vt_atm_digit_transaction_vt(amount, amount_len); break;
      case chip_vt_atm_ok_k: vm_async_vt_atm_ok_transaction_vt(amount, amount_len); break;
      case chip_vt_atm_transaction_succeseeded_k: vm_async_vt_atm_transaction_succeseeded_transaction_vt(amount, amount_len); break;
      default: break;
   }
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "display"
------------------------------------------------------ */
void vm_async_atm_display(void *msg, size_t msg_len)
{
   switch(__po_hi_get_task_id()) {
      case chip_vt_atm_accept_card_k: vm_async_vt_atm_accept_card_display_vt(msg, msg_len); break;
      case chip_vt_atm_reject_transaction_k: vm_async_vt_atm_reject_transaction_display_vt(msg, msg_len); break;
      case chip_vt_atm_out_of_service_k: vm_async_vt_atm_out_of_service_display_vt(msg, msg_len); break;
      case chip_vt_atm_abort_out_k: vm_async_vt_atm_abort_out_display_vt(msg, msg_len); break;
      case chip_vt_atm_amount_k: vm_async_vt_atm_amount_display_vt(msg, msg_len); break;
      case chip_vt_atm_other_amount_k: vm_async_vt_atm_other_amount_display_vt(msg, msg_len); break;
      case chip_vt_atm_digit_k: vm_async_vt_atm_digit_display_vt(msg, msg_len); break;
      case chip_vt_atm_ok_k: vm_async_vt_atm_ok_display_vt(msg, msg_len); break;
      case chip_vt_atm_transaction_succeseeded_k: vm_async_vt_atm_transaction_succeseeded_display_vt(msg, msg_len); break;
      default: break;
   }
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "eject_card"
------------------------------------------------------ */
void vm_async_atm_eject_card(void *w, size_t w_len)
{
   switch(__po_hi_get_task_id()) {
      case chip_vt_atm_accept_card_k: vm_async_vt_atm_accept_card_eject_card_vt(w, w_len); break;
      case chip_vt_atm_reject_transaction_k: vm_async_vt_atm_reject_transaction_eject_card_vt(w, w_len); break;
      case chip_vt_atm_out_of_service_k: vm_async_vt_atm_out_of_service_eject_card_vt(w, w_len); break;
      case chip_vt_atm_abort_out_k: vm_async_vt_atm_abort_out_eject_card_vt(w, w_len); break;
      case chip_vt_atm_amount_k: vm_async_vt_atm_amount_eject_card_vt(w, w_len); break;
      case chip_vt_atm_other_amount_k: vm_async_vt_atm_other_amount_eject_card_vt(w, w_len); break;
      case chip_vt_atm_digit_k: vm_async_vt_atm_digit_eject_card_vt(w, w_len); break;
      case chip_vt_atm_ok_k: vm_async_vt_atm_ok_eject_card_vt(w, w_len); break;
      case chip_vt_atm_transaction_succeseeded_k: vm_async_vt_atm_transaction_succeseeded_eject_card_vt(w, w_len); break;
      default: break;
   }
}

/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue"
------------------------------------------------------ */
void vm_atm_check_queue(void *res, size_t *res_len)
{
   sync_chip_taste_api_atm_has_pending_msg(res, res_len);
}

