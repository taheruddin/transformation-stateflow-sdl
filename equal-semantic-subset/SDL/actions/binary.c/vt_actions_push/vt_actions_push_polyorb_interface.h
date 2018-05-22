/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef vt_actions_push_POLYORB_INTERFACE
#define vt_actions_push_POLYORB_INTERFACE
#include <stddef.h>

#include "types.h"
#include "deployment.h"
#include "po_hi_transport.h"
#include "../../actions/actions_polyorb_interface.h"
#include "../../chip_taste_api/chip_taste_api_polyorb_interface.h"
/*----------------------------------------------------
-- Asynchronous Provided Interface "artificial_push"
----------------------------------------------------*/
void po_hi_c_vt_actions_push_artificial_push(__po_hi_task_id, dataview__mystring_buffer_impl);

/* ------------------------------------------------------
--  Synchronous Required Interface "push"
------------------------------------------------------ */
void vm_vt_actions_push_push(void *w, size_t w_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "out_msg_vt"
------------------------------------------------------ */
void vm_async_vt_actions_push_out_msg_vt(void *msg, size_t msg_len);
/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue_vt"
------------------------------------------------------ */
void vm_vt_actions_push_check_queue_vt(void *, size_t *);
#endif
