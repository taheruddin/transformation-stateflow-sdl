/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef vt_guard_1_check_POLYORB_INTERFACE
#define vt_guard_1_check_POLYORB_INTERFACE
#include <stddef.h>

#include "types.h"
#include "deployment.h"
#include "po_hi_transport.h"
#include "../../guard_1/guard_1_polyorb_interface.h"
#include "../../chip_taste_api/chip_taste_api_polyorb_interface.h"
/*----------------------------------------------------
-- Asynchronous Provided Interface "artificial_check"
----------------------------------------------------*/
void po_hi_c_vt_guard_1_check_artificial_check(__po_hi_task_id, dataview__mystring_buffer_impl);

/* ------------------------------------------------------
--  Synchronous Required Interface "check"
------------------------------------------------------ */
void vm_vt_guard_1_check_check(void *whatever, size_t whatever_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "out_msg_vt"
------------------------------------------------------ */
void vm_async_vt_guard_1_check_out_msg_vt(void *msg, size_t msg_len);
/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue_vt"
------------------------------------------------------ */
void vm_vt_guard_1_check_check_queue_vt(void *, size_t *);
#endif
