/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef guard_2_POLYORB_INTERFACE
#define guard_2_POLYORB_INTERFACE
#include <stddef.h>

#include "types.h"
#include "deployment.h"
#include "po_hi_transport.h"
#include "../../chip_taste_api/chip_taste_api_polyorb_interface.h"
/*----------------------------------------------------
-- Asynchronous Provided Interface "e"
----------------------------------------------------*/
void po_hi_c_guard_2_e(__po_hi_task_id, dataview__mystring_buffer_impl);

/* ------------------------------------------------------
--  Asynchronous Required Interface "out_msg"
------------------------------------------------------ */
void vm_async_guard_2_out_msg(void *omsg, size_t omsg_len);
/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue"
------------------------------------------------------ */
void vm_guard_2_check_queue(void *, size_t *);
#endif
