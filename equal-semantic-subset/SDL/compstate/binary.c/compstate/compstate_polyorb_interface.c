#include "po_hi_gqueue.h"
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "compstate_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_protected.h"

#include "po_hi_task.h"
#include "compstate_vm_if.h"

/*----------------------------------------------------
-- Protected Provided Interface "switch_on"
----------------------------------------------------*/
void sync_compstate_switch_on(void *w, size_t w_len)
{
   extern process_package__taste_protected_object compstate_protected;
   __po_hi_protected_lock (compstate_protected.protected_id);
   compstate_switch_on(w, w_len);
   __po_hi_protected_unlock (compstate_protected.protected_id);
}

/*----------------------------------------------------
-- Protected Provided Interface "switch_off"
----------------------------------------------------*/
void sync_compstate_switch_off(void *w, size_t w_len)
{
   extern process_package__taste_protected_object compstate_protected;
   __po_hi_protected_lock (compstate_protected.protected_id);
   compstate_switch_off(w, w_len);
   __po_hi_protected_unlock (compstate_protected.protected_id);
}

/*----------------------------------------------------
-- Protected Provided Interface "restart"
----------------------------------------------------*/
void sync_compstate_restart(void *w, size_t w_len)
{
   extern process_package__taste_protected_object compstate_protected;
   __po_hi_protected_lock (compstate_protected.protected_id);
   compstate_restart(w, w_len);
   __po_hi_protected_unlock (compstate_protected.protected_id);
}

/*----------------------------------------------------
-- Protected Provided Interface "start_recording"
----------------------------------------------------*/
void sync_compstate_start_recording(void *w, size_t w_len)
{
   extern process_package__taste_protected_object compstate_protected;
   __po_hi_protected_lock (compstate_protected.protected_id);
   compstate_start_recording(w, w_len);
   __po_hi_protected_unlock (compstate_protected.protected_id);
}

/*----------------------------------------------------
-- Protected Provided Interface "pause"
----------------------------------------------------*/
void sync_compstate_pause(void *w, size_t w_len)
{
   extern process_package__taste_protected_object compstate_protected;
   __po_hi_protected_lock (compstate_protected.protected_id);
   compstate_pause(w, w_len);
   __po_hi_protected_unlock (compstate_protected.protected_id);
}

/*----------------------------------------------------
-- Protected Provided Interface "resume"
----------------------------------------------------*/
void sync_compstate_resume(void *w, size_t w_len)
{
   extern process_package__taste_protected_object compstate_protected;
   __po_hi_protected_lock (compstate_protected.protected_id);
   compstate_resume(w, w_len);
   __po_hi_protected_unlock (compstate_protected.protected_id);
}

/*----------------------------------------------------
-- Protected Provided Interface "stop_recording"
----------------------------------------------------*/
void sync_compstate_stop_recording(void *w, size_t w_len)
{
   extern process_package__taste_protected_object compstate_protected;
   __po_hi_protected_lock (compstate_protected.protected_id);
   compstate_stop_recording(w, w_len);
   __po_hi_protected_unlock (compstate_protected.protected_id);
}

/*----------------------------------------------------
-- Protected Provided Interface "fail"
----------------------------------------------------*/
void sync_compstate_fail(void *w, size_t w_len)
{
   extern process_package__taste_protected_object compstate_protected;
   __po_hi_protected_lock (compstate_protected.protected_id);
   compstate_fail(w, w_len);
   __po_hi_protected_unlock (compstate_protected.protected_id);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "out_msg"
------------------------------------------------------ */
void vm_async_compstate_out_msg(void *msg, size_t msg_len)
{
   switch(__po_hi_get_task_id()) {
      case chip_vt_compstate_switch_on_k: vm_async_vt_compstate_switch_on_out_msg_vt(msg, msg_len); break;
      case chip_vt_compstate_switch_off_k: vm_async_vt_compstate_switch_off_out_msg_vt(msg, msg_len); break;
      case chip_vt_compstate_restart_k: vm_async_vt_compstate_restart_out_msg_vt(msg, msg_len); break;
      case chip_vt_compstate_start_recording_k: vm_async_vt_compstate_start_recording_out_msg_vt(msg, msg_len); break;
      case chip_vt_compstate_pause_k: vm_async_vt_compstate_pause_out_msg_vt(msg, msg_len); break;
      case chip_vt_compstate_resume_k: vm_async_vt_compstate_resume_out_msg_vt(msg, msg_len); break;
      case chip_vt_compstate_stop_recording_k: vm_async_vt_compstate_stop_recording_out_msg_vt(msg, msg_len); break;
      case chip_vt_compstate_fail_k: vm_async_vt_compstate_fail_out_msg_vt(msg, msg_len); break;
      default: break;
   }
}

/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue"
------------------------------------------------------ */
void vm_compstate_check_queue(void *res, size_t *res_len)
{
   sync_chip_taste_api_compstate_has_pending_msg(res, res_len);
}

