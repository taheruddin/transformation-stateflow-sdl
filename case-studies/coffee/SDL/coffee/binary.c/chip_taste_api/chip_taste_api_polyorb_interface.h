/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef chip_taste_api_POLYORB_INTERFACE
#define chip_taste_api_POLYORB_INTERFACE
#include <stddef.h>

#include "deployment.h"
#include "po_hi_transport.h"
#include "../../vt_coffee_get_init_tmpr/vt_coffee_get_init_tmpr_polyorb_interface.h"
#include "../../vt_coffee_get_init_water/vt_coffee_get_init_water_polyorb_interface.h"
#include "../../vt_coffee_for_water/vt_coffee_for_water_polyorb_interface.h"
#include "../../vt_coffee_for_water_tmpr/vt_coffee_for_water_tmpr_polyorb_interface.h"
#include "../../vt_coffee_for_coffee/vt_coffee_for_coffee_polyorb_interface.h"
#include "../../vt_coffee_for_ticking/vt_coffee_for_ticking_polyorb_interface.h"
#include "../../vt_coffee_tmr/vt_coffee_tmr_polyorb_interface.h"
#include "../../vt_coffee_tmr1/vt_coffee_tmr1_polyorb_interface.h"
#include "../../vt_coffee_tmr2/vt_coffee_tmr2_polyorb_interface.h"
#include "../../vt_coffee_tmr3/vt_coffee_tmr3_polyorb_interface.h"
#include "../../vt_chip_timer_manager_tick_100ms/vt_chip_timer_manager_tick_100ms_polyorb_interface.h"
/*----------------------------------------------------
-- Unprotected Provided Interface "coffee_has_pending_msg"
----------------------------------------------------*/
void sync_chip_taste_api_coffee_has_pending_msg(void *, size_t *);

/*----------------------------------------------------
-- Unprotected Provided Interface "chip_timer_manager_has_pending_msg"
----------------------------------------------------*/
void sync_chip_taste_api_chip_timer_manager_has_pending_msg(void *, size_t *);

#endif
