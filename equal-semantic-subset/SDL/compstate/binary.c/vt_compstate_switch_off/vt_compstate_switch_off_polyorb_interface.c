#include "po_hi_gqueue.h"
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "vt_compstate_switch_off_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_task.h"
/* ------------------------------------------------------
-- Asynchronous Provided Interface "artificial_switch_off"
------------------------------------------------------ */
void po_hi_c_vt_compstate_switch_off_artificial_switch_off(__po_hi_task_id e, dataview__mystring_buffer_impl buf)
{
    (void)e;
   sync_compstate_switch_off (buf.buffer, buf.length);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "switch_off"
------------------------------------------------------ */
void vm_vt_compstate_switch_off_switch_off(void *w, size_t w_len)
{
   sync_compstate_switch_off(w, w_len);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "out_msg_vt"
------------------------------------------------------ */
void vm_async_vt_compstate_switch_off_out_msg_vt(void *msg, size_t msg_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_compstate_switch_off_global_outport_out_msg_vt.vt_compstate_switch_off_global_outport_out_msg_vt.buffer), msg, msg_len);
   request.vars.vt_compstate_switch_off_global_outport_out_msg_vt.vt_compstate_switch_off_global_outport_out_msg_vt.length = msg_len;
   request.port = vt_compstate_switch_off_global_outport_out_msg_vt;
   __po_hi_gqueue_store_out(chip_vt_compstate_switch_off_k, vt_compstate_switch_off_local_outport_out_msg_vt, &request);
   __po_hi_send_output(chip_vt_compstate_switch_off_k, vt_compstate_switch_off_global_outport_out_msg_vt);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue_vt"
------------------------------------------------------ */
void vm_vt_compstate_switch_off_check_queue_vt(void *res, size_t *res_len)
{
   sync_chip_taste_api_compstate_has_pending_msg(res, res_len);
}

