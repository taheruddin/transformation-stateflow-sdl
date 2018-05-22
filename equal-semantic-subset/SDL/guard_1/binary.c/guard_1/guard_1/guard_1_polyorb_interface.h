/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef guard_1_POLYORB_INTERFACE
#define guard_1_POLYORB_INTERFACE
#include <stddef.h>

#include "types.h"
#include "deployment.h"
#include "po_hi_transport.h"
#include "../../chip_taste_api/chip_taste_api_polyorb_interface.h"
#include "../../vt_guard_1_get_data/vt_guard_1_get_data_polyorb_interface.h"
#include "../../vt_guard_1_check/vt_guard_1_check_polyorb_interface.h"
/*----------------------------------------------------
-- Protected Provided Interface "get_data"
----------------------------------------------------*/
void sync_guard_1_get_data(void *, size_t);

/*----------------------------------------------------
-- Protected Provided Interface "check"
----------------------------------------------------*/
void sync_guard_1_check(void *, size_t);

/* ------------------------------------------------------
--  Asynchronous Required Interface "out_msg"
------------------------------------------------------ */
void vm_async_guard_1_out_msg(void *msg, size_t msg_len);
/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue"
------------------------------------------------------ */
void vm_guard_1_check_queue(void *, size_t *);
#endif
