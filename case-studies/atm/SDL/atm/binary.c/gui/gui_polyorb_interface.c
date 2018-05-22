#include "po_hi_gqueue.h"
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "gui_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_protected.h"

#include "po_hi_task.h"
#include "gui_vm_if.h"

/*----------------------------------------------------
-- Protected Provided Interface "transaction"
----------------------------------------------------*/
void sync_gui_transaction(void *amount, size_t amount_len)
{
   extern process_package__taste_protected_object gui_protected;
   __po_hi_protected_lock (gui_protected.protected_id);
   gui_transaction(amount, amount_len);
   __po_hi_protected_unlock (gui_protected.protected_id);
}

/*----------------------------------------------------
-- Protected Provided Interface "display"
----------------------------------------------------*/
void sync_gui_display(void *msg, size_t msg_len)
{
   extern process_package__taste_protected_object gui_protected;
   __po_hi_protected_lock (gui_protected.protected_id);
   gui_display(msg, msg_len);
   __po_hi_protected_unlock (gui_protected.protected_id);
}

/*----------------------------------------------------
-- Protected Provided Interface "eject_card"
----------------------------------------------------*/
void sync_gui_eject_card(void *w, size_t w_len)
{
   extern process_package__taste_protected_object gui_protected;
   __po_hi_protected_lock (gui_protected.protected_id);
   gui_eject_card(w, w_len);
   __po_hi_protected_unlock (gui_protected.protected_id);
}

/*----------------------------------------------------
-- Protected Provided Interface "out_msg"
----------------------------------------------------*/
void sync_gui_out_msg(void *msg, size_t msg_len)
{
   extern process_package__taste_protected_object gui_protected;
   __po_hi_protected_lock (gui_protected.protected_id);
   gui_out_msg(msg, msg_len);
   __po_hi_protected_unlock (gui_protected.protected_id);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "accept_card"
------------------------------------------------------ */
void vm_async_gui_accept_card(void *account, size_t account_len)
{
   switch(__po_hi_get_task_id()) {
      case chip_vt_gui_transaction_k: vm_async_vt_gui_transaction_accept_card_vt(account, account_len); break;
      case chip_vt_gui_display_k: vm_async_vt_gui_display_accept_card_vt(account, account_len); break;
      case chip_vt_gui_eject_card_k: vm_async_vt_gui_eject_card_accept_card_vt(account, account_len); break;
      case chip_vt_gui_out_msg_k: vm_async_vt_gui_out_msg_accept_card_vt(account, account_len); break;
      case chip_vt_gui_gui_polling_gui_k: vm_async_vt_gui_gui_polling_gui_accept_card_vt(account, account_len); break;
      default: break;
   }
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "reject_transaction"
------------------------------------------------------ */
void vm_async_gui_reject_transaction(void *w, size_t w_len)
{
   switch(__po_hi_get_task_id()) {
      case chip_vt_gui_transaction_k: vm_async_vt_gui_transaction_reject_transaction_vt(w, w_len); break;
      case chip_vt_gui_display_k: vm_async_vt_gui_display_reject_transaction_vt(w, w_len); break;
      case chip_vt_gui_eject_card_k: vm_async_vt_gui_eject_card_reject_transaction_vt(w, w_len); break;
      case chip_vt_gui_out_msg_k: vm_async_vt_gui_out_msg_reject_transaction_vt(w, w_len); break;
      case chip_vt_gui_gui_polling_gui_k: vm_async_vt_gui_gui_polling_gui_reject_transaction_vt(w, w_len); break;
      default: break;
   }
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "out_of_service"
------------------------------------------------------ */
void vm_async_gui_out_of_service(void *w, size_t w_len)
{
   switch(__po_hi_get_task_id()) {
      case chip_vt_gui_transaction_k: vm_async_vt_gui_transaction_out_of_service_vt(w, w_len); break;
      case chip_vt_gui_display_k: vm_async_vt_gui_display_out_of_service_vt(w, w_len); break;
      case chip_vt_gui_eject_card_k: vm_async_vt_gui_eject_card_out_of_service_vt(w, w_len); break;
      case chip_vt_gui_out_msg_k: vm_async_vt_gui_out_msg_out_of_service_vt(w, w_len); break;
      case chip_vt_gui_gui_polling_gui_k: vm_async_vt_gui_gui_polling_gui_out_of_service_vt(w, w_len); break;
      default: break;
   }
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "abort_out"
------------------------------------------------------ */
void vm_async_gui_abort_out(void *w, size_t w_len)
{
   switch(__po_hi_get_task_id()) {
      case chip_vt_gui_transaction_k: vm_async_vt_gui_transaction_abort_out_vt(w, w_len); break;
      case chip_vt_gui_display_k: vm_async_vt_gui_display_abort_out_vt(w, w_len); break;
      case chip_vt_gui_eject_card_k: vm_async_vt_gui_eject_card_abort_out_vt(w, w_len); break;
      case chip_vt_gui_out_msg_k: vm_async_vt_gui_out_msg_abort_out_vt(w, w_len); break;
      case chip_vt_gui_gui_polling_gui_k: vm_async_vt_gui_gui_polling_gui_abort_out_vt(w, w_len); break;
      default: break;
   }
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "amount"
------------------------------------------------------ */
void vm_async_gui_amount(void *amount, size_t amount_len)
{
   switch(__po_hi_get_task_id()) {
      case chip_vt_gui_transaction_k: vm_async_vt_gui_transaction_amount_vt(amount, amount_len); break;
      case chip_vt_gui_display_k: vm_async_vt_gui_display_amount_vt(amount, amount_len); break;
      case chip_vt_gui_eject_card_k: vm_async_vt_gui_eject_card_amount_vt(amount, amount_len); break;
      case chip_vt_gui_out_msg_k: vm_async_vt_gui_out_msg_amount_vt(amount, amount_len); break;
      case chip_vt_gui_gui_polling_gui_k: vm_async_vt_gui_gui_polling_gui_amount_vt(amount, amount_len); break;
      default: break;
   }
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "other_amount"
------------------------------------------------------ */
void vm_async_gui_other_amount(void *w, size_t w_len)
{
   switch(__po_hi_get_task_id()) {
      case chip_vt_gui_transaction_k: vm_async_vt_gui_transaction_other_amount_vt(w, w_len); break;
      case chip_vt_gui_display_k: vm_async_vt_gui_display_other_amount_vt(w, w_len); break;
      case chip_vt_gui_eject_card_k: vm_async_vt_gui_eject_card_other_amount_vt(w, w_len); break;
      case chip_vt_gui_out_msg_k: vm_async_vt_gui_out_msg_other_amount_vt(w, w_len); break;
      case chip_vt_gui_gui_polling_gui_k: vm_async_vt_gui_gui_polling_gui_other_amount_vt(w, w_len); break;
      default: break;
   }
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "digit"
------------------------------------------------------ */
void vm_async_gui_digit(void *num, size_t num_len)
{
   switch(__po_hi_get_task_id()) {
      case chip_vt_gui_transaction_k: vm_async_vt_gui_transaction_digit_vt(num, num_len); break;
      case chip_vt_gui_display_k: vm_async_vt_gui_display_digit_vt(num, num_len); break;
      case chip_vt_gui_eject_card_k: vm_async_vt_gui_eject_card_digit_vt(num, num_len); break;
      case chip_vt_gui_out_msg_k: vm_async_vt_gui_out_msg_digit_vt(num, num_len); break;
      case chip_vt_gui_gui_polling_gui_k: vm_async_vt_gui_gui_polling_gui_digit_vt(num, num_len); break;
      default: break;
   }
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "ok"
------------------------------------------------------ */
void vm_async_gui_ok(void *w, size_t w_len)
{
   switch(__po_hi_get_task_id()) {
      case chip_vt_gui_transaction_k: vm_async_vt_gui_transaction_ok_vt(w, w_len); break;
      case chip_vt_gui_display_k: vm_async_vt_gui_display_ok_vt(w, w_len); break;
      case chip_vt_gui_eject_card_k: vm_async_vt_gui_eject_card_ok_vt(w, w_len); break;
      case chip_vt_gui_out_msg_k: vm_async_vt_gui_out_msg_ok_vt(w, w_len); break;
      case chip_vt_gui_gui_polling_gui_k: vm_async_vt_gui_gui_polling_gui_ok_vt(w, w_len); break;
      default: break;
   }
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "transaction_succeseeded"
------------------------------------------------------ */
void vm_async_gui_transaction_succeseeded(void *w, size_t w_len)
{
   switch(__po_hi_get_task_id()) {
      case chip_vt_gui_transaction_k: vm_async_vt_gui_transaction_transaction_succeseeded_vt(w, w_len); break;
      case chip_vt_gui_display_k: vm_async_vt_gui_display_transaction_succeseeded_vt(w, w_len); break;
      case chip_vt_gui_eject_card_k: vm_async_vt_gui_eject_card_transaction_succeseeded_vt(w, w_len); break;
      case chip_vt_gui_out_msg_k: vm_async_vt_gui_out_msg_transaction_succeseeded_vt(w, w_len); break;
      case chip_vt_gui_gui_polling_gui_k: vm_async_vt_gui_gui_polling_gui_transaction_succeseeded_vt(w, w_len); break;
      default: break;
   }
}

/*----------------------------------------------------
-- Protected Provided Interface "gui_polling_gui"
----------------------------------------------------*/
void sync_gui_gui_polling_gui()
{
   extern process_package__taste_protected_object gui_protected;
   __po_hi_protected_lock (gui_protected.protected_id);
   gui_gui_polling_gui();
   __po_hi_protected_unlock (gui_protected.protected_id);
}

