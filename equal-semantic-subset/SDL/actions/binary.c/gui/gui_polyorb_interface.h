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
--  Asynchronous Required Interface "push"
------------------------------------------------------ */
void vm_async_gui_push(void *w, size_t w_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "tap"
------------------------------------------------------ */
void vm_async_gui_tap(void *w, size_t w_len);
/*----------------------------------------------------
-- Protected Provided Interface "gui_polling_gui"
----------------------------------------------------*/
void sync_gui_gui_polling_gui();

#endif
