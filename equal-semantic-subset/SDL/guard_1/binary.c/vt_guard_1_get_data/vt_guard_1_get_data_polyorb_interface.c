#include "po_hi_gqueue.h"
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "vt_guard_1_get_data_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_task.h"
/* ------------------------------------------------------
-- Asynchronous Provided Interface "artificial_get_data"
------------------------------------------------------ */
void po_hi_c_vt_guard_1_get_data_artificial_get_data(__po_hi_task_id e, dataview__myreal_buffer_impl buf)
{
    (void)e;
   sync_guard_1_get_data (buf.buffer, buf.length);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "get_data"
------------------------------------------------------ */
void vm_vt_guard_1_get_data_get_data(void *x, size_t x_len)
{
   sync_guard_1_get_data(x, x_len);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "out_msg_vt"
------------------------------------------------------ */
void vm_async_vt_guard_1_get_data_out_msg_vt(void *msg, size_t msg_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_guard_1_get_data_global_outport_out_msg_vt.vt_guard_1_get_data_global_outport_out_msg_vt.buffer), msg, msg_len);
   request.vars.vt_guard_1_get_data_global_outport_out_msg_vt.vt_guard_1_get_data_global_outport_out_msg_vt.length = msg_len;
   request.port = vt_guard_1_get_data_global_outport_out_msg_vt;
   __po_hi_gqueue_store_out(chip_vt_guard_1_get_data_k, vt_guard_1_get_data_local_outport_out_msg_vt, &request);
   __po_hi_send_output(chip_vt_guard_1_get_data_k, vt_guard_1_get_data_global_outport_out_msg_vt);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue_vt"
------------------------------------------------------ */
void vm_vt_guard_1_get_data_check_queue_vt(void *res, size_t *res_len)
{
   sync_chip_taste_api_guard_1_has_pending_msg(res, res_len);
}

