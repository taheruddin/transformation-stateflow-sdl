#include "po_hi_gqueue.h"
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "gui_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_protected.h"

#include "po_hi_task.h"
#include "gui_vm_if.h"

/*----------------------------------------------------
-- Protected Provided Interface "out_msg"
----------------------------------------------------*/
void sync_gui_out_msg(void *msg, size_t msg_len)
{
   extern process_package__taste_protected_object gui_protected;
   __po_hi_protected_lock (gui_protected.protected_id);
   gui_out_msg(msg, msg_len);
   __po_hi_protected_unlock (gui_protected.protected_id);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "switch_on"
------------------------------------------------------ */
void vm_async_gui_switch_on(void *w, size_t w_len)
{
   switch(__po_hi_get_task_id()) {
      case chip_vt_gui_out_msg_k: vm_async_vt_gui_out_msg_switch_on_vt(w, w_len); break;
      case chip_vt_gui_gui_polling_gui_k: vm_async_vt_gui_gui_polling_gui_switch_on_vt(w, w_len); break;
      default: break;
   }
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "switch_off"
------------------------------------------------------ */
void vm_async_gui_switch_off(void *w, size_t w_len)
{
   switch(__po_hi_get_task_id()) {
      case chip_vt_gui_out_msg_k: vm_async_vt_gui_out_msg_switch_off_vt(w, w_len); break;
      case chip_vt_gui_gui_polling_gui_k: vm_async_vt_gui_gui_polling_gui_switch_off_vt(w, w_len); break;
      default: break;
   }
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "restart"
------------------------------------------------------ */
void vm_async_gui_restart(void *w, size_t w_len)
{
   switch(__po_hi_get_task_id()) {
      case chip_vt_gui_out_msg_k: vm_async_vt_gui_out_msg_restart_vt(w, w_len); break;
      case chip_vt_gui_gui_polling_gui_k: vm_async_vt_gui_gui_polling_gui_restart_vt(w, w_len); break;
      default: break;
   }
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "start_recording"
------------------------------------------------------ */
void vm_async_gui_start_recording(void *w, size_t w_len)
{
   switch(__po_hi_get_task_id()) {
      case chip_vt_gui_out_msg_k: vm_async_vt_gui_out_msg_start_recording_vt(w, w_len); break;
      case chip_vt_gui_gui_polling_gui_k: vm_async_vt_gui_gui_polling_gui_start_recording_vt(w, w_len); break;
      default: break;
   }
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "pause"
------------------------------------------------------ */
void vm_async_gui_pause(void *w, size_t w_len)
{
   switch(__po_hi_get_task_id()) {
      case chip_vt_gui_out_msg_k: vm_async_vt_gui_out_msg_pause_vt(w, w_len); break;
      case chip_vt_gui_gui_polling_gui_k: vm_async_vt_gui_gui_polling_gui_pause_vt(w, w_len); break;
      default: break;
   }
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "resume"
------------------------------------------------------ */
void vm_async_gui_resume(void *w, size_t w_len)
{
   switch(__po_hi_get_task_id()) {
      case chip_vt_gui_out_msg_k: vm_async_vt_gui_out_msg_resume_vt(w, w_len); break;
      case chip_vt_gui_gui_polling_gui_k: vm_async_vt_gui_gui_polling_gui_resume_vt(w, w_len); break;
      default: break;
   }
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "fail"
------------------------------------------------------ */
void vm_async_gui_fail(void *w, size_t w_len)
{
   switch(__po_hi_get_task_id()) {
      case chip_vt_gui_out_msg_k: vm_async_vt_gui_out_msg_fail_vt(w, w_len); break;
      case chip_vt_gui_gui_polling_gui_k: vm_async_vt_gui_gui_polling_gui_fail_vt(w, w_len); break;
      default: break;
   }
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "stop_recording"
------------------------------------------------------ */
void vm_async_gui_stop_recording(void *w, size_t w_len)
{
   switch(__po_hi_get_task_id()) {
      case chip_vt_gui_out_msg_k: vm_async_vt_gui_out_msg_stop_recording_vt(w, w_len); break;
      case chip_vt_gui_gui_polling_gui_k: vm_async_vt_gui_gui_polling_gui_stop_recording_vt(w, w_len); break;
      default: break;
   }
}

/*----------------------------------------------------
-- Protected Provided Interface "gui_polling_gui"
----------------------------------------------------*/
void sync_gui_gui_polling_gui()
{
   extern process_package__taste_protected_object gui_protected;
   __po_hi_protected_lock (gui_protected.protected_id);
   gui_gui_polling_gui();
   __po_hi_protected_unlock (gui_protected.protected_id);
}

