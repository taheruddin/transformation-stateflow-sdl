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
--  Asynchronous Required Interface "get_init_tmpr_vt"
------------------------------------------------------ */
void vm_async_vt_gui_gui_polling_gui_get_init_tmpr_vt(void *init_tmpr, size_t init_tmpr_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_gui_gui_polling_gui_global_outport_get_init_tmpr_vt.vt_gui_gui_polling_gui_global_outport_get_init_tmpr_vt.buffer), init_tmpr, init_tmpr_len);
   request.vars.vt_gui_gui_polling_gui_global_outport_get_init_tmpr_vt.vt_gui_gui_polling_gui_global_outport_get_init_tmpr_vt.length = init_tmpr_len;
   request.port = vt_gui_gui_polling_gui_global_outport_get_init_tmpr_vt;
   __po_hi_gqueue_store_out(chip_vt_gui_gui_polling_gui_k, vt_gui_gui_polling_gui_local_outport_get_init_tmpr_vt, &request);
   __po_hi_send_output(chip_vt_gui_gui_polling_gui_k, vt_gui_gui_polling_gui_global_outport_get_init_tmpr_vt);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "get_init_water_vt"
------------------------------------------------------ */
void vm_async_vt_gui_gui_polling_gui_get_init_water_vt(void *init_water, size_t init_water_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_gui_gui_polling_gui_global_outport_get_init_water_vt.vt_gui_gui_polling_gui_global_outport_get_init_water_vt.buffer), init_water, init_water_len);
   request.vars.vt_gui_gui_polling_gui_global_outport_get_init_water_vt.vt_gui_gui_polling_gui_global_outport_get_init_water_vt.length = init_water_len;
   request.port = vt_gui_gui_polling_gui_global_outport_get_init_water_vt;
   __po_hi_gqueue_store_out(chip_vt_gui_gui_polling_gui_k, vt_gui_gui_polling_gui_local_outport_get_init_water_vt, &request);
   __po_hi_send_output(chip_vt_gui_gui_polling_gui_k, vt_gui_gui_polling_gui_global_outport_get_init_water_vt);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "for_water_vt"
------------------------------------------------------ */
void vm_async_vt_gui_gui_polling_gui_for_water_vt(void *w, size_t w_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_gui_gui_polling_gui_global_outport_for_water_vt.vt_gui_gui_polling_gui_global_outport_for_water_vt.buffer), w, w_len);
   request.vars.vt_gui_gui_polling_gui_global_outport_for_water_vt.vt_gui_gui_polling_gui_global_outport_for_water_vt.length = w_len;
   request.port = vt_gui_gui_polling_gui_global_outport_for_water_vt;
   __po_hi_gqueue_store_out(chip_vt_gui_gui_polling_gui_k, vt_gui_gui_polling_gui_local_outport_for_water_vt, &request);
   __po_hi_send_output(chip_vt_gui_gui_polling_gui_k, vt_gui_gui_polling_gui_global_outport_for_water_vt);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "for_water_tmpr_vt"
------------------------------------------------------ */
void vm_async_vt_gui_gui_polling_gui_for_water_tmpr_vt(void *w, size_t w_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_gui_gui_polling_gui_global_outport_for_water_tmpr_vt.vt_gui_gui_polling_gui_global_outport_for_water_tmpr_vt.buffer), w, w_len);
   request.vars.vt_gui_gui_polling_gui_global_outport_for_water_tmpr_vt.vt_gui_gui_polling_gui_global_outport_for_water_tmpr_vt.length = w_len;
   request.port = vt_gui_gui_polling_gui_global_outport_for_water_tmpr_vt;
   __po_hi_gqueue_store_out(chip_vt_gui_gui_polling_gui_k, vt_gui_gui_polling_gui_local_outport_for_water_tmpr_vt, &request);
   __po_hi_send_output(chip_vt_gui_gui_polling_gui_k, vt_gui_gui_polling_gui_global_outport_for_water_tmpr_vt);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "for_coffee_vt"
------------------------------------------------------ */
void vm_async_vt_gui_gui_polling_gui_for_coffee_vt(void *w, size_t w_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_gui_gui_polling_gui_global_outport_for_coffee_vt.vt_gui_gui_polling_gui_global_outport_for_coffee_vt.buffer), w, w_len);
   request.vars.vt_gui_gui_polling_gui_global_outport_for_coffee_vt.vt_gui_gui_polling_gui_global_outport_for_coffee_vt.length = w_len;
   request.port = vt_gui_gui_polling_gui_global_outport_for_coffee_vt;
   __po_hi_gqueue_store_out(chip_vt_gui_gui_polling_gui_k, vt_gui_gui_polling_gui_local_outport_for_coffee_vt, &request);
   __po_hi_send_output(chip_vt_gui_gui_polling_gui_k, vt_gui_gui_polling_gui_global_outport_for_coffee_vt);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "for_ticking_vt"
------------------------------------------------------ */
void vm_async_vt_gui_gui_polling_gui_for_ticking_vt(void *w, size_t w_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_gui_gui_polling_gui_global_outport_for_ticking_vt.vt_gui_gui_polling_gui_global_outport_for_ticking_vt.buffer), w, w_len);
   request.vars.vt_gui_gui_polling_gui_global_outport_for_ticking_vt.vt_gui_gui_polling_gui_global_outport_for_ticking_vt.length = w_len;
   request.port = vt_gui_gui_polling_gui_global_outport_for_ticking_vt;
   __po_hi_gqueue_store_out(chip_vt_gui_gui_polling_gui_k, vt_gui_gui_polling_gui_local_outport_for_ticking_vt, &request);
   __po_hi_send_output(chip_vt_gui_gui_polling_gui_k, vt_gui_gui_polling_gui_global_outport_for_ticking_vt);
}

