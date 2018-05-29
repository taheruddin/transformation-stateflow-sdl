#include "po_hi_gqueue.h"
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "vt_timersys_inputmsg_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_task.h"
/* ------------------------------------------------------
-- Asynchronous Provided Interface "artificial_inputmsg"
------------------------------------------------------ */
void po_hi_c_vt_timersys_inputmsg_artificial_inputmsg(__po_hi_task_id e, dataview__t_boolean_buffer_impl buf)
{
    (void)e;
   sync_timersys_inputmsg (buf.buffer, buf.length);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "inputmsg"
------------------------------------------------------ */
void vm_vt_timersys_inputmsg_inputmsg(void *into, size_t into_len)
{
   sync_timersys_inputmsg(into, into_len);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "outputmsg_vt"
------------------------------------------------------ */
void vm_async_vt_timersys_inputmsg_outputmsg_vt(void *outgo, size_t outgo_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_timersys_inputmsg_global_outport_outputmsg_vt.vt_timersys_inputmsg_global_outport_outputmsg_vt.buffer), outgo, outgo_len);
   request.vars.vt_timersys_inputmsg_global_outport_outputmsg_vt.vt_timersys_inputmsg_global_outport_outputmsg_vt.length = outgo_len;
   request.port = vt_timersys_inputmsg_global_outport_outputmsg_vt;
   __po_hi_gqueue_store_out(chip_vt_timersys_inputmsg_k, vt_timersys_inputmsg_local_outport_outputmsg_vt, &request);
   __po_hi_send_output(chip_vt_timersys_inputmsg_k, vt_timersys_inputmsg_global_outport_outputmsg_vt);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "RESET_sdltmr_vt"
------------------------------------------------------ */
void vm_vt_timersys_inputmsg_RESET_sdltmr_vt()
{
   sync_chip_timer_manager_timersys_RESET_sdltmr();
}

/* ------------------------------------------------------
--  Synchronous Required Interface "SET_sdltmr_vt"
------------------------------------------------------ */
void vm_vt_timersys_inputmsg_SET_sdltmr_vt(void *duration, size_t duration_len)
{
   sync_chip_timer_manager_timersys_SET_sdltmr(duration, duration_len);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue_vt"
------------------------------------------------------ */
void vm_vt_timersys_inputmsg_check_queue_vt(void *res, size_t *res_len)
{
   sync_chip_taste_api_timersys_has_pending_msg(res, res_len);
}

