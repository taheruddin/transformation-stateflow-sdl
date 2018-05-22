/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef vt_gui_outmsg_POLYORB_INTERFACE
#define vt_gui_outmsg_POLYORB_INTERFACE
#include <stddef.h>

#include "types.h"
#include "deployment.h"
#include "po_hi_transport.h"
#include "../../gui/gui_polyorb_interface.h"
/*----------------------------------------------------
-- Asynchronous Provided Interface "artificial_outmsg"
----------------------------------------------------*/
void po_hi_c_vt_gui_outmsg_artificial_outmsg(__po_hi_task_id, dataview__mystring_buffer_impl);

/* ------------------------------------------------------
--  Synchronous Required Interface "outmsg"
------------------------------------------------------ */
void vm_vt_gui_outmsg_outmsg(void *msg, size_t msg_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "inmsg_vt"
------------------------------------------------------ */
void vm_async_vt_gui_outmsg_inmsg_vt(void *whatever, size_t whatever_len);
#endif
