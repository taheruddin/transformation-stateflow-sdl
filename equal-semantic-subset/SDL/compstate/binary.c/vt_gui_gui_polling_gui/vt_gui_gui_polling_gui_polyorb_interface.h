/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef vt_gui_gui_polling_gui_POLYORB_INTERFACE
#define vt_gui_gui_polling_gui_POLYORB_INTERFACE
#include <stddef.h>

#include "types.h"
#include "deployment.h"
#include "po_hi_transport.h"
#include "../../gui/gui_polyorb_interface.h"
/*----------------------------------------------------
-- Asynchronous Provided Interface "artificial_gui_polling_gui"
----------------------------------------------------*/
void po_hi_c_vt_gui_gui_polling_gui_artificial_gui_polling_gui(__po_hi_task_id);

/* ------------------------------------------------------
--  Synchronous Required Interface "gui_polling_gui"
------------------------------------------------------ */
void vm_vt_gui_gui_polling_gui_gui_polling_gui();
/* ------------------------------------------------------
--  Asynchronous Required Interface "switch_on_vt"
------------------------------------------------------ */
void vm_async_vt_gui_gui_polling_gui_switch_on_vt(void *w, size_t w_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "switch_off_vt"
------------------------------------------------------ */
void vm_async_vt_gui_gui_polling_gui_switch_off_vt(void *w, size_t w_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "restart_vt"
------------------------------------------------------ */
void vm_async_vt_gui_gui_polling_gui_restart_vt(void *w, size_t w_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "start_recording_vt"
------------------------------------------------------ */
void vm_async_vt_gui_gui_polling_gui_start_recording_vt(void *w, size_t w_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "pause_vt"
------------------------------------------------------ */
void vm_async_vt_gui_gui_polling_gui_pause_vt(void *w, size_t w_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "resume_vt"
------------------------------------------------------ */
void vm_async_vt_gui_gui_polling_gui_resume_vt(void *w, size_t w_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "fail_vt"
------------------------------------------------------ */
void vm_async_vt_gui_gui_polling_gui_fail_vt(void *w, size_t w_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "stop_recording_vt"
------------------------------------------------------ */
void vm_async_vt_gui_gui_polling_gui_stop_recording_vt(void *w, size_t w_len);
#endif
