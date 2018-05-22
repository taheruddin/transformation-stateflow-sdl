#include "po_hi_gqueue.h"
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "vt_gui_gui_polling_gui_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_task.h"
/* ------------------------------------------------------
-- Asynchronous Provided Interface "artificial_gui_polling_gui"
------------------------------------------------------ */
void po_hi_c_vt_gui_gui_polling_gui_artificial_gui_polling_gui(__po_hi_task_id e)
{
    (void)e;
   sync_gui_gui_polling_gui ();
}

/* ------------------------------------------------------
--  Synchronous Required Interface "gui_polling_gui"
------------------------------------------------------ */
void vm_vt_gui_gui_polling_gui_gui_polling_gui()
{
   sync_gui_gui_polling_gui();
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "push_vt"
------------------------------------------------------ */
void vm_async_vt_gui_gui_polling_gui_push_vt(void *w, size_t w_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_gui_gui_polling_gui_global_outport_push_vt.vt_gui_gui_polling_gui_global_outport_push_vt.buffer), w, w_len);
   request.vars.vt_gui_gui_polling_gui_global_outport_push_vt.vt_gui_gui_polling_gui_global_outport_push_vt.length = w_len;
   request.port = vt_gui_gui_polling_gui_global_outport_push_vt;
   __po_hi_gqueue_store_out(chip_vt_gui_gui_polling_gui_k, vt_gui_gui_polling_gui_local_outport_push_vt, &request);
   __po_hi_send_output(chip_vt_gui_gui_polling_gui_k, vt_gui_gui_polling_gui_global_outport_push_vt);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "tap_vt"
------------------------------------------------------ */
void vm_async_vt_gui_gui_polling_gui_tap_vt(void *w, size_t w_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_gui_gui_polling_gui_global_outport_tap_vt.vt_gui_gui_polling_gui_global_outport_tap_vt.buffer), w, w_len);
   request.vars.vt_gui_gui_polling_gui_global_outport_tap_vt.vt_gui_gui_polling_gui_global_outport_tap_vt.length = w_len;
   request.port = vt_gui_gui_polling_gui_global_outport_tap_vt;
   __po_hi_gqueue_store_out(chip_vt_gui_gui_polling_gui_k, vt_gui_gui_polling_gui_local_outport_tap_vt, &request);
   __po_hi_send_output(chip_vt_gui_gui_polling_gui_k, vt_gui_gui_polling_gui_global_outport_tap_vt);
}

