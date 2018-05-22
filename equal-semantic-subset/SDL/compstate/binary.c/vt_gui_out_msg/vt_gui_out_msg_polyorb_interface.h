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
--  Asynchronous Required Interface "switch_on_vt"
------------------------------------------------------ */
void vm_async_vt_gui_out_msg_switch_on_vt(void *w, size_t w_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "switch_off_vt"
------------------------------------------------------ */
void vm_async_vt_gui_out_msg_switch_off_vt(void *w, size_t w_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "restart_vt"
------------------------------------------------------ */
void vm_async_vt_gui_out_msg_restart_vt(void *w, size_t w_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "start_recording_vt"
------------------------------------------------------ */
void vm_async_vt_gui_out_msg_start_recording_vt(void *w, size_t w_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "pause_vt"
------------------------------------------------------ */
void vm_async_vt_gui_out_msg_pause_vt(void *w, size_t w_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "resume_vt"
------------------------------------------------------ */
void vm_async_vt_gui_out_msg_resume_vt(void *w, size_t w_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "fail_vt"
------------------------------------------------------ */
void vm_async_vt_gui_out_msg_fail_vt(void *w, size_t w_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "stop_recording_vt"
------------------------------------------------------ */
void vm_async_vt_gui_out_msg_stop_recording_vt(void *w, size_t w_len);
#endif
