#include "po_hi_gqueue.h"
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "functions_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_task.h"
#include "functions_vm_if.h"

/* ------------------------------------------------------
-- Asynchronous Provided Interface "e"
------------------------------------------------------ */
void po_hi_c_functions_e(__po_hi_task_id e, dataview__t_int32_buffer_impl buf)
{
    (void)e;
   functions_e(buf.buffer, buf.length);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "out_msg"
------------------------------------------------------ */
void vm_async_functions_out_msg(void *y, size_t y_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.functions_global_outport_out_msg.functions_global_outport_out_msg.buffer), y, y_len);
   request.vars.functions_global_outport_out_msg.functions_global_outport_out_msg.length = y_len;
   request.port = functions_global_outport_out_msg;
   __po_hi_gqueue_store_out(chip_functions_k, functions_local_outport_out_msg, &request);
   __po_hi_send_output(chip_functions_k, functions_global_outport_out_msg);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue"
------------------------------------------------------ */
void vm_functions_check_queue(void *res, size_t *res_len)
{
   sync_chip_taste_api_functions_has_pending_msg(res, res_len);
}

