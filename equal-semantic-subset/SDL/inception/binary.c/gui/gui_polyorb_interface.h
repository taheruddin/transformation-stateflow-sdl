/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef gui_POLYORB_INTERFACE
#define gui_POLYORB_INTERFACE
#include <stddef.h>

#include "types.h"
#include "deployment.h"
#include "po_hi_transport.h"
#include "../../vt_gui_outmsg/vt_gui_outmsg_polyorb_interface.h"
#include "../../vt_gui_gui_polling_gui/vt_gui_gui_polling_gui_polyorb_interface.h"
/*----------------------------------------------------
-- Protected Provided Interface "outmsg"
----------------------------------------------------*/
void sync_gui_outmsg(void *, size_t);

/* ------------------------------------------------------
--  Asynchronous Required Interface "inmsg"
------------------------------------------------------ */
void vm_async_gui_inmsg(void *whatever, size_t whatever_len);
/*----------------------------------------------------
-- Protected Provided Interface "gui_polling_gui"
----------------------------------------------------*/
void sync_gui_gui_polling_gui();

#endif
