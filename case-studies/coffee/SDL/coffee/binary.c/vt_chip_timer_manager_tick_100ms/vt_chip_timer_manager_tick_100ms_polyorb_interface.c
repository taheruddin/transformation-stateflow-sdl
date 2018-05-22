/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "vt_chip_timer_manager_tick_100ms_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_task.h"
/* ------------------------------------------------------
-- Asynchronous Provided Interface "artificial_tick_100ms"
------------------------------------------------------ */
void po_hi_c_vt_chip_timer_manager_tick_100ms_artificial_tick_100ms(__po_hi_task_id e)
{
    (void)e;
   sync_chip_timer_manager_tick_100ms ();
}

/* ------------------------------------------------------
--  Synchronous Required Interface "tick_100ms"
------------------------------------------------------ */
void vm_vt_chip_timer_manager_tick_100ms_tick_100ms()
{
   sync_chip_timer_manager_tick_100ms();
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "coffee_tmr_vt"
------------------------------------------------------ */
void vm_async_vt_chip_timer_manager_tick_100ms_coffee_tmr_vt()
{
   __po_hi_request_t request;

   request.port = vt_chip_timer_manager_tick_100ms_global_outport_coffee_tmr_vt;
   __po_hi_gqueue_store_out(chip_vt_chip_timer_manager_tick_100ms_k, vt_chip_timer_manager_tick_100ms_local_outport_coffee_tmr_vt, &request);
   __po_hi_send_output(chip_vt_chip_timer_manager_tick_100ms_k, vt_chip_timer_manager_tick_100ms_global_outport_coffee_tmr_vt);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "coffee_tmr1_vt"
------------------------------------------------------ */
void vm_async_vt_chip_timer_manager_tick_100ms_coffee_tmr1_vt()
{
   __po_hi_request_t request;

   request.port = vt_chip_timer_manager_tick_100ms_global_outport_coffee_tmr1_vt;
   __po_hi_gqueue_store_out(chip_vt_chip_timer_manager_tick_100ms_k, vt_chip_timer_manager_tick_100ms_local_outport_coffee_tmr1_vt, &request);
   __po_hi_send_output(chip_vt_chip_timer_manager_tick_100ms_k, vt_chip_timer_manager_tick_100ms_global_outport_coffee_tmr1_vt);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "coffee_tmr2_vt"
------------------------------------------------------ */
void vm_async_vt_chip_timer_manager_tick_100ms_coffee_tmr2_vt()
{
   __po_hi_request_t request;

   request.port = vt_chip_timer_manager_tick_100ms_global_outport_coffee_tmr2_vt;
   __po_hi_gqueue_store_out(chip_vt_chip_timer_manager_tick_100ms_k, vt_chip_timer_manager_tick_100ms_local_outport_coffee_tmr2_vt, &request);
   __po_hi_send_output(chip_vt_chip_timer_manager_tick_100ms_k, vt_chip_timer_manager_tick_100ms_global_outport_coffee_tmr2_vt);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "coffee_tmr3_vt"
------------------------------------------------------ */
void vm_async_vt_chip_timer_manager_tick_100ms_coffee_tmr3_vt()
{
   __po_hi_request_t request;

   request.port = vt_chip_timer_manager_tick_100ms_global_outport_coffee_tmr3_vt;
   __po_hi_gqueue_store_out(chip_vt_chip_timer_manager_tick_100ms_k, vt_chip_timer_manager_tick_100ms_local_outport_coffee_tmr3_vt, &request);
   __po_hi_send_output(chip_vt_chip_timer_manager_tick_100ms_k, vt_chip_timer_manager_tick_100ms_global_outport_coffee_tmr3_vt);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue_vt"
------------------------------------------------------ */
void vm_vt_chip_timer_manager_tick_100ms_check_queue_vt(void *res, size_t *res_len)
{
   sync_chip_taste_api_chip_timer_manager_has_pending_msg(res, res_len);
}

