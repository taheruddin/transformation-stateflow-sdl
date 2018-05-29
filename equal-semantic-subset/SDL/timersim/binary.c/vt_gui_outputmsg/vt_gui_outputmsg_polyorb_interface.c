#include "po_hi_gqueue.h"
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "vt_gui_outputmsg_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_task.h"
/* ------------------------------------------------------
-- Asynchronous Provided Interface "artificial_outputmsg"
------------------------------------------------------ */
void po_hi_c_vt_gui_outputmsg_artificial_outputmsg(__po_hi_task_id e, dataview__t_boolean_buffer_impl buf)
{
    (void)e;
   sync_gui_outputmsg (buf.buffer, buf.length);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "outputmsg"
------------------------------------------------------ */
void vm_vt_gui_outputmsg_outputmsg(void *outgo, size_t outgo_len)
{
   sync_gui_outputmsg(outgo, outgo_len);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "inputmsg_vt"
------------------------------------------------------ */
void vm_async_vt_gui_outputmsg_inputmsg_vt(void *into, size_t into_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_gui_outputmsg_global_outport_inputmsg_vt.vt_gui_outputmsg_global_outport_inputmsg_vt.buffer), into, into_len);
   request.vars.vt_gui_outputmsg_global_outport_inputmsg_vt.vt_gui_outputmsg_global_outport_inputmsg_vt.length = into_len;
   request.port = vt_gui_outputmsg_global_outport_inputmsg_vt;
   __po_hi_gqueue_store_out(chip_vt_gui_outputmsg_k, vt_gui_outputmsg_local_outport_inputmsg_vt, &request);
   __po_hi_send_output(chip_vt_gui_outputmsg_k, vt_gui_outputmsg_global_outport_inputmsg_vt);
}

