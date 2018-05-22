/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef vt_guard_1_get_data_POLYORB_INTERFACE
#define vt_guard_1_get_data_POLYORB_INTERFACE
#include <stddef.h>

#include "types.h"
#include "deployment.h"
#include "po_hi_transport.h"
#include "../../guard_1/guard_1_polyorb_interface.h"
#include "../../chip_taste_api/chip_taste_api_polyorb_interface.h"
/*----------------------------------------------------
-- Asynchronous Provided Interface "artificial_get_data"
----------------------------------------------------*/
void po_hi_c_vt_guard_1_get_data_artificial_get_data(__po_hi_task_id, dataview__myreal_buffer_impl);

/* ------------------------------------------------------
--  Synchronous Required Interface "get_data"
------------------------------------------------------ */
void vm_vt_guard_1_get_data_get_data(void *x, size_t x_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "out_msg_vt"
------------------------------------------------------ */
void vm_async_vt_guard_1_get_data_out_msg_vt(void *msg, size_t msg_len);
/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue_vt"
------------------------------------------------------ */
void vm_vt_guard_1_get_data_check_queue_vt(void *, size_t *);
#endif
