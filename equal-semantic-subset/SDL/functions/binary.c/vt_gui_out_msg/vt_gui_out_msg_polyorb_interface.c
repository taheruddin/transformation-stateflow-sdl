#include "po_hi_gqueue.h"
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "vt_gui_out_msg_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_task.h"
/* ------------------------------------------------------
-- Asynchronous Provided Interface "artificial_out_msg"
------------------------------------------------------ */
void po_hi_c_vt_gui_out_msg_artificial_out_msg(__po_hi_task_id e, dataview__t_int32_buffer_impl buf)
{
    (void)e;
   sync_gui_out_msg (buf.buffer, buf.length);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "out_msg"
------------------------------------------------------ */
void vm_vt_gui_out_msg_out_msg(void *y, size_t y_len)
{
   sync_gui_out_msg(y, y_len);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "e_vt"
------------------------------------------------------ */
void vm_async_vt_gui_out_msg_e_vt(void *x, size_t x_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_gui_out_msg_global_outport_e_vt.vt_gui_out_msg_global_outport_e_vt.buffer), x, x_len);
   request.vars.vt_gui_out_msg_global_outport_e_vt.vt_gui_out_msg_global_outport_e_vt.length = x_len;
   request.port = vt_gui_out_msg_global_outport_e_vt;
   __po_hi_gqueue_store_out(chip_vt_gui_out_msg_k, vt_gui_out_msg_local_outport_e_vt, &request);
   __po_hi_send_output(chip_vt_gui_out_msg_k, vt_gui_out_msg_global_outport_e_vt);
}

