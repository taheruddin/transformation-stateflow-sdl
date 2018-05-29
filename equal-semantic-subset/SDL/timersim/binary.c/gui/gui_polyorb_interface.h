/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef gui_POLYORB_INTERFACE
#define gui_POLYORB_INTERFACE
#include <stddef.h>

#include "types.h"
#include "deployment.h"
#include "po_hi_transport.h"
#include "../../vt_gui_outputmsg/vt_gui_outputmsg_polyorb_interface.h"
#include "../../vt_gui_gui_polling_gui/vt_gui_gui_polling_gui_polyorb_interface.h"
/*----------------------------------------------------
-- Protected Provided Interface "outputmsg"
----------------------------------------------------*/
void sync_gui_outputmsg(void *, size_t);

/* ------------------------------------------------------
--  Asynchronous Required Interface "inputmsg"
------------------------------------------------------ */
void vm_async_gui_inputmsg(void *into, size_t into_len);
/*----------------------------------------------------
-- Protected Provided Interface "gui_polling_gui"
----------------------------------------------------*/
void sync_gui_gui_polling_gui();

#endif
