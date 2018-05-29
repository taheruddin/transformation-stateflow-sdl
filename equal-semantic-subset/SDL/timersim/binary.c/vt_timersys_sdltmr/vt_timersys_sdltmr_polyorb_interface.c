#include "po_hi_gqueue.h"
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "vt_timersys_sdltmr_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_task.h"
/* ------------------------------------------------------
-- Asynchronous Provided Interface "artificial_sdltmr"
------------------------------------------------------ */
void po_hi_c_vt_timersys_sdltmr_artificial_sdltmr(__po_hi_task_id e)
{
    (void)e;
   sync_timersys_sdltmr ();
}

/* ------------------------------------------------------
--  Synchronous Required Interface "sdltmr"
------------------------------------------------------ */
void vm_vt_timersys_sdltmr_sdltmr()
{
   sync_timersys_sdltmr();
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "outputmsg_vt"
------------------------------------------------------ */
void vm_async_vt_timersys_sdltmr_outputmsg_vt(void *outgo, size_t outgo_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_timersys_sdltmr_global_outport_outputmsg_vt.vt_timersys_sdltmr_global_outport_outputmsg_vt.buffer), outgo, outgo_len);
   request.vars.vt_timersys_sdltmr_global_outport_outputmsg_vt.vt_timersys_sdltmr_global_outport_outputmsg_vt.length = outgo_len;
   request.port = vt_timersys_sdltmr_global_outport_outputmsg_vt;
   __po_hi_gqueue_store_out(chip_vt_timersys_sdltmr_k, vt_timersys_sdltmr_local_outport_outputmsg_vt, &request);
   __po_hi_send_output(chip_vt_timersys_sdltmr_k, vt_timersys_sdltmr_global_outport_outputmsg_vt);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "RESET_sdltmr_vt"
------------------------------------------------------ */
void vm_vt_timersys_sdltmr_RESET_sdltmr_vt()
{
   sync_chip_timer_manager_timersys_RESET_sdltmr();
}

/* ------------------------------------------------------
--  Synchronous Required Interface "SET_sdltmr_vt"
------------------------------------------------------ */
void vm_vt_timersys_sdltmr_SET_sdltmr_vt(void *duration, size_t duration_len)
{
   sync_chip_timer_manager_timersys_SET_sdltmr(duration, duration_len);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue_vt"
------------------------------------------------------ */
void vm_vt_timersys_sdltmr_check_queue_vt(void *res, size_t *res_len)
{
   sync_chip_taste_api_timersys_has_pending_msg(res, res_len);
}

