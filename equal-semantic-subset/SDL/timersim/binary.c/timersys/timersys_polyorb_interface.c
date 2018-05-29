#include "po_hi_gqueue.h"
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "timersys_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_protected.h"

#include "po_hi_task.h"
#include "timersys_vm_if.h"

/*----------------------------------------------------
-- Protected Provided Interface "inputmsg"
----------------------------------------------------*/
void sync_timersys_inputmsg(void *into, size_t into_len)
{
   extern process_package__taste_protected_object timersys_protected;
   __po_hi_protected_lock (timersys_protected.protected_id);
   timersys_inputmsg(into, into_len);
   __po_hi_protected_unlock (timersys_protected.protected_id);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "outputmsg"
------------------------------------------------------ */
void vm_async_timersys_outputmsg(void *outgo, size_t outgo_len)
{
   switch(__po_hi_get_task_id()) {
      case chip_vt_timersys_inputmsg_k: vm_async_vt_timersys_inputmsg_outputmsg_vt(outgo, outgo_len); break;
      case chip_vt_timersys_sdltmr_k: vm_async_vt_timersys_sdltmr_outputmsg_vt(outgo, outgo_len); break;
      default: break;
   }
}

/*----------------------------------------------------
-- Protected Provided Interface "sdltmr"
----------------------------------------------------*/
void sync_timersys_sdltmr()
{
   extern process_package__taste_protected_object timersys_protected;
   __po_hi_protected_lock (timersys_protected.protected_id);
   timersys_sdltmr();
   __po_hi_protected_unlock (timersys_protected.protected_id);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "RESET_sdltmr"
------------------------------------------------------ */
void vm_timersys_RESET_sdltmr()
{
   sync_chip_timer_manager_timersys_RESET_sdltmr();
}

/* ------------------------------------------------------
--  Synchronous Required Interface "SET_sdltmr"
------------------------------------------------------ */
void vm_timersys_SET_sdltmr(void *duration, size_t duration_len)
{
   sync_chip_timer_manager_timersys_SET_sdltmr(duration, duration_len);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue"
------------------------------------------------------ */
void vm_timersys_check_queue(void *res, size_t *res_len)
{
   sync_chip_taste_api_timersys_has_pending_msg(res, res_len);
}

