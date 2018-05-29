/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef timersys_POLYORB_INTERFACE
#define timersys_POLYORB_INTERFACE
#include <stddef.h>

#include "types.h"
#include "deployment.h"
#include "po_hi_transport.h"
#include "../../chip_timer_manager/chip_timer_manager_polyorb_interface.h"
#include "../../chip_timer_manager/chip_timer_manager_polyorb_interface.h"
#include "../../chip_taste_api/chip_taste_api_polyorb_interface.h"
#include "../../vt_timersys_inputmsg/vt_timersys_inputmsg_polyorb_interface.h"
#include "../../vt_timersys_sdltmr/vt_timersys_sdltmr_polyorb_interface.h"
/*----------------------------------------------------
-- Protected Provided Interface "inputmsg"
----------------------------------------------------*/
void sync_timersys_inputmsg(void *, size_t);

/* ------------------------------------------------------
--  Asynchronous Required Interface "outputmsg"
------------------------------------------------------ */
void vm_async_timersys_outputmsg(void *outgo, size_t outgo_len);
/*----------------------------------------------------
-- Protected Provided Interface "sdltmr"
----------------------------------------------------*/
void sync_timersys_sdltmr();

/* ------------------------------------------------------
--  Synchronous Required Interface "RESET_sdltmr"
------------------------------------------------------ */
void vm_timersys_RESET_sdltmr();
/* ------------------------------------------------------
--  Synchronous Required Interface "SET_sdltmr"
------------------------------------------------------ */
void vm_timersys_SET_sdltmr(void *duration, size_t duration_len);
/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue"
------------------------------------------------------ */
void vm_timersys_check_queue(void *, size_t *);
#endif
