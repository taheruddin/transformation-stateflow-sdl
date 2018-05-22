#include "po_hi_gqueue.h"
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "coffee_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_protected.h"

#include "po_hi_task.h"
#include "coffee_vm_if.h"

/*----------------------------------------------------
-- Protected Provided Interface "get_init_tmpr"
----------------------------------------------------*/
void sync_coffee_get_init_tmpr(void *init_tmpr, size_t init_tmpr_len)
{
   extern process_package__taste_protected_object coffee_protected;
   __po_hi_protected_lock (coffee_protected.protected_id);
   coffee_get_init_tmpr(init_tmpr, init_tmpr_len);
   __po_hi_protected_unlock (coffee_protected.protected_id);
}

/*----------------------------------------------------
-- Protected Provided Interface "get_init_water"
----------------------------------------------------*/
void sync_coffee_get_init_water(void *init_water, size_t init_water_len)
{
   extern process_package__taste_protected_object coffee_protected;
   __po_hi_protected_lock (coffee_protected.protected_id);
   coffee_get_init_water(init_water, init_water_len);
   __po_hi_protected_unlock (coffee_protected.protected_id);
}

/*----------------------------------------------------
-- Protected Provided Interface "for_water"
----------------------------------------------------*/
void sync_coffee_for_water(void *w, size_t w_len)
{
   extern process_package__taste_protected_object coffee_protected;
   __po_hi_protected_lock (coffee_protected.protected_id);
   coffee_for_water(w, w_len);
   __po_hi_protected_unlock (coffee_protected.protected_id);
}

/*----------------------------------------------------
-- Protected Provided Interface "for_water_tmpr"
----------------------------------------------------*/
void sync_coffee_for_water_tmpr(void *w, size_t w_len)
{
   extern process_package__taste_protected_object coffee_protected;
   __po_hi_protected_lock (coffee_protected.protected_id);
   coffee_for_water_tmpr(w, w_len);
   __po_hi_protected_unlock (coffee_protected.protected_id);
}

/*----------------------------------------------------
-- Protected Provided Interface "for_coffee"
----------------------------------------------------*/
void sync_coffee_for_coffee(void *w, size_t w_len)
{
   extern process_package__taste_protected_object coffee_protected;
   __po_hi_protected_lock (coffee_protected.protected_id);
   coffee_for_coffee(w, w_len);
   __po_hi_protected_unlock (coffee_protected.protected_id);
}

/*----------------------------------------------------
-- Protected Provided Interface "for_ticking"
----------------------------------------------------*/
void sync_coffee_for_ticking(void *w, size_t w_len)
{
   extern process_package__taste_protected_object coffee_protected;
   __po_hi_protected_lock (coffee_protected.protected_id);
   coffee_for_ticking(w, w_len);
   __po_hi_protected_unlock (coffee_protected.protected_id);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "out_msg"
------------------------------------------------------ */
void vm_async_coffee_out_msg(void *msg, size_t msg_len)
{
   switch(__po_hi_get_task_id()) {
      case chip_vt_coffee_get_init_tmpr_k: vm_async_vt_coffee_get_init_tmpr_out_msg_vt(msg, msg_len); break;
      case chip_vt_coffee_get_init_water_k: vm_async_vt_coffee_get_init_water_out_msg_vt(msg, msg_len); break;
      case chip_vt_coffee_for_water_k: vm_async_vt_coffee_for_water_out_msg_vt(msg, msg_len); break;
      case chip_vt_coffee_for_water_tmpr_k: vm_async_vt_coffee_for_water_tmpr_out_msg_vt(msg, msg_len); break;
      case chip_vt_coffee_for_coffee_k: vm_async_vt_coffee_for_coffee_out_msg_vt(msg, msg_len); break;
      case chip_vt_coffee_for_ticking_k: vm_async_vt_coffee_for_ticking_out_msg_vt(msg, msg_len); break;
      case chip_vt_coffee_tmr_k: vm_async_vt_coffee_tmr_out_msg_vt(msg, msg_len); break;
      case chip_vt_coffee_tmr1_k: vm_async_vt_coffee_tmr1_out_msg_vt(msg, msg_len); break;
      case chip_vt_coffee_tmr2_k: vm_async_vt_coffee_tmr2_out_msg_vt(msg, msg_len); break;
      case chip_vt_coffee_tmr3_k: vm_async_vt_coffee_tmr3_out_msg_vt(msg, msg_len); break;
      default: break;
   }
}

/*----------------------------------------------------
-- Protected Provided Interface "tmr"
----------------------------------------------------*/
void sync_coffee_tmr()
{
   extern process_package__taste_protected_object coffee_protected;
   __po_hi_protected_lock (coffee_protected.protected_id);
   coffee_tmr();
   __po_hi_protected_unlock (coffee_protected.protected_id);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "RESET_tmr"
------------------------------------------------------ */
void vm_coffee_RESET_tmr()
{
   sync_chip_timer_manager_coffee_RESET_tmr();
}

/* ------------------------------------------------------
--  Synchronous Required Interface "SET_tmr"
------------------------------------------------------ */
void vm_coffee_SET_tmr(void *duration, size_t duration_len)
{
   sync_chip_timer_manager_coffee_SET_tmr(duration, duration_len);
}

/*----------------------------------------------------
-- Protected Provided Interface "tmr1"
----------------------------------------------------*/
void sync_coffee_tmr1()
{
   extern process_package__taste_protected_object coffee_protected;
   __po_hi_protected_lock (coffee_protected.protected_id);
   coffee_tmr1();
   __po_hi_protected_unlock (coffee_protected.protected_id);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "RESET_tmr1"
------------------------------------------------------ */
void vm_coffee_RESET_tmr1()
{
   sync_chip_timer_manager_coffee_RESET_tmr1();
}

/* ------------------------------------------------------
--  Synchronous Required Interface "SET_tmr1"
------------------------------------------------------ */
void vm_coffee_SET_tmr1(void *duration, size_t duration_len)
{
   sync_chip_timer_manager_coffee_SET_tmr1(duration, duration_len);
}

/*----------------------------------------------------
-- Protected Provided Interface "tmr2"
----------------------------------------------------*/
void sync_coffee_tmr2()
{
   extern process_package__taste_protected_object coffee_protected;
   __po_hi_protected_lock (coffee_protected.protected_id);
   coffee_tmr2();
   __po_hi_protected_unlock (coffee_protected.protected_id);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "RESET_tmr2"
------------------------------------------------------ */
void vm_coffee_RESET_tmr2()
{
   sync_chip_timer_manager_coffee_RESET_tmr2();
}

/* ------------------------------------------------------
--  Synchronous Required Interface "SET_tmr2"
------------------------------------------------------ */
void vm_coffee_SET_tmr2(void *duration, size_t duration_len)
{
   sync_chip_timer_manager_coffee_SET_tmr2(duration, duration_len);
}

/*----------------------------------------------------
-- Protected Provided Interface "tmr3"
----------------------------------------------------*/
void sync_coffee_tmr3()
{
   extern process_package__taste_protected_object coffee_protected;
   __po_hi_protected_lock (coffee_protected.protected_id);
   coffee_tmr3();
   __po_hi_protected_unlock (coffee_protected.protected_id);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "RESET_tmr3"
------------------------------------------------------ */
void vm_coffee_RESET_tmr3()
{
   sync_chip_timer_manager_coffee_RESET_tmr3();
}

/* ------------------------------------------------------
--  Synchronous Required Interface "SET_tmr3"
------------------------------------------------------ */
void vm_coffee_SET_tmr3(void *duration, size_t duration_len)
{
   sync_chip_timer_manager_coffee_SET_tmr3(duration, duration_len);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue"
------------------------------------------------------ */
void vm_coffee_check_queue(void *res, size_t *res_len)
{
   sync_chip_taste_api_coffee_has_pending_msg(res, res_len);
}

