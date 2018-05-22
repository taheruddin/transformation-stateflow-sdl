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
--  Asynchronous Required Interface "get_init_tmpr_vt"
------------------------------------------------------ */
void vm_async_vt_gui_out_msg_get_init_tmpr_vt(void *init_tmpr, size_t init_tmpr_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_gui_out_msg_global_outport_get_init_tmpr_vt.vt_gui_out_msg_global_outport_get_init_tmpr_vt.buffer), init_tmpr, init_tmpr_len);
   request.vars.vt_gui_out_msg_global_outport_get_init_tmpr_vt.vt_gui_out_msg_global_outport_get_init_tmpr_vt.length = init_tmpr_len;
   request.port = vt_gui_out_msg_global_outport_get_init_tmpr_vt;
   __po_hi_gqueue_store_out(chip_vt_gui_out_msg_k, vt_gui_out_msg_local_outport_get_init_tmpr_vt, &request);
   __po_hi_send_output(chip_vt_gui_out_msg_k, vt_gui_out_msg_global_outport_get_init_tmpr_vt);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "get_init_water_vt"
------------------------------------------------------ */
void vm_async_vt_gui_out_msg_get_init_water_vt(void *init_water, size_t init_water_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_gui_out_msg_global_outport_get_init_water_vt.vt_gui_out_msg_global_outport_get_init_water_vt.buffer), init_water, init_water_len);
   request.vars.vt_gui_out_msg_global_outport_get_init_water_vt.vt_gui_out_msg_global_outport_get_init_water_vt.length = init_water_len;
   request.port = vt_gui_out_msg_global_outport_get_init_water_vt;
   __po_hi_gqueue_store_out(chip_vt_gui_out_msg_k, vt_gui_out_msg_local_outport_get_init_water_vt, &request);
   __po_hi_send_output(chip_vt_gui_out_msg_k, vt_gui_out_msg_global_outport_get_init_water_vt);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "for_water_vt"
------------------------------------------------------ */
void vm_async_vt_gui_out_msg_for_water_vt(void *w, size_t w_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_gui_out_msg_global_outport_for_water_vt.vt_gui_out_msg_global_outport_for_water_vt.buffer), w, w_len);
   request.vars.vt_gui_out_msg_global_outport_for_water_vt.vt_gui_out_msg_global_outport_for_water_vt.length = w_len;
   request.port = vt_gui_out_msg_global_outport_for_water_vt;
   __po_hi_gqueue_store_out(chip_vt_gui_out_msg_k, vt_gui_out_msg_local_outport_for_water_vt, &request);
   __po_hi_send_output(chip_vt_gui_out_msg_k, vt_gui_out_msg_global_outport_for_water_vt);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "for_water_tmpr_vt"
------------------------------------------------------ */
void vm_async_vt_gui_out_msg_for_water_tmpr_vt(void *w, size_t w_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_gui_out_msg_global_outport_for_water_tmpr_vt.vt_gui_out_msg_global_outport_for_water_tmpr_vt.buffer), w, w_len);
   request.vars.vt_gui_out_msg_global_outport_for_water_tmpr_vt.vt_gui_out_msg_global_outport_for_water_tmpr_vt.length = w_len;
   request.port = vt_gui_out_msg_global_outport_for_water_tmpr_vt;
   __po_hi_gqueue_store_out(chip_vt_gui_out_msg_k, vt_gui_out_msg_local_outport_for_water_tmpr_vt, &request);
   __po_hi_send_output(chip_vt_gui_out_msg_k, vt_gui_out_msg_global_outport_for_water_tmpr_vt);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "for_coffee_vt"
------------------------------------------------------ */
void vm_async_vt_gui_out_msg_for_coffee_vt(void *w, size_t w_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_gui_out_msg_global_outport_for_coffee_vt.vt_gui_out_msg_global_outport_for_coffee_vt.buffer), w, w_len);
   request.vars.vt_gui_out_msg_global_outport_for_coffee_vt.vt_gui_out_msg_global_outport_for_coffee_vt.length = w_len;
   request.port = vt_gui_out_msg_global_outport_for_coffee_vt;
   __po_hi_gqueue_store_out(chip_vt_gui_out_msg_k, vt_gui_out_msg_local_outport_for_coffee_vt, &request);
   __po_hi_send_output(chip_vt_gui_out_msg_k, vt_gui_out_msg_global_outport_for_coffee_vt);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "for_ticking_vt"
------------------------------------------------------ */
void vm_async_vt_gui_out_msg_for_ticking_vt(void *w, size_t w_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_gui_out_msg_global_outport_for_ticking_vt.vt_gui_out_msg_global_outport_for_ticking_vt.buffer), w, w_len);
   request.vars.vt_gui_out_msg_global_outport_for_ticking_vt.vt_gui_out_msg_global_outport_for_ticking_vt.length = w_len;
   request.port = vt_gui_out_msg_global_outport_for_ticking_vt;
   __po_hi_gqueue_store_out(chip_vt_gui_out_msg_k, vt_gui_out_msg_local_outport_for_ticking_vt, &request);
   __po_hi_send_output(chip_vt_gui_out_msg_k, vt_gui_out_msg_global_outport_for_ticking_vt);
}

