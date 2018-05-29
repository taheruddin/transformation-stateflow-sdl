/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef chip_taste_api_POLYORB_INTERFACE
#define chip_taste_api_POLYORB_INTERFACE
#include <stddef.h>

#include "deployment.h"
#include "po_hi_transport.h"
#include "../../vt_timersys_inputmsg/vt_timersys_inputmsg_polyorb_interface.h"
#include "../../vt_timersys_sdltmr/vt_timersys_sdltmr_polyorb_interface.h"
#include "../../vt_chip_timer_manager_tick_100ms/vt_chip_timer_manager_tick_100ms_polyorb_interface.h"
/*----------------------------------------------------
-- Unprotected Provided Interface "timersys_has_pending_msg"
----------------------------------------------------*/
void sync_chip_taste_api_timersys_has_pending_msg(void *, size_t *);

/*----------------------------------------------------
-- Unprotected Provided Interface "chip_timer_manager_has_pending_msg"
----------------------------------------------------*/
void sync_chip_taste_api_chip_timer_manager_has_pending_msg(void *, size_t *);

#endif
