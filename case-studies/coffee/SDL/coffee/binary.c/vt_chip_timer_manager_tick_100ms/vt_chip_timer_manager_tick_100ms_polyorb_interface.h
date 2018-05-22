/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef vt_chip_timer_manager_tick_100ms_POLYORB_INTERFACE
#define vt_chip_timer_manager_tick_100ms_POLYORB_INTERFACE
#include <stddef.h>

#include "deployment.h"
#include "po_hi_transport.h"
#include "../../chip_timer_manager/chip_timer_manager_polyorb_interface.h"
#include "../../chip_taste_api/chip_taste_api_polyorb_interface.h"
/*----------------------------------------------------
-- Asynchronous Provided Interface "artificial_tick_100ms"
----------------------------------------------------*/
void po_hi_c_vt_chip_timer_manager_tick_100ms_artificial_tick_100ms(__po_hi_task_id);

/* ------------------------------------------------------
--  Synchronous Required Interface "tick_100ms"
------------------------------------------------------ */
void vm_vt_chip_timer_manager_tick_100ms_tick_100ms();
/* ------------------------------------------------------
--  Asynchronous Required Interface "coffee_tmr_vt"
------------------------------------------------------ */
void vm_async_vt_chip_timer_manager_tick_100ms_coffee_tmr_vt();
/* ------------------------------------------------------
--  Asynchronous Required Interface "coffee_tmr1_vt"
------------------------------------------------------ */
void vm_async_vt_chip_timer_manager_tick_100ms_coffee_tmr1_vt();
/* ------------------------------------------------------
--  Asynchronous Required Interface "coffee_tmr2_vt"
------------------------------------------------------ */
void vm_async_vt_chip_timer_manager_tick_100ms_coffee_tmr2_vt();
/* ------------------------------------------------------
--  Asynchronous Required Interface "coffee_tmr3_vt"
------------------------------------------------------ */
void vm_async_vt_chip_timer_manager_tick_100ms_coffee_tmr3_vt();
/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue_vt"
------------------------------------------------------ */
void vm_vt_chip_timer_manager_tick_100ms_check_queue_vt(void *, size_t *);
#endif
