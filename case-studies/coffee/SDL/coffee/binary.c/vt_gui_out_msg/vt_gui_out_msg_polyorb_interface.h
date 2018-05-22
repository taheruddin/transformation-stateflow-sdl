/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef vt_gui_out_msg_POLYORB_INTERFACE
#define vt_gui_out_msg_POLYORB_INTERFACE
#include <stddef.h>

#include "types.h"
#include "deployment.h"
#include "po_hi_transport.h"
#include "../../gui/gui_polyorb_interface.h"
/*----------------------------------------------------
-- Asynchronous Provided Interface "artificial_out_msg"
----------------------------------------------------*/
void po_hi_c_vt_gui_out_msg_artificial_out_msg(__po_hi_task_id, dataview__mystring_buffer_impl);

/* ------------------------------------------------------
--  Synchronous Required Interface "out_msg"
------------------------------------------------------ */
void vm_vt_gui_out_msg_out_msg(void *msg, size_t msg_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "get_init_tmpr_vt"
------------------------------------------------------ */
void vm_async_vt_gui_out_msg_get_init_tmpr_vt(void *init_tmpr, size_t init_tmpr_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "get_init_water_vt"
------------------------------------------------------ */
void vm_async_vt_gui_out_msg_get_init_water_vt(void *init_water, size_t init_water_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "for_water_vt"
------------------------------------------------------ */
void vm_async_vt_gui_out_msg_for_water_vt(void *w, size_t w_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "for_water_tmpr_vt"
------------------------------------------------------ */
void vm_async_vt_gui_out_msg_for_water_tmpr_vt(void *w, size_t w_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "for_coffee_vt"
------------------------------------------------------ */
void vm_async_vt_gui_out_msg_for_coffee_vt(void *w, size_t w_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "for_ticking_vt"
------------------------------------------------------ */
void vm_async_vt_gui_out_msg_for_ticking_vt(void *w, size_t w_len);
#endif
