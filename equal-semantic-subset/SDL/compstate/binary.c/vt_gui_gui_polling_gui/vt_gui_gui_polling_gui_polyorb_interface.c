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
--  Asynchronous Required Interface "switch_on_vt"
------------------------------------------------------ */
void vm_async_vt_gui_gui_polling_gui_switch_on_vt(void *w, size_t w_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_gui_gui_polling_gui_global_outport_switch_on_vt.vt_gui_gui_polling_gui_global_outport_switch_on_vt.buffer), w, w_len);
   request.vars.vt_gui_gui_polling_gui_global_outport_switch_on_vt.vt_gui_gui_polling_gui_global_outport_switch_on_vt.length = w_len;
   request.port = vt_gui_gui_polling_gui_global_outport_switch_on_vt;
   __po_hi_gqueue_store_out(chip_vt_gui_gui_polling_gui_k, vt_gui_gui_polling_gui_local_outport_switch_on_vt, &request);
   __po_hi_send_output(chip_vt_gui_gui_polling_gui_k, vt_gui_gui_polling_gui_global_outport_switch_on_vt);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "switch_off_vt"
------------------------------------------------------ */
void vm_async_vt_gui_gui_polling_gui_switch_off_vt(void *w, size_t w_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_gui_gui_polling_gui_global_outport_switch_off_vt.vt_gui_gui_polling_gui_global_outport_switch_off_vt.buffer), w, w_len);
   request.vars.vt_gui_gui_polling_gui_global_outport_switch_off_vt.vt_gui_gui_polling_gui_global_outport_switch_off_vt.length = w_len;
   request.port = vt_gui_gui_polling_gui_global_outport_switch_off_vt;
   __po_hi_gqueue_store_out(chip_vt_gui_gui_polling_gui_k, vt_gui_gui_polling_gui_local_outport_switch_off_vt, &request);
   __po_hi_send_output(chip_vt_gui_gui_polling_gui_k, vt_gui_gui_polling_gui_global_outport_switch_off_vt);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "restart_vt"
------------------------------------------------------ */
void vm_async_vt_gui_gui_polling_gui_restart_vt(void *w, size_t w_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_gui_gui_polling_gui_global_outport_restart_vt.vt_gui_gui_polling_gui_global_outport_restart_vt.buffer), w, w_len);
   request.vars.vt_gui_gui_polling_gui_global_outport_restart_vt.vt_gui_gui_polling_gui_global_outport_restart_vt.length = w_len;
   request.port = vt_gui_gui_polling_gui_global_outport_restart_vt;
   __po_hi_gqueue_store_out(chip_vt_gui_gui_polling_gui_k, vt_gui_gui_polling_gui_local_outport_restart_vt, &request);
   __po_hi_send_output(chip_vt_gui_gui_polling_gui_k, vt_gui_gui_polling_gui_global_outport_restart_vt);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "start_recording_vt"
------------------------------------------------------ */
void vm_async_vt_gui_gui_polling_gui_start_recording_vt(void *w, size_t w_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_gui_gui_polling_gui_global_outport_start_recording_vt.vt_gui_gui_polling_gui_global_outport_start_recording_vt.buffer), w, w_len);
   request.vars.vt_gui_gui_polling_gui_global_outport_start_recording_vt.vt_gui_gui_polling_gui_global_outport_start_recording_vt.length = w_len;
   request.port = vt_gui_gui_polling_gui_global_outport_start_recording_vt;
   __po_hi_gqueue_store_out(chip_vt_gui_gui_polling_gui_k, vt_gui_gui_polling_gui_local_outport_start_recording_vt, &request);
   __po_hi_send_output(chip_vt_gui_gui_polling_gui_k, vt_gui_gui_polling_gui_global_outport_start_recording_vt);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "pause_vt"
------------------------------------------------------ */
void vm_async_vt_gui_gui_polling_gui_pause_vt(void *w, size_t w_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_gui_gui_polling_gui_global_outport_pause_vt.vt_gui_gui_polling_gui_global_outport_pause_vt.buffer), w, w_len);
   request.vars.vt_gui_gui_polling_gui_global_outport_pause_vt.vt_gui_gui_polling_gui_global_outport_pause_vt.length = w_len;
   request.port = vt_gui_gui_polling_gui_global_outport_pause_vt;
   __po_hi_gqueue_store_out(chip_vt_gui_gui_polling_gui_k, vt_gui_gui_polling_gui_local_outport_pause_vt, &request);
   __po_hi_send_output(chip_vt_gui_gui_polling_gui_k, vt_gui_gui_polling_gui_global_outport_pause_vt);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "resume_vt"
------------------------------------------------------ */
void vm_async_vt_gui_gui_polling_gui_resume_vt(void *w, size_t w_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_gui_gui_polling_gui_global_outport_resume_vt.vt_gui_gui_polling_gui_global_outport_resume_vt.buffer), w, w_len);
   request.vars.vt_gui_gui_polling_gui_global_outport_resume_vt.vt_gui_gui_polling_gui_global_outport_resume_vt.length = w_len;
   request.port = vt_gui_gui_polling_gui_global_outport_resume_vt;
   __po_hi_gqueue_store_out(chip_vt_gui_gui_polling_gui_k, vt_gui_gui_polling_gui_local_outport_resume_vt, &request);
   __po_hi_send_output(chip_vt_gui_gui_polling_gui_k, vt_gui_gui_polling_gui_global_outport_resume_vt);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "fail_vt"
------------------------------------------------------ */
void vm_async_vt_gui_gui_polling_gui_fail_vt(void *w, size_t w_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_gui_gui_polling_gui_global_outport_fail_vt.vt_gui_gui_polling_gui_global_outport_fail_vt.buffer), w, w_len);
   request.vars.vt_gui_gui_polling_gui_global_outport_fail_vt.vt_gui_gui_polling_gui_global_outport_fail_vt.length = w_len;
   request.port = vt_gui_gui_polling_gui_global_outport_fail_vt;
   __po_hi_gqueue_store_out(chip_vt_gui_gui_polling_gui_k, vt_gui_gui_polling_gui_local_outport_fail_vt, &request);
   __po_hi_send_output(chip_vt_gui_gui_polling_gui_k, vt_gui_gui_polling_gui_global_outport_fail_vt);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "stop_recording_vt"
------------------------------------------------------ */
void vm_async_vt_gui_gui_polling_gui_stop_recording_vt(void *w, size_t w_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_gui_gui_polling_gui_global_outport_stop_recording_vt.vt_gui_gui_polling_gui_global_outport_stop_recording_vt.buffer), w, w_len);
   request.vars.vt_gui_gui_polling_gui_global_outport_stop_recording_vt.vt_gui_gui_polling_gui_global_outport_stop_recording_vt.length = w_len;
   request.port = vt_gui_gui_polling_gui_global_outport_stop_recording_vt;
   __po_hi_gqueue_store_out(chip_vt_gui_gui_polling_gui_k, vt_gui_gui_polling_gui_local_outport_stop_recording_vt, &request);
   __po_hi_send_output(chip_vt_gui_gui_polling_gui_k, vt_gui_gui_polling_gui_global_outport_stop_recording_vt);
}

