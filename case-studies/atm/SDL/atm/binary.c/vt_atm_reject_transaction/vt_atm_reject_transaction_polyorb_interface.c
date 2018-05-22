#include "po_hi_gqueue.h"
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "vt_atm_reject_transaction_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_task.h"
/* ------------------------------------------------------
-- Asynchronous Provided Interface "artificial_reject_transaction"
------------------------------------------------------ */
void po_hi_c_vt_atm_reject_transaction_artificial_reject_transaction(__po_hi_task_id e, dataview__mystring_buffer_impl buf)
{
    (void)e;
   sync_atm_reject_transaction (buf.buffer, buf.length);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "reject_transaction"
------------------------------------------------------ */
void vm_vt_atm_reject_transaction_reject_transaction(void *w, size_t w_len)
{
   sync_atm_reject_transaction(w, w_len);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "out_msg_vt"
------------------------------------------------------ */
void vm_async_vt_atm_reject_transaction_out_msg_vt(void *msg, size_t msg_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_atm_reject_transaction_global_outport_out_msg_vt.vt_atm_reject_transaction_global_outport_out_msg_vt.buffer), msg, msg_len);
   request.vars.vt_atm_reject_transaction_global_outport_out_msg_vt.vt_atm_reject_transaction_global_outport_out_msg_vt.length = msg_len;
   request.port = vt_atm_reject_transaction_global_outport_out_msg_vt;
   __po_hi_gqueue_store_out(chip_vt_atm_reject_transaction_k, vt_atm_reject_transaction_local_outport_out_msg_vt, &request);
   __po_hi_send_output(chip_vt_atm_reject_transaction_k, vt_atm_reject_transaction_global_outport_out_msg_vt);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "transaction_vt"
------------------------------------------------------ */
void vm_async_vt_atm_reject_transaction_transaction_vt(void *amount, size_t amount_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_atm_reject_transaction_global_outport_transaction_vt.vt_atm_reject_transaction_global_outport_transaction_vt.buffer), amount, amount_len);
   request.vars.vt_atm_reject_transaction_global_outport_transaction_vt.vt_atm_reject_transaction_global_outport_transaction_vt.length = amount_len;
   request.port = vt_atm_reject_transaction_global_outport_transaction_vt;
   __po_hi_gqueue_store_out(chip_vt_atm_reject_transaction_k, vt_atm_reject_transaction_local_outport_transaction_vt, &request);
   __po_hi_send_output(chip_vt_atm_reject_transaction_k, vt_atm_reject_transaction_global_outport_transaction_vt);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "display_vt"
------------------------------------------------------ */
void vm_async_vt_atm_reject_transaction_display_vt(void *msg, size_t msg_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_atm_reject_transaction_global_outport_display_vt.vt_atm_reject_transaction_global_outport_display_vt.buffer), msg, msg_len);
   request.vars.vt_atm_reject_transaction_global_outport_display_vt.vt_atm_reject_transaction_global_outport_display_vt.length = msg_len;
   request.port = vt_atm_reject_transaction_global_outport_display_vt;
   __po_hi_gqueue_store_out(chip_vt_atm_reject_transaction_k, vt_atm_reject_transaction_local_outport_display_vt, &request);
   __po_hi_send_output(chip_vt_atm_reject_transaction_k, vt_atm_reject_transaction_global_outport_display_vt);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "eject_card_vt"
------------------------------------------------------ */
void vm_async_vt_atm_reject_transaction_eject_card_vt(void *w, size_t w_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_atm_reject_transaction_global_outport_eject_card_vt.vt_atm_reject_transaction_global_outport_eject_card_vt.buffer), w, w_len);
   request.vars.vt_atm_reject_transaction_global_outport_eject_card_vt.vt_atm_reject_transaction_global_outport_eject_card_vt.length = w_len;
   request.port = vt_atm_reject_transaction_global_outport_eject_card_vt;
   __po_hi_gqueue_store_out(chip_vt_atm_reject_transaction_k, vt_atm_reject_transaction_local_outport_eject_card_vt, &request);
   __po_hi_send_output(chip_vt_atm_reject_transaction_k, vt_atm_reject_transaction_global_outport_eject_card_vt);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue_vt"
------------------------------------------------------ */
void vm_vt_atm_reject_transaction_check_queue_vt(void *res, size_t *res_len)
{
   sync_chip_taste_api_atm_has_pending_msg(res, res_len);
}

