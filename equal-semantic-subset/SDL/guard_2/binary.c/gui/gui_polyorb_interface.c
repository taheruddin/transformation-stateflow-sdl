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
void sync_gui_out_msg(void *omsg, size_t omsg_len)
{
   extern process_package__taste_protected_object gui_protected;
   __po_hi_protected_lock (gui_protected.protected_id);
   gui_out_msg(omsg, omsg_len);
   __po_hi_protected_unlock (gui_protected.protected_id);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "e"
------------------------------------------------------ */
void vm_async_gui_e(void *imsg, size_t imsg_len)
{
   switch(__po_hi_get_task_id()) {
      case chip_vt_gui_out_msg_k: vm_async_vt_gui_out_msg_e_vt(imsg, imsg_len); break;
      case chip_vt_gui_gui_polling_gui_k: vm_async_vt_gui_gui_polling_gui_e_vt(imsg, imsg_len); break;
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

