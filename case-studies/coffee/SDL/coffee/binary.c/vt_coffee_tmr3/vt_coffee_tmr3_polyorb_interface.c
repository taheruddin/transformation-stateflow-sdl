#include "po_hi_gqueue.h"
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "vt_coffee_tmr3_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_task.h"
/* ------------------------------------------------------
-- Asynchronous Provided Interface "artificial_tmr3"
------------------------------------------------------ */
void po_hi_c_vt_coffee_tmr3_artificial_tmr3(__po_hi_task_id e)
{
    (void)e;
   sync_coffee_tmr3 ();
}

/* ------------------------------------------------------
--  Synchronous Required Interface "tmr3"
------------------------------------------------------ */
void vm_vt_coffee_tmr3_tmr3()
{
   sync_coffee_tmr3();
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "out_msg_vt"
------------------------------------------------------ */
void vm_async_vt_coffee_tmr3_out_msg_vt(void *msg, size_t msg_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.vt_coffee_tmr3_global_outport_out_msg_vt.vt_coffee_tmr3_global_outport_out_msg_vt.buffer), msg, msg_len);
   request.vars.vt_coffee_tmr3_global_outport_out_msg_vt.vt_coffee_tmr3_global_outport_out_msg_vt.length = msg_len;
   request.port = vt_coffee_tmr3_global_outport_out_msg_vt;
   __po_hi_gqueue_store_out(chip_vt_coffee_tmr3_k, vt_coffee_tmr3_local_outport_out_msg_vt, &request);
   __po_hi_send_output(chip_vt_coffee_tmr3_k, vt_coffee_tmr3_global_outport_out_msg_vt);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "RESET_tmr_vt"
------------------------------------------------------ */
void vm_vt_coffee_tmr3_RESET_tmr_vt()
{
   sync_chip_timer_manager_coffee_RESET_tmr();
}

/* ------------------------------------------------------
--  Synchronous Required Interface "SET_tmr_vt"
------------------------------------------------------ */
void vm_vt_coffee_tmr3_SET_tmr_vt(void *duration, size_t duration_len)
{
   sync_chip_timer_manager_coffee_SET_tmr(duration, duration_len);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "RESET_tmr1_vt"
------------------------------------------------------ */
void vm_vt_coffee_tmr3_RESET_tmr1_vt()
{
   sync_chip_timer_manager_coffee_RESET_tmr1();
}

/* ------------------------------------------------------
--  Synchronous Required Interface "SET_tmr1_vt"
------------------------------------------------------ */
void vm_vt_coffee_tmr3_SET_tmr1_vt(void *duration, size_t duration_len)
{
   sync_chip_timer_manager_coffee_SET_tmr1(duration, duration_len);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "RESET_tmr2_vt"
------------------------------------------------------ */
void vm_vt_coffee_tmr3_RESET_tmr2_vt()
{
   sync_chip_timer_manager_coffee_RESET_tmr2();
}

/* ------------------------------------------------------
--  Synchronous Required Interface "SET_tmr2_vt"
------------------------------------------------------ */
void vm_vt_coffee_tmr3_SET_tmr2_vt(void *duration, size_t duration_len)
{
   sync_chip_timer_manager_coffee_SET_tmr2(duration, duration_len);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "RESET_tmr3_vt"
------------------------------------------------------ */
void vm_vt_coffee_tmr3_RESET_tmr3_vt()
{
   sync_chip_timer_manager_coffee_RESET_tmr3();
}

/* ------------------------------------------------------
--  Synchronous Required Interface "SET_tmr3_vt"
------------------------------------------------------ */
void vm_vt_coffee_tmr3_SET_tmr3_vt(void *duration, size_t duration_len)
{
   sync_chip_timer_manager_coffee_SET_tmr3(duration, duration_len);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue_vt"
------------------------------------------------------ */
void vm_vt_coffee_tmr3_check_queue_vt(void *res, size_t *res_len)
{
   sync_chip_taste_api_coffee_has_pending_msg(res, res_len);
}

