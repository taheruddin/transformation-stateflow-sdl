/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef actions_POLYORB_INTERFACE
#define actions_POLYORB_INTERFACE
#include <stddef.h>

#include "types.h"
#include "deployment.h"
#include "po_hi_transport.h"
#include "../../chip_taste_api/chip_taste_api_polyorb_interface.h"
#include "../../vt_actions_push/vt_actions_push_polyorb_interface.h"
#include "../../vt_actions_tap/vt_actions_tap_polyorb_interface.h"
/*----------------------------------------------------
-- Protected Provided Interface "push"
----------------------------------------------------*/
void sync_actions_push(void *, size_t);

/*----------------------------------------------------
-- Protected Provided Interface "tap"
----------------------------------------------------*/
void sync_actions_tap(void *, size_t);

/* ------------------------------------------------------
--  Asynchronous Required Interface "out_msg"
------------------------------------------------------ */
void vm_async_actions_out_msg(void *msg, size_t msg_len);
/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue"
------------------------------------------------------ */
void vm_actions_check_queue(void *, size_t *);
#endif
