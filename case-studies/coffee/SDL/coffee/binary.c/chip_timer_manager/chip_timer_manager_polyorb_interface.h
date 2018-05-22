/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef chip_timer_manager_POLYORB_INTERFACE
#define chip_timer_manager_POLYORB_INTERFACE
#include <stddef.h>

#include "deployment.h"
#include "po_hi_transport.h"
#include "../../chip_taste_api/chip_taste_api_polyorb_interface.h"
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
-- Protected Provided Interface "tick_100ms"
----------------------------------------------------*/
void sync_chip_timer_manager_tick_100ms();

/* ------------------------------------------------------
--  Asynchronous Required Interface "coffee_tmr"
------------------------------------------------------ */
void vm_async_chip_timer_manager_coffee_tmr();
/*----------------------------------------------------
-- Protected Provided Interface "coffee_RESET_tmr"
----------------------------------------------------*/
void sync_chip_timer_manager_coffee_RESET_tmr();

/*----------------------------------------------------
-- Protected Provided Interface "coffee_SET_tmr"
----------------------------------------------------*/
void sync_chip_timer_manager_coffee_SET_tmr(void *, size_t);

/* ------------------------------------------------------
--  Asynchronous Required Interface "coffee_tmr1"
------------------------------------------------------ */
void vm_async_chip_timer_manager_coffee_tmr1();
/*----------------------------------------------------
-- Protected Provided Interface "coffee_RESET_tmr1"
----------------------------------------------------*/
void sync_chip_timer_manager_coffee_RESET_tmr1();

/*----------------------------------------------------
-- Protected Provided Interface "coffee_SET_tmr1"
----------------------------------------------------*/
void sync_chip_timer_manager_coffee_SET_tmr1(void *, size_t);

/* ------------------------------------------------------
--  Asynchronous Required Interface "coffee_tmr2"
------------------------------------------------------ */
void vm_async_chip_timer_manager_coffee_tmr2();
/*----------------------------------------------------
-- Protected Provided Interface "coffee_RESET_tmr2"
----------------------------------------------------*/
void sync_chip_timer_manager_coffee_RESET_tmr2();

/*----------------------------------------------------
-- Protected Provided Interface "coffee_SET_tmr2"
----------------------------------------------------*/
void sync_chip_timer_manager_coffee_SET_tmr2(void *, size_t);

/* ------------------------------------------------------
--  Asynchronous Required Interface "coffee_tmr3"
------------------------------------------------------ */
void vm_async_chip_timer_manager_coffee_tmr3();
/*----------------------------------------------------
-- Protected Provided Interface "coffee_RESET_tmr3"
----------------------------------------------------*/
void sync_chip_timer_manager_coffee_RESET_tmr3();

/*----------------------------------------------------
-- Protected Provided Interface "coffee_SET_tmr3"
----------------------------------------------------*/
void sync_chip_timer_manager_coffee_SET_tmr3(void *, size_t);

/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue"
------------------------------------------------------ */
void vm_chip_timer_manager_check_queue(void *, size_t *);
#endif
