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
void vm_vt_gui_out_msg_out_msg(void *omsg, size_t omsg_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "e_vt"
------------------------------------------------------ */
void vm_async_vt_gui_out_msg_e_vt(void *imsg, size_t imsg_len);
#endif
