/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef vt_gui_out_msg_POLYORB_INTERFACE
#define vt_gui_out_msg_POLYORB_INTERFACE
#include <stddef.h>

#include "types.h"
#include "deployment.h"
#include "po_hi_transport.h"
#include "../../gui/gui_polyorb_interface.h"
/*----------------------------------------------------
-- Asynchronous Provided Interface "artificial_out_msg"
----------------------------------------------------*/
void po_hi_c_vt_gui_out_msg_artificial_out_msg(__po_hi_task_id, dataview__mystring_buffer_impl);

/* ------------------------------------------------------
--  Synchronous Required Interface "out_msg"
------------------------------------------------------ */
void vm_vt_gui_out_msg_out_msg(void *msg, size_t msg_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "accept_card_vt"
------------------------------------------------------ */
void vm_async_vt_gui_out_msg_accept_card_vt(void *account, size_t account_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "reject_transaction_vt"
------------------------------------------------------ */
void vm_async_vt_gui_out_msg_reject_transaction_vt(void *w, size_t w_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "out_of_service_vt"
------------------------------------------------------ */
void vm_async_vt_gui_out_msg_out_of_service_vt(void *w, size_t w_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "abort_out_vt"
------------------------------------------------------ */
void vm_async_vt_gui_out_msg_abort_out_vt(void *w, size_t w_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "amount_vt"
------------------------------------------------------ */
void vm_async_vt_gui_out_msg_amount_vt(void *amount, size_t amount_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "other_amount_vt"
------------------------------------------------------ */
void vm_async_vt_gui_out_msg_other_amount_vt(void *w, size_t w_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "digit_vt"
------------------------------------------------------ */
void vm_async_vt_gui_out_msg_digit_vt(void *num, size_t num_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "ok_vt"
------------------------------------------------------ */
void vm_async_vt_gui_out_msg_ok_vt(void *w, size_t w_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "transaction_succeseeded_vt"
------------------------------------------------------ */
void vm_async_vt_gui_out_msg_transaction_succeseeded_vt(void *w, size_t w_len);
#endif
