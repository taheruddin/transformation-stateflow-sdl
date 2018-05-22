#include "po_hi_gqueue.h"
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "durationsys_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_protected.h"

#include "po_hi_task.h"
#include "durationsys_vm_if.h"

/*----------------------------------------------------
-- Protected Provided Interface "inputmsg"
----------------------------------------------------*/
void sync_durationsys_inputmsg(void *inmsg, size_t inmsg_len)
{
   extern process_package__taste_protected_object durationsys_protected;
   __po_hi_protected_lock (durationsys_protected.protected_id);
   durationsys_inputmsg(inmsg, inmsg_len);
   __po_hi_protected_unlock (durationsys_protected.protected_id);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "outputmsg"
------------------------------------------------------ */
void vm_async_durationsys_outputmsg(void *outmsg, size_t outmsg_len)
{
   switch(__po_hi_get_task_id()) {
      case chip_vt_durationsys_inputmsg_k: vm_async_vt_durationsys_inputmsg_outputmsg_vt(outmsg, outmsg_len); break;
      case chip_vt_durationsys_sdltmr_k: vm_async_vt_durationsys_sdltmr_outputmsg_vt(outmsg, outmsg_len); break;
      default: break;
   }
}

/*----------------------------------------------------
-- Protected Provided Interface "sdltmr"
----------------------------------------------------*/
void sync_durationsys_sdltmr()
{
   extern process_package__taste_protected_object durationsys_protected;
   __po_hi_protected_lock (durationsys_protected.protected_id);
   durationsys_sdltmr();
   __po_hi_protected_unlock (durationsys_protected.protected_id);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "RESET_sdltmr"
------------------------------------------------------ */
void vm_durationsys_RESET_sdltmr()
{
   sync_chip_timer_manager_durationsys_RESET_sdltmr();
}

/* ------------------------------------------------------
--  Synchronous Required Interface "SET_sdltmr"
------------------------------------------------------ */
void vm_durationsys_SET_sdltmr(void *duration, size_t duration_len)
{
   sync_chip_timer_manager_durationsys_SET_sdltmr(duration, duration_len);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue"
------------------------------------------------------ */
void vm_durationsys_check_queue(void *res, size_t *res_len)
{
   sync_chip_taste_api_durationsys_has_pending_msg(res, res_len);
}

