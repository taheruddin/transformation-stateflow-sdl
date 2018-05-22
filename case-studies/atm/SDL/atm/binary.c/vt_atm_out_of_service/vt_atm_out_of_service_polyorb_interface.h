/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef vt_atm_out_of_service_POLYORB_INTERFACE
#define vt_atm_out_of_service_POLYORB_INTERFACE
#include <stddef.h>

#include "types.h"
#include "deployment.h"
#include "po_hi_transport.h"
#include "../../atm/atm_polyorb_interface.h"
#include "../../chip_taste_api/chip_taste_api_polyorb_interface.h"
/*----------------------------------------------------
-- Asynchronous Provided Interface "artificial_out_of_service"
----------------------------------------------------*/
void po_hi_c_vt_atm_out_of_service_artificial_out_of_service(__po_hi_task_id, dataview__mystring_buffer_impl);

/* ------------------------------------------------------
--  Synchronous Required Interface "out_of_service"
------------------------------------------------------ */
void vm_vt_atm_out_of_service_out_of_service(void *w, size_t w_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "out_msg_vt"
------------------------------------------------------ */
void vm_async_vt_atm_out_of_service_out_msg_vt(void *msg, size_t msg_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "transaction_vt"
------------------------------------------------------ */
void vm_async_vt_atm_out_of_service_transaction_vt(void *amount, size_t amount_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "display_vt"
------------------------------------------------------ */
void vm_async_vt_atm_out_of_service_display_vt(void *msg, size_t msg_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "eject_card_vt"
------------------------------------------------------ */
void vm_async_vt_atm_out_of_service_eject_card_vt(void *w, size_t w_len);
/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue_vt"
------------------------------------------------------ */
void vm_vt_atm_out_of_service_check_queue_vt(void *, size_t *);
#endif
