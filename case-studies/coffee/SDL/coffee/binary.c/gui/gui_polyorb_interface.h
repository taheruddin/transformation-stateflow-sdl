/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef gui_POLYORB_INTERFACE
#define gui_POLYORB_INTERFACE
#include <stddef.h>

#include "types.h"
#include "deployment.h"
#include "po_hi_transport.h"
#include "../../vt_gui_out_msg/vt_gui_out_msg_polyorb_interface.h"
#include "../../vt_gui_gui_polling_gui/vt_gui_gui_polling_gui_polyorb_interface.h"
/*----------------------------------------------------
-- Protected Provided Interface "out_msg"
----------------------------------------------------*/
void sync_gui_out_msg(void *, size_t);

/* ------------------------------------------------------
--  Asynchronous Required Interface "get_init_tmpr"
------------------------------------------------------ */
void vm_async_gui_get_init_tmpr(void *init_tmpr, size_t init_tmpr_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "get_init_water"
------------------------------------------------------ */
void vm_async_gui_get_init_water(void *init_water, size_t init_water_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "for_water"
------------------------------------------------------ */
void vm_async_gui_for_water(void *w, size_t w_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "for_water_tmpr"
------------------------------------------------------ */
void vm_async_gui_for_water_tmpr(void *w, size_t w_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "for_coffee"
------------------------------------------------------ */
void vm_async_gui_for_coffee(void *w, size_t w_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "for_ticking"
------------------------------------------------------ */
void vm_async_gui_for_ticking(void *w, size_t w_len);
/*----------------------------------------------------
-- Protected Provided Interface "gui_polling_gui"
----------------------------------------------------*/
void sync_gui_gui_polling_gui();

#endif
