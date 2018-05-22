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
--  Asynchronous Required Interface "switch_on"
------------------------------------------------------ */
void vm_async_gui_switch_on(void *w, size_t w_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "switch_off"
------------------------------------------------------ */
void vm_async_gui_switch_off(void *w, size_t w_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "restart"
------------------------------------------------------ */
void vm_async_gui_restart(void *w, size_t w_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "start_recording"
------------------------------------------------------ */
void vm_async_gui_start_recording(void *w, size_t w_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "pause"
------------------------------------------------------ */
void vm_async_gui_pause(void *w, size_t w_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "resume"
------------------------------------------------------ */
void vm_async_gui_resume(void *w, size_t w_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "fail"
------------------------------------------------------ */
void vm_async_gui_fail(void *w, size_t w_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "stop_recording"
------------------------------------------------------ */
void vm_async_gui_stop_recording(void *w, size_t w_len);
/*----------------------------------------------------
-- Protected Provided Interface "gui_polling_gui"
----------------------------------------------------*/
void sync_gui_gui_polling_gui();

#endif
