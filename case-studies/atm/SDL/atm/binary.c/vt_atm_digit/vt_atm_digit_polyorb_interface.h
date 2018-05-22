/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef vt_atm_digit_POLYORB_INTERFACE
#define vt_atm_digit_POLYORB_INTERFACE
#include <stddef.h>

#include "types.h"
#include "deployment.h"
#include "po_hi_transport.h"
#include "../../atm/atm_polyorb_interface.h"
#include "../../chip_taste_api/chip_taste_api_polyorb_interface.h"
/*----------------------------------------------------
-- Asynchronous Provided Interface "artificial_digit"
----------------------------------------------------*/
void po_hi_c_vt_atm_digit_artificial_digit(__po_hi_task_id, dataview__num_buffer_impl);

/* ------------------------------------------------------
--  Synchronous Required Interface "digit"
------------------------------------------------------ */
void vm_vt_atm_digit_digit(void *num, size_t num_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "out_msg_vt"
------------------------------------------------------ */
void vm_async_vt_atm_digit_out_msg_vt(void *msg, size_t msg_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "transaction_vt"
------------------------------------------------------ */
void vm_async_vt_atm_digit_transaction_vt(void *amount, size_t amount_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "display_vt"
------------------------------------------------------ */
void vm_async_vt_atm_digit_display_vt(void *msg, size_t msg_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "eject_card_vt"
------------------------------------------------------ */
void vm_async_vt_atm_digit_eject_card_vt(void *w, size_t w_len);
/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue_vt"
------------------------------------------------------ */
void vm_vt_atm_digit_check_queue_vt(void *, size_t *);
#endif
