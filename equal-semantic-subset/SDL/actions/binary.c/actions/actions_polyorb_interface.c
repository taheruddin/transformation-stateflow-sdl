#include "po_hi_gqueue.h"
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "actions_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_protected.h"

#include "po_hi_task.h"
#include "actions_vm_if.h"

/*----------------------------------------------------
-- Protected Provided Interface "push"
----------------------------------------------------*/
void sync_actions_push(void *w, size_t w_len)
{
   extern process_package__taste_protected_object actions_protected;
   __po_hi_protected_lock (actions_protected.protected_id);
   actions_push(w, w_len);
   __po_hi_protected_unlock (actions_protected.protected_id);
}

/*----------------------------------------------------
-- Protected Provided Interface "tap"
----------------------------------------------------*/
void sync_actions_tap(void *w, size_t w_len)
{
   extern process_package__taste_protected_object actions_protected;
   __po_hi_protected_lock (actions_protected.protected_id);
   actions_tap(w, w_len);
   __po_hi_protected_unlock (actions_protected.protected_id);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "out_msg"
------------------------------------------------------ */
void vm_async_actions_out_msg(void *msg, size_t msg_len)
{
   switch(__po_hi_get_task_id()) {
      case chip_vt_actions_push_k: vm_async_vt_actions_push_out_msg_vt(msg, msg_len); break;
      case chip_vt_actions_tap_k: vm_async_vt_actions_tap_out_msg_vt(msg, msg_len); break;
      default: break;
   }
}

/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue"
------------------------------------------------------ */
void vm_actions_check_queue(void *res, size_t *res_len)
{
   sync_chip_taste_api_actions_has_pending_msg(res, res_len);
}

