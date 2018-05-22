/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef durationsys_POLYORB_INTERFACE
#define durationsys_POLYORB_INTERFACE
#include <stddef.h>

#include "types.h"
#include "deployment.h"
#include "po_hi_transport.h"
#include "../../chip_timer_manager/chip_timer_manager_polyorb_interface.h"
#include "../../chip_timer_manager/chip_timer_manager_polyorb_interface.h"
#include "../../chip_taste_api/chip_taste_api_polyorb_interface.h"
#include "../../vt_durationsys_inputmsg/vt_durationsys_inputmsg_polyorb_interface.h"
#include "../../vt_durationsys_sdltmr/vt_durationsys_sdltmr_polyorb_interface.h"
/*----------------------------------------------------
-- Protected Provided Interface "inputmsg"
----------------------------------------------------*/
void sync_durationsys_inputmsg(void *, size_t);

/* ------------------------------------------------------
--  Asynchronous Required Interface "outputmsg"
------------------------------------------------------ */
void vm_async_durationsys_outputmsg(void *outmsg, size_t outmsg_len);
/*----------------------------------------------------
-- Protected Provided Interface "sdltmr"
----------------------------------------------------*/
void sync_durationsys_sdltmr();

/* ------------------------------------------------------
--  Synchronous Required Interface "RESET_sdltmr"
------------------------------------------------------ */
void vm_durationsys_RESET_sdltmr();
/* ------------------------------------------------------
--  Synchronous Required Interface "SET_sdltmr"
------------------------------------------------------ */
void vm_durationsys_SET_sdltmr(void *duration, size_t duration_len);
/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue"
------------------------------------------------------ */
void vm_durationsys_check_queue(void *, size_t *);
#endif
