/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef coffee_POLYORB_INTERFACE
#define coffee_POLYORB_INTERFACE
#include <stddef.h>

#include "types.h"
#include "deployment.h"
#include "po_hi_transport.h"
#include "../../chip_timer_manager/chip_timer_manager_polyorb_interface.h"
#include "../../chip_timer_manager/chip_timer_manager_polyorb_interface.h"
#include "../../chip_timer_manager/chip_timer_manager_polyorb_interface.h"
#include "../../chip_timer_manager/chip_timer_manager_polyorb_interface.h"
#include "../../chip_timer_manager/chip_timer_manager_polyorb_interface.h"
#include "../../chip_timer_manager/chip_timer_manager_polyorb_interface.h"
#include "../../chip_timer_manager/chip_timer_manager_polyorb_interface.h"
#include "../../chip_timer_manager/chip_timer_manager_polyorb_interface.h"
#include "../../chip_taste_api/chip_taste_api_polyorb_interface.h"
#include "../../vt_coffee_get_init_tmpr/vt_coffee_get_init_tmpr_polyorb_interface.h"
#include "../../vt_coffee_get_init_water/vt_coffee_get_init_water_polyorb_interface.h"
#include "../../vt_coffee_for_water/vt_coffee_for_water_polyorb_interface.h"
#include "../../vt_coffee_for_water_tmpr/vt_coffee_for_water_tmpr_polyorb_interface.h"
#include "../../vt_coffee_for_coffee/vt_coffee_for_coffee_polyorb_interface.h"
#include "../../vt_coffee_for_ticking/vt_coffee_for_ticking_polyorb_interface.h"
#include "../../vt_coffee_tmr/vt_coffee_tmr_polyorb_interface.h"
#include "../../vt_coffee_tmr1/vt_coffee_tmr1_polyorb_interface.h"
#include "../../vt_coffee_tmr2/vt_coffee_tmr2_polyorb_interface.h"
#include "../../vt_coffee_tmr3/vt_coffee_tmr3_polyorb_interface.h"
/*----------------------------------------------------
-- Protected Provided Interface "get_init_tmpr"
----------------------------------------------------*/
void sync_coffee_get_init_tmpr(void *, size_t);

/*----------------------------------------------------
-- Protected Provided Interface "get_init_water"
----------------------------------------------------*/
void sync_coffee_get_init_water(void *, size_t);

/*----------------------------------------------------
-- Protected Provided Interface "for_water"
----------------------------------------------------*/
void sync_coffee_for_water(void *, size_t);

/*----------------------------------------------------
-- Protected Provided Interface "for_water_tmpr"
----------------------------------------------------*/
void sync_coffee_for_water_tmpr(void *, size_t);

/*----------------------------------------------------
-- Protected Provided Interface "for_coffee"
----------------------------------------------------*/
void sync_coffee_for_coffee(void *, size_t);

/*----------------------------------------------------
-- Protected Provided Interface "for_ticking"
----------------------------------------------------*/
void sync_coffee_for_ticking(void *, size_t);

/* ------------------------------------------------------
--  Asynchronous Required Interface "out_msg"
------------------------------------------------------ */
void vm_async_coffee_out_msg(void *msg, size_t msg_len);
/*----------------------------------------------------
-- Protected Provided Interface "tmr"
----------------------------------------------------*/
void sync_coffee_tmr();

/* ------------------------------------------------------
--  Synchronous Required Interface "RESET_tmr"
------------------------------------------------------ */
void vm_coffee_RESET_tmr();
/* ------------------------------------------------------
--  Synchronous Required Interface "SET_tmr"
------------------------------------------------------ */
void vm_coffee_SET_tmr(void *duration, size_t duration_len);
/*----------------------------------------------------
-- Protected Provided Interface "tmr1"
----------------------------------------------------*/
void sync_coffee_tmr1();

/* ------------------------------------------------------
--  Synchronous Required Interface "RESET_tmr1"
------------------------------------------------------ */
void vm_coffee_RESET_tmr1();
/* ------------------------------------------------------
--  Synchronous Required Interface "SET_tmr1"
------------------------------------------------------ */
void vm_coffee_SET_tmr1(void *duration, size_t duration_len);
/*----------------------------------------------------
-- Protected Provided Interface "tmr2"
----------------------------------------------------*/
void sync_coffee_tmr2();

/* ------------------------------------------------------
--  Synchronous Required Interface "RESET_tmr2"
------------------------------------------------------ */
void vm_coffee_RESET_tmr2();
/* ------------------------------------------------------
--  Synchronous Required Interface "SET_tmr2"
------------------------------------------------------ */
void vm_coffee_SET_tmr2(void *duration, size_t duration_len);
/*----------------------------------------------------
-- Protected Provided Interface "tmr3"
----------------------------------------------------*/
void sync_coffee_tmr3();

/* ------------------------------------------------------
--  Synchronous Required Interface "RESET_tmr3"
------------------------------------------------------ */
void vm_coffee_RESET_tmr3();
/* ------------------------------------------------------
--  Synchronous Required Interface "SET_tmr3"
------------------------------------------------------ */
void vm_coffee_SET_tmr3(void *duration, size_t duration_len);
/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue"
------------------------------------------------------ */
void vm_coffee_check_queue(void *, size_t *);
#endif
