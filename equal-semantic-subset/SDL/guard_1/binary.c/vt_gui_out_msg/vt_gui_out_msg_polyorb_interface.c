#include "po_hi_gqueue.h"
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "vt_gui_out_msg_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_task.h"
/* ------------------------------------------------------
-- Asynchronous Provided Interface "artificial_out_msg"
------------------------------------------------------ */
void po_hi_c_vt_gui_out_msg_artificial_out_msg(__po_hi_task_id e, dataview__mystring_buffer_impl buf)
{
    (void)e;
   sync_gui_out_msg (buf.buffer, buf.length);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "out_msg"
------------------------------------------------------ */
void vm_vt_gui_out_msg_out_msg(void *msg, size_t msg_len)
{
   sync_gui_out_msg(msg, msg_len);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "get_data_vt"
------------------------------------------------------ */
void vm_async_vt_gui_out_msg_get_data_vt(void *x, size_t x_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_gui_out_msg_global_outport_get_data_vt.vt_gui_out_msg_global_outport_get_data_vt.buffer), x, x_len);
   request.vars.vt_gui_out_msg_global_outport_get_data_vt.vt_gui_out_msg_global_outport_get_data_vt.length = x_len;
   request.port = vt_gui_out_msg_global_outport_get_data_vt;
   __po_hi_gqueue_store_out(chip_vt_gui_out_msg_k, vt_gui_out_msg_local_outport_get_data_vt, &request);
   __po_hi_send_output(chip_vt_gui_out_msg_k, vt_gui_out_msg_global_outport_get_data_vt);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "check_vt"
------------------------------------------------------ */
void vm_async_vt_gui_out_msg_check_vt(void *whatever, size_t whatever_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_gui_out_msg_global_outport_check_vt.vt_gui_out_msg_global_outport_check_vt.buffer), whatever, whatever_len);
   request.vars.vt_gui_out_msg_global_outport_check_vt.vt_gui_out_msg_global_outport_check_vt.length = whatever_len;
   request.port = vt_gui_out_msg_global_outport_check_vt;
   __po_hi_gqueue_store_out(chip_vt_gui_out_msg_k, vt_gui_out_msg_local_outport_check_vt, &request);
   __po_hi_send_output(chip_vt_gui_out_msg_k, vt_gui_out_msg_global_outport_check_vt);
}

