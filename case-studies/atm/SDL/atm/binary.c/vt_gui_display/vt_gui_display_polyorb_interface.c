#include "po_hi_gqueue.h"
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "vt_gui_display_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_task.h"
/* ------------------------------------------------------
-- Asynchronous Provided Interface "artificial_display"
------------------------------------------------------ */
void po_hi_c_vt_gui_display_artificial_display(__po_hi_task_id e, dataview__mystring_buffer_impl buf)
{
    (void)e;
   sync_gui_display (buf.buffer, buf.length);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "display"
------------------------------------------------------ */
void vm_vt_gui_display_display(void *msg, size_t msg_len)
{
   sync_gui_display(msg, msg_len);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "accept_card_vt"
------------------------------------------------------ */
void vm_async_vt_gui_display_accept_card_vt(void *account, size_t account_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_gui_display_global_outport_accept_card_vt.vt_gui_display_global_outport_accept_card_vt.buffer), account, account_len);
   request.vars.vt_gui_display_global_outport_accept_card_vt.vt_gui_display_global_outport_accept_card_vt.length = account_len;
   request.port = vt_gui_display_global_outport_accept_card_vt;
   __po_hi_gqueue_store_out(chip_vt_gui_display_k, vt_gui_display_local_outport_accept_card_vt, &request);
   __po_hi_send_output(chip_vt_gui_display_k, vt_gui_display_global_outport_accept_card_vt);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "reject_transaction_vt"
------------------------------------------------------ */
void vm_async_vt_gui_display_reject_transaction_vt(void *w, size_t w_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_gui_display_global_outport_reject_transaction_vt.vt_gui_display_global_outport_reject_transaction_vt.buffer), w, w_len);
   request.vars.vt_gui_display_global_outport_reject_transaction_vt.vt_gui_display_global_outport_reject_transaction_vt.length = w_len;
   request.port = vt_gui_display_global_outport_reject_transaction_vt;
   __po_hi_gqueue_store_out(chip_vt_gui_display_k, vt_gui_display_local_outport_reject_transaction_vt, &request);
   __po_hi_send_output(chip_vt_gui_display_k, vt_gui_display_global_outport_reject_transaction_vt);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "out_of_service_vt"
------------------------------------------------------ */
void vm_async_vt_gui_display_out_of_service_vt(void *w, size_t w_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_gui_display_global_outport_out_of_service_vt.vt_gui_display_global_outport_out_of_service_vt.buffer), w, w_len);
   request.vars.vt_gui_display_global_outport_out_of_service_vt.vt_gui_display_global_outport_out_of_service_vt.length = w_len;
   request.port = vt_gui_display_global_outport_out_of_service_vt;
   __po_hi_gqueue_store_out(chip_vt_gui_display_k, vt_gui_display_local_outport_out_of_service_vt, &request);
   __po_hi_send_output(chip_vt_gui_display_k, vt_gui_display_global_outport_out_of_service_vt);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "abort_out_vt"
------------------------------------------------------ */
void vm_async_vt_gui_display_abort_out_vt(void *w, size_t w_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_gui_display_global_outport_abort_out_vt.vt_gui_display_global_outport_abort_out_vt.buffer), w, w_len);
   request.vars.vt_gui_display_global_outport_abort_out_vt.vt_gui_display_global_outport_abort_out_vt.length = w_len;
   request.port = vt_gui_display_global_outport_abort_out_vt;
   __po_hi_gqueue_store_out(chip_vt_gui_display_k, vt_gui_display_local_outport_abort_out_vt, &request);
   __po_hi_send_output(chip_vt_gui_display_k, vt_gui_display_global_outport_abort_out_vt);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "amount_vt"
------------------------------------------------------ */
void vm_async_vt_gui_display_amount_vt(void *amount, size_t amount_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_gui_display_global_outport_amount_vt.vt_gui_display_global_outport_amount_vt.buffer), amount, amount_len);
   request.vars.vt_gui_display_global_outport_amount_vt.vt_gui_display_global_outport_amount_vt.length = amount_len;
   request.port = vt_gui_display_global_outport_amount_vt;
   __po_hi_gqueue_store_out(chip_vt_gui_display_k, vt_gui_display_local_outport_amount_vt, &request);
   __po_hi_send_output(chip_vt_gui_display_k, vt_gui_display_global_outport_amount_vt);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "other_amount_vt"
------------------------------------------------------ */
void vm_async_vt_gui_display_other_amount_vt(void *w, size_t w_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_gui_display_global_outport_other_amount_vt.vt_gui_display_global_outport_other_amount_vt.buffer), w, w_len);
   request.vars.vt_gui_display_global_outport_other_amount_vt.vt_gui_display_global_outport_other_amount_vt.length = w_len;
   request.port = vt_gui_display_global_outport_other_amount_vt;
   __po_hi_gqueue_store_out(chip_vt_gui_display_k, vt_gui_display_local_outport_other_amount_vt, &request);
   __po_hi_send_output(chip_vt_gui_display_k, vt_gui_display_global_outport_other_amount_vt);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "digit_vt"
------------------------------------------------------ */
void vm_async_vt_gui_display_digit_vt(void *num, size_t num_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_gui_display_global_outport_digit_vt.vt_gui_display_global_outport_digit_vt.buffer), num, num_len);
   request.vars.vt_gui_display_global_outport_digit_vt.vt_gui_display_global_outport_digit_vt.length = num_len;
   request.port = vt_gui_display_global_outport_digit_vt;
   __po_hi_gqueue_store_out(chip_vt_gui_display_k, vt_gui_display_local_outport_digit_vt, &request);
   __po_hi_send_output(chip_vt_gui_display_k, vt_gui_display_global_outport_digit_vt);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "ok_vt"
------------------------------------------------------ */
void vm_async_vt_gui_display_ok_vt(void *w, size_t w_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_gui_display_global_outport_ok_vt.vt_gui_display_global_outport_ok_vt.buffer), w, w_len);
   request.vars.vt_gui_display_global_outport_ok_vt.vt_gui_display_global_outport_ok_vt.length = w_len;
   request.port = vt_gui_display_global_outport_ok_vt;
   __po_hi_gqueue_store_out(chip_vt_gui_display_k, vt_gui_display_local_outport_ok_vt, &request);
   __po_hi_send_output(chip_vt_gui_display_k, vt_gui_display_global_outport_ok_vt);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "transaction_succeseeded_vt"
------------------------------------------------------ */
void vm_async_vt_gui_display_transaction_succeseeded_vt(void *w, size_t w_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_gui_display_global_outport_transaction_succeseeded_vt.vt_gui_display_global_outport_transaction_succeseeded_vt.buffer), w, w_len);
   request.vars.vt_gui_display_global_outport_transaction_succeseeded_vt.vt_gui_display_global_outport_transaction_succeseeded_vt.length = w_len;
   request.port = vt_gui_display_global_outport_transaction_succeseeded_vt;
   __po_hi_gqueue_store_out(chip_vt_gui_display_k, vt_gui_display_local_outport_transaction_succeseeded_vt, &request);
   __po_hi_send_output(chip_vt_gui_display_k, vt_gui_display_global_outport_transaction_succeseeded_vt);
}

