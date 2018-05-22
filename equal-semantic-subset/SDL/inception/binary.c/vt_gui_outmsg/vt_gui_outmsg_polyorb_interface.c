#include "po_hi_gqueue.h"
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "vt_gui_outmsg_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_task.h"
/* ------------------------------------------------------
-- Asynchronous Provided Interface "artificial_outmsg"
------------------------------------------------------ */
void po_hi_c_vt_gui_outmsg_artificial_outmsg(__po_hi_task_id e, dataview__mystring_buffer_impl buf)
{
    (void)e;
   sync_gui_outmsg (buf.buffer, buf.length);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "outmsg"
------------------------------------------------------ */
void vm_vt_gui_outmsg_outmsg(void *msg, size_t msg_len)
{
   sync_gui_outmsg(msg, msg_len);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "inmsg_vt"
------------------------------------------------------ */
void vm_async_vt_gui_outmsg_inmsg_vt(void *whatever, size_t whatever_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_gui_outmsg_global_outport_inmsg_vt.vt_gui_outmsg_global_outport_inmsg_vt.buffer), whatever, whatever_len);
   request.vars.vt_gui_outmsg_global_outport_inmsg_vt.vt_gui_outmsg_global_outport_inmsg_vt.length = whatever_len;
   request.port = vt_gui_outmsg_global_outport_inmsg_vt;
   __po_hi_gqueue_store_out(chip_vt_gui_outmsg_k, vt_gui_outmsg_local_outport_inmsg_vt, &request);
   __po_hi_send_output(chip_vt_gui_outmsg_k, vt_gui_outmsg_global_outport_inmsg_vt);
}

