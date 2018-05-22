#include "po_hi_gqueue.h"
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "guard_3_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_task.h"
#include "guard_3_vm_if.h"

/* ------------------------------------------------------
-- Asynchronous Provided Interface "e"
------------------------------------------------------ */
void po_hi_c_guard_3_e(__po_hi_task_id e, dataview__myreal_buffer_impl buf)
{
    (void)e;
   guard_3_e(buf.buffer, buf.length);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "out_msg"
------------------------------------------------------ */
void vm_async_guard_3_out_msg(void *msg, size_t msg_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.guard_3_global_outport_out_msg.guard_3_global_outport_out_msg.buffer), msg, msg_len);
   request.vars.guard_3_global_outport_out_msg.guard_3_global_outport_out_msg.length = msg_len;
   request.port = guard_3_global_outport_out_msg;
   __po_hi_gqueue_store_out(chip_guard_3_k, guard_3_local_outport_out_msg, &request);
   __po_hi_send_output(chip_guard_3_k, guard_3_global_outport_out_msg);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue"
------------------------------------------------------ */
void vm_guard_3_check_queue(void *res, size_t *res_len)
{
   sync_chip_taste_api_guard_3_has_pending_msg(res, res_len);
}

