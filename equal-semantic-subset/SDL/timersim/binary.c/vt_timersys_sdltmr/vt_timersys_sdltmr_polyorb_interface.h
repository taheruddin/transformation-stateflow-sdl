/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef vt_timersys_sdltmr_POLYORB_INTERFACE
#define vt_timersys_sdltmr_POLYORB_INTERFACE
#include <stddef.h>

#include "types.h"
#include "deployment.h"
#include "po_hi_transport.h"
#include "../../timersys/timersys_polyorb_interface.h"
#include "../../chip_timer_manager/chip_timer_manager_polyorb_interface.h"
#include "../../chip_timer_manager/chip_timer_manager_polyorb_interface.h"
#include "../../chip_taste_api/chip_taste_api_polyorb_interface.h"
/*----------------------------------------------------
-- Asynchronous Provided Interface "artificial_sdltmr"
----------------------------------------------------*/
void po_hi_c_vt_timersys_sdltmr_artificial_sdltmr(__po_hi_task_id);

/* ------------------------------------------------------
--  Synchronous Required Interface "sdltmr"
------------------------------------------------------ */
void vm_vt_timersys_sdltmr_sdltmr();
/* ------------------------------------------------------
--  Asynchronous Required Interface "outputmsg_vt"
------------------------------------------------------ */
void vm_async_vt_timersys_sdltmr_outputmsg_vt(void *outgo, size_t outgo_len);
/* ------------------------------------------------------
--  Synchronous Required Interface "RESET_sdltmr_vt"
------------------------------------------------------ */
void vm_vt_timersys_sdltmr_RESET_sdltmr_vt();
/* ------------------------------------------------------
--  Synchronous Required Interface "SET_sdltmr_vt"
------------------------------------------------------ */
void vm_vt_timersys_sdltmr_SET_sdltmr_vt(void *duration, size_t duration_len);
/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue_vt"
------------------------------------------------------ */
void vm_vt_timersys_sdltmr_check_queue_vt(void *, size_t *);
#endif
