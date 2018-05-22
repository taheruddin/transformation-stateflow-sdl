/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "chip_timer_manager_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_protected.h"

#include "po_hi_task.h"
#include "chip_timer_manager_vm_if.h"

/*----------------------------------------------------
-- Protected Provided Interface "tick_100ms"
----------------------------------------------------*/
void sync_chip_timer_manager_tick_100ms()
{
   extern process_package__taste_protected_object chip_timer_manager_protected;
   __po_hi_protected_lock (chip_timer_manager_protected.protected_id);
   chip_timer_manager_tick_100ms();
   __po_hi_protected_unlock (chip_timer_manager_protected.protected_id);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "coffee_tmr"
------------------------------------------------------ */
void vm_async_chip_timer_manager_coffee_tmr()
{
   vm_async_vt_chip_timer_manager_tick_100ms_coffee_tmr_vt();
}

/*----------------------------------------------------
-- Protected Provided Interface "coffee_RESET_tmr"
----------------------------------------------------*/
void sync_chip_timer_manager_coffee_RESET_tmr()
{
   extern process_package__taste_protected_object chip_timer_manager_protected;
   __po_hi_protected_lock (chip_timer_manager_protected.protected_id);
   chip_timer_manager_coffee_RESET_tmr();
   __po_hi_protected_unlock (chip_timer_manager_protected.protected_id);
}

/*----------------------------------------------------
-- Protected Provided Interface "coffee_SET_tmr"
----------------------------------------------------*/
void sync_chip_timer_manager_coffee_SET_tmr(void *duration, size_t duration_len)
{
   extern process_package__taste_protected_object chip_timer_manager_protected;
   __po_hi_protected_lock (chip_timer_manager_protected.protected_id);
   chip_timer_manager_coffee_SET_tmr(duration, duration_len);
   __po_hi_protected_unlock (chip_timer_manager_protected.protected_id);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "coffee_tmr1"
------------------------------------------------------ */
void vm_async_chip_timer_manager_coffee_tmr1()
{
   vm_async_vt_chip_timer_manager_tick_100ms_coffee_tmr1_vt();
}

/*----------------------------------------------------
-- Protected Provided Interface "coffee_RESET_tmr1"
----------------------------------------------------*/
void sync_chip_timer_manager_coffee_RESET_tmr1()
{
   extern process_package__taste_protected_object chip_timer_manager_protected;
   __po_hi_protected_lock (chip_timer_manager_protected.protected_id);
   chip_timer_manager_coffee_RESET_tmr1();
   __po_hi_protected_unlock (chip_timer_manager_protected.protected_id);
}

/*----------------------------------------------------
-- Protected Provided Interface "coffee_SET_tmr1"
----------------------------------------------------*/
void sync_chip_timer_manager_coffee_SET_tmr1(void *duration, size_t duration_len)
{
   extern process_package__taste_protected_object chip_timer_manager_protected;
   __po_hi_protected_lock (chip_timer_manager_protected.protected_id);
   chip_timer_manager_coffee_SET_tmr1(duration, duration_len);
   __po_hi_protected_unlock (chip_timer_manager_protected.protected_id);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "coffee_tmr2"
------------------------------------------------------ */
void vm_async_chip_timer_manager_coffee_tmr2()
{
   vm_async_vt_chip_timer_manager_tick_100ms_coffee_tmr2_vt();
}

/*----------------------------------------------------
-- Protected Provided Interface "coffee_RESET_tmr2"
----------------------------------------------------*/
void sync_chip_timer_manager_coffee_RESET_tmr2()
{
   extern process_package__taste_protected_object chip_timer_manager_protected;
   __po_hi_protected_lock (chip_timer_manager_protected.protected_id);
   chip_timer_manager_coffee_RESET_tmr2();
   __po_hi_protected_unlock (chip_timer_manager_protected.protected_id);
}

/*----------------------------------------------------
-- Protected Provided Interface "coffee_SET_tmr2"
----------------------------------------------------*/
void sync_chip_timer_manager_coffee_SET_tmr2(void *duration, size_t duration_len)
{
   extern process_package__taste_protected_object chip_timer_manager_protected;
   __po_hi_protected_lock (chip_timer_manager_protected.protected_id);
   chip_timer_manager_coffee_SET_tmr2(duration, duration_len);
   __po_hi_protected_unlock (chip_timer_manager_protected.protected_id);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "coffee_tmr3"
------------------------------------------------------ */
void vm_async_chip_timer_manager_coffee_tmr3()
{
   vm_async_vt_chip_timer_manager_tick_100ms_coffee_tmr3_vt();
}

/*----------------------------------------------------
-- Protected Provided Interface "coffee_RESET_tmr3"
----------------------------------------------------*/
void sync_chip_timer_manager_coffee_RESET_tmr3()
{
   extern process_package__taste_protected_object chip_timer_manager_protected;
   __po_hi_protected_lock (chip_timer_manager_protected.protected_id);
   chip_timer_manager_coffee_RESET_tmr3();
   __po_hi_protected_unlock (chip_timer_manager_protected.protected_id);
}

/*----------------------------------------------------
-- Protected Provided Interface "coffee_SET_tmr3"
----------------------------------------------------*/
void sync_chip_timer_manager_coffee_SET_tmr3(void *duration, size_t duration_len)
{
   extern process_package__taste_protected_object chip_timer_manager_protected;
   __po_hi_protected_lock (chip_timer_manager_protected.protected_id);
   chip_timer_manager_coffee_SET_tmr3(duration, duration_len);
   __po_hi_protected_unlock (chip_timer_manager_protected.protected_id);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue"
------------------------------------------------------ */
void vm_chip_timer_manager_check_queue(void *res, size_t *res_len)
{
   sync_chip_taste_api_chip_timer_manager_has_pending_msg(res, res_len);
}

