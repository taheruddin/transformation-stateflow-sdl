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
--  Asynchronous Required Interface "inmsg_vt"
------------------------------------------------------ */
void vm_async_vt_gui_gui_polling_gui_inmsg_vt(void *whatever, size_t whatever_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_gui_gui_polling_gui_global_outport_inmsg_vt.vt_gui_gui_polling_gui_global_outport_inmsg_vt.buffer), whatever, whatever_len);
   request.vars.vt_gui_gui_polling_gui_global_outport_inmsg_vt.vt_gui_gui_polling_gui_global_outport_inmsg_vt.length = whatever_len;
   request.port = vt_gui_gui_polling_gui_global_outport_inmsg_vt;
   __po_hi_gqueue_store_out(chip_vt_gui_gui_polling_gui_k, vt_gui_gui_polling_gui_local_outport_inmsg_vt, &request);
   __po_hi_send_output(chip_vt_gui_gui_polling_gui_k, vt_gui_gui_polling_gui_global_outport_inmsg_vt);
}

