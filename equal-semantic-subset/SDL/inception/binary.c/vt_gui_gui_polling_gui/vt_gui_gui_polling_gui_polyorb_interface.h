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
--  Asynchronous Required Interface "inmsg_vt"
------------------------------------------------------ */
void vm_async_vt_gui_gui_polling_gui_inmsg_vt(void *whatever, size_t whatever_len);
#endif
