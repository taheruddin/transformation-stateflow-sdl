/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef chip_timer_manager_POLYORB_INTERFACE
#define chip_timer_manager_POLYORB_INTERFACE
#include <stddef.h>

#include "deployment.h"
#include "po_hi_transport.h"
#include "../../chip_taste_api/chip_taste_api_polyorb_interface.h"
#include "../../vt_durationsys_inputmsg/vt_durationsys_inputmsg_polyorb_interface.h"
#include "../../vt_durationsys_sdltmr/vt_durationsys_sdltmr_polyorb_interface.h"
#include "../../vt_chip_timer_manager_tick_100ms/vt_chip_timer_manager_tick_100ms_polyorb_interface.h"
/*----------------------------------------------------
-- Protected Provided Interface "tick_100ms"
----------------------------------------------------*/
void sync_chip_timer_manager_tick_100ms();

/* ------------------------------------------------------
--  Asynchronous Required Interface "durationsys_sdltmr"
------------------------------------------------------ */
void vm_async_chip_timer_manager_durationsys_sdltmr();
/*----------------------------------------------------
-- Protected Provided Interface "durationsys_RESET_sdltmr"
----------------------------------------------------*/
void sync_chip_timer_manager_durationsys_RESET_sdltmr();

/*----------------------------------------------------
-- Protected Provided Interface "durationsys_SET_sdltmr"
----------------------------------------------------*/
void sync_chip_timer_manager_durationsys_SET_sdltmr(void *, size_t);

/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue"
------------------------------------------------------ */
void vm_chip_timer_manager_check_queue(void *, size_t *);
#endif
