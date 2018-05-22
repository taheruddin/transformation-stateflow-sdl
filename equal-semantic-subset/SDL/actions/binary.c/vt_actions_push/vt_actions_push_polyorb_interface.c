#include "po_hi_gqueue.h"
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "vt_actions_push_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_task.h"
/* ------------------------------------------------------
-- Asynchronous Provided Interface "artificial_push"
------------------------------------------------------ */
void po_hi_c_vt_actions_push_artificial_push(__po_hi_task_id e, dataview__mystring_buffer_impl buf)
{
    (void)e;
   sync_actions_push (buf.buffer, buf.length);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "push"
------------------------------------------------------ */
void vm_vt_actions_push_push(void *w, size_t w_len)
{
   sync_actions_push(w, w_len);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "out_msg_vt"
------------------------------------------------------ */
void vm_async_vt_actions_push_out_msg_vt(void *msg, size_t msg_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_actions_push_global_outport_out_msg_vt.vt_actions_push_global_outport_out_msg_vt.buffer), msg, msg_len);
   request.vars.vt_actions_push_global_outport_out_msg_vt.vt_actions_push_global_outport_out_msg_vt.length = msg_len;
   request.port = vt_actions_push_global_outport_out_msg_vt;
   __po_hi_gqueue_store_out(chip_vt_actions_push_k, vt_actions_push_local_outport_out_msg_vt, &request);
   __po_hi_send_output(chip_vt_actions_push_k, vt_actions_push_global_outport_out_msg_vt);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue_vt"
------------------------------------------------------ */
void vm_vt_actions_push_check_queue_vt(void *res, size_t *res_len)
{
   sync_chip_taste_api_actions_has_pending_msg(res, res_len);
}

