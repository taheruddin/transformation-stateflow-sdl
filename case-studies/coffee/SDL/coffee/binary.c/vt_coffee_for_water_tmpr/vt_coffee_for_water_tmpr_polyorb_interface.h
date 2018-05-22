/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef vt_coffee_for_water_tmpr_POLYORB_INTERFACE
#define vt_coffee_for_water_tmpr_POLYORB_INTERFACE
#include <stddef.h>

#include "types.h"
#include "deployment.h"
#include "po_hi_transport.h"
#include "../../coffee/coffee_polyorb_interface.h"
#include "../../chip_timer_manager/chip_timer_manager_polyorb_interface.h"
#include "../../chip_timer_manager/chip_timer_manager_polyorb_interface.h"
#include "../../chip_timer_manager/chip_timer_manager_polyorb_interface.h"
#include "../../chip_timer_manager/chip_timer_manager_polyorb_interface.h"
#include "../../chip_timer_manager/chip_timer_manager_polyorb_interface.h"
#include "../../chip_timer_manager/chip_timer_manager_polyorb_interface.h"
#include "../../chip_timer_manager/chip_timer_manager_polyorb_interface.h"
#include "../../chip_timer_manager/chip_timer_manager_polyorb_interface.h"
#include "../../chip_taste_api/chip_taste_api_polyorb_interface.h"
/*----------------------------------------------------
-- Asynchronous Provided Interface "artificial_for_water_tmpr"
----------------------------------------------------*/
void po_hi_c_vt_coffee_for_water_tmpr_artificial_for_water_tmpr(__po_hi_task_id, dataview__mystring_buffer_impl);

/* ------------------------------------------------------
--  Synchronous Required Interface "for_water_tmpr"
------------------------------------------------------ */
void vm_vt_coffee_for_water_tmpr_for_water_tmpr(void *w, size_t w_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "out_msg_vt"
------------------------------------------------------ */
void vm_async_vt_coffee_for_water_tmpr_out_msg_vt(void *msg, size_t msg_len);
/* ------------------------------------------------------
--  Synchronous Required Interface "RESET_tmr_vt"
------------------------------------------------------ */
void vm_vt_coffee_for_water_tmpr_RESET_tmr_vt();
/* ------------------------------------------------------
--  Synchronous Required Interface "SET_tmr_vt"
------------------------------------------------------ */
void vm_vt_coffee_for_water_tmpr_SET_tmr_vt(void *duration, size_t duration_len);
/* ------------------------------------------------------
--  Synchronous Required Interface "RESET_tmr1_vt"
------------------------------------------------------ */
void vm_vt_coffee_for_water_tmpr_RESET_tmr1_vt();
/* ------------------------------------------------------
--  Synchronous Required Interface "SET_tmr1_vt"
------------------------------------------------------ */
void vm_vt_coffee_for_water_tmpr_SET_tmr1_vt(void *duration, size_t duration_len);
/* ------------------------------------------------------
--  Synchronous Required Interface "RESET_tmr2_vt"
------------------------------------------------------ */
void vm_vt_coffee_for_water_tmpr_RESET_tmr2_vt();
/* ------------------------------------------------------
--  Synchronous Required Interface "SET_tmr2_vt"
------------------------------------------------------ */
void vm_vt_coffee_for_water_tmpr_SET_tmr2_vt(void *duration, size_t duration_len);
/* ------------------------------------------------------
--  Synchronous Required Interface "RESET_tmr3_vt"
------------------------------------------------------ */
void vm_vt_coffee_for_water_tmpr_RESET_tmr3_vt();
/* ------------------------------------------------------
--  Synchronous Required Interface "SET_tmr3_vt"
------------------------------------------------------ */
void vm_vt_coffee_for_water_tmpr_SET_tmr3_vt(void *duration, size_t duration_len);
/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue_vt"
------------------------------------------------------ */
void vm_vt_coffee_for_water_tmpr_check_queue_vt(void *, size_t *);
#endif
