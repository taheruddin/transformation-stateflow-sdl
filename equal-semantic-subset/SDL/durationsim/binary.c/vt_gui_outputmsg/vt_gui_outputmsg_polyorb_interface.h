/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef vt_gui_outputmsg_POLYORB_INTERFACE
#define vt_gui_outputmsg_POLYORB_INTERFACE
#include <stddef.h>

#include "types.h"
#include "deployment.h"
#include "po_hi_transport.h"
#include "../../gui/gui_polyorb_interface.h"
/*----------------------------------------------------
-- Asynchronous Provided Interface "artificial_outputmsg"
----------------------------------------------------*/
void po_hi_c_vt_gui_outputmsg_artificial_outputmsg(__po_hi_task_id, dataview__mystring_buffer_impl);

/* ------------------------------------------------------
--  Synchronous Required Interface "outputmsg"
------------------------------------------------------ */
void vm_vt_gui_outputmsg_outputmsg(void *outmsg, size_t outmsg_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "inputmsg_vt"
------------------------------------------------------ */
void vm_async_vt_gui_outputmsg_inputmsg_vt(void *inmsg, size_t inmsg_len);
#endif
