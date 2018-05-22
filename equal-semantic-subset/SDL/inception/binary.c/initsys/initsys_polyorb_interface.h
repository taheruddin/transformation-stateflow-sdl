/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef initsys_POLYORB_INTERFACE
#define initsys_POLYORB_INTERFACE
#include <stddef.h>

#include "types.h"
#include "deployment.h"
#include "po_hi_transport.h"
#include "../../chip_taste_api/chip_taste_api_polyorb_interface.h"
/*----------------------------------------------------
-- Asynchronous Provided Interface "inmsg"
----------------------------------------------------*/
void po_hi_c_initsys_inmsg(__po_hi_task_id, dataview__mystring_buffer_impl);

/* ------------------------------------------------------
--  Asynchronous Required Interface "outmsg"
------------------------------------------------------ */
void vm_async_initsys_outmsg(void *msg, size_t msg_len);
/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue"
------------------------------------------------------ */
void vm_initsys_check_queue(void *, size_t *);
#endif
