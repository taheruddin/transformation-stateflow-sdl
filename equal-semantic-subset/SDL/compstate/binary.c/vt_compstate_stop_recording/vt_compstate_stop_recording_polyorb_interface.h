/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef vt_compstate_stop_recording_POLYORB_INTERFACE
#define vt_compstate_stop_recording_POLYORB_INTERFACE
#include <stddef.h>

#include "types.h"
#include "deployment.h"
#include "po_hi_transport.h"
#include "../../compstate/compstate_polyorb_interface.h"
#include "../../chip_taste_api/chip_taste_api_polyorb_interface.h"
/*----------------------------------------------------
-- Asynchronous Provided Interface "artificial_stop_recording"
----------------------------------------------------*/
void po_hi_c_vt_compstate_stop_recording_artificial_stop_recording(__po_hi_task_id, dataview__mystring_buffer_impl);

/* ------------------------------------------------------
--  Synchronous Required Interface "stop_recording"
------------------------------------------------------ */
void vm_vt_compstate_stop_recording_stop_recording(void *w, size_t w_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "out_msg_vt"
------------------------------------------------------ */
void vm_async_vt_compstate_stop_recording_out_msg_vt(void *msg, size_t msg_len);
/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue_vt"
------------------------------------------------------ */
void vm_vt_compstate_stop_recording_check_queue_vt(void *, size_t *);
#endif
