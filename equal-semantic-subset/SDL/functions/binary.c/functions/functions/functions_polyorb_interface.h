/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef functions_POLYORB_INTERFACE
#define functions_POLYORB_INTERFACE
#include <stddef.h>

#include "types.h"
#include "deployment.h"
#include "po_hi_transport.h"
#include "../../chip_taste_api/chip_taste_api_polyorb_interface.h"
/*----------------------------------------------------
-- Asynchronous Provided Interface "e"
----------------------------------------------------*/
void po_hi_c_functions_e(__po_hi_task_id, dataview__t_int32_buffer_impl);

/* ------------------------------------------------------
--  Asynchronous Required Interface "out_msg"
------------------------------------------------------ */
void vm_async_functions_out_msg(void *y, size_t y_len);
/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue"
------------------------------------------------------ */
void vm_functions_check_queue(void *, size_t *);
#endif
