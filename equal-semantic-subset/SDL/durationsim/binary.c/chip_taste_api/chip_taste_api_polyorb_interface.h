/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef chip_taste_api_POLYORB_INTERFACE
#define chip_taste_api_POLYORB_INTERFACE
#include <stddef.h>

#include "deployment.h"
#include "po_hi_transport.h"
#include "../../vt_durationsys_inputmsg/vt_durationsys_inputmsg_polyorb_interface.h"
#include "../../vt_durationsys_sdltmr/vt_durationsys_sdltmr_polyorb_interface.h"
#include "../../vt_chip_timer_manager_tick_100ms/vt_chip_timer_manager_tick_100ms_polyorb_interface.h"
/*----------------------------------------------------
-- Unprotected Provided Interface "durationsys_has_pending_msg"
----------------------------------------------------*/
void sync_chip_taste_api_durationsys_has_pending_msg(void *, size_t *);

/*----------------------------------------------------
-- Unprotected Provided Interface "chip_timer_manager_has_pending_msg"
----------------------------------------------------*/
void sync_chip_taste_api_chip_timer_manager_has_pending_msg(void *, size_t *);

#endif
