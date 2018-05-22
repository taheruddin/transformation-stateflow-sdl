#include "po_hi_gqueue.h"
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "guard_1_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_protected.h"

#include "po_hi_task.h"
#include "guard_1_vm_if.h"

/*----------------------------------------------------
-- Protected Provided Interface "get_data"
----------------------------------------------------*/
void sync_guard_1_get_data(void *x, size_t x_len)
{
   extern process_package__taste_protected_object guard_1_protected;
   __po_hi_protected_lock (guard_1_protected.protected_id);
   guard_1_get_data(x, x_len);
   __po_hi_protected_unlock (guard_1_protected.protected_id);
}

/*----------------------------------------------------
-- Protected Provided Interface "check"
----------------------------------------------------*/
void sync_guard_1_check(void *whatever, size_t whatever_len)
{
   extern process_package__taste_protected_object guard_1_protected;
   __po_hi_protected_lock (guard_1_protected.protected_id);
   guard_1_check(whatever, whatever_len);
   __po_hi_protected_unlock (guard_1_protected.protected_id);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "out_msg"
------------------------------------------------------ */
void vm_async_guard_1_out_msg(void *msg, size_t msg_len)
{
   switch(__po_hi_get_task_id()) {
      case chip_vt_guard_1_get_data_k: vm_async_vt_guard_1_get_data_out_msg_vt(msg, msg_len); break;
      case chip_vt_guard_1_check_k: vm_async_vt_guard_1_check_out_msg_vt(msg, msg_len); break;
      default: break;
   }
}

/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue"
------------------------------------------------------ */
void vm_guard_1_check_queue(void *res, size_t *res_len)
{
   sync_chip_taste_api_guard_1_has_pending_msg(res, res_len);
}

