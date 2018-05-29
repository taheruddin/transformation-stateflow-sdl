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
--  Asynchronous Required Interface "timersys_sdltmr"
------------------------------------------------------ */
void vm_async_chip_timer_manager_timersys_sdltmr()
{
   vm_async_vt_chip_timer_manager_tick_100ms_timersys_sdltmr_vt();
}

/*----------------------------------------------------
-- Protected Provided Interface "timersys_RESET_sdltmr"
----------------------------------------------------*/
void sync_chip_timer_manager_timersys_RESET_sdltmr()
{
   extern process_package__taste_protected_object chip_timer_manager_protected;
   __po_hi_protected_lock (chip_timer_manager_protected.protected_id);
   chip_timer_manager_timersys_RESET_sdltmr();
   __po_hi_protected_unlock (chip_timer_manager_protected.protected_id);
}

/*----------------------------------------------------
-- Protected Provided Interface "timersys_SET_sdltmr"
----------------------------------------------------*/
void sync_chip_timer_manager_timersys_SET_sdltmr(void *duration, size_t duration_len)
{
   extern process_package__taste_protected_object chip_timer_manager_protected;
   __po_hi_protected_lock (chip_timer_manager_protected.protected_id);
   chip_timer_manager_timersys_SET_sdltmr(duration, duration_len);
   __po_hi_protected_unlock (chip_timer_manager_protected.protected_id);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue"
------------------------------------------------------ */
void vm_chip_timer_manager_check_queue(void *res, size_t *res_len)
{
   sync_chip_taste_api_chip_timer_manager_has_pending_msg(res, res_len);
}

