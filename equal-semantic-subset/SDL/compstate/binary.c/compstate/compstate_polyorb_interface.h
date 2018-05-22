/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef compstate_POLYORB_INTERFACE
#define compstate_POLYORB_INTERFACE
#include <stddef.h>

#include "types.h"
#include "deployment.h"
#include "po_hi_transport.h"
#include "../../chip_taste_api/chip_taste_api_polyorb_interface.h"
#include "../../vt_compstate_switch_on/vt_compstate_switch_on_polyorb_interface.h"
#include "../../vt_compstate_switch_off/vt_compstate_switch_off_polyorb_interface.h"
#include "../../vt_compstate_restart/vt_compstate_restart_polyorb_interface.h"
#include "../../vt_compstate_start_recording/vt_compstate_start_recording_polyorb_interface.h"
#include "../../vt_compstate_pause/vt_compstate_pause_polyorb_interface.h"
#include "../../vt_compstate_resume/vt_compstate_resume_polyorb_interface.h"
#include "../../vt_compstate_stop_recording/vt_compstate_stop_recording_polyorb_interface.h"
#include "../../vt_compstate_fail/vt_compstate_fail_polyorb_interface.h"
/*----------------------------------------------------
-- Protected Provided Interface "switch_on"
----------------------------------------------------*/
void sync_compstate_switch_on(void *, size_t);

/*----------------------------------------------------
-- Protected Provided Interface "switch_off"
----------------------------------------------------*/
void sync_compstate_switch_off(void *, size_t);

/*----------------------------------------------------
-- Protected Provided Interface "restart"
----------------------------------------------------*/
void sync_compstate_restart(void *, size_t);

/*----------------------------------------------------
-- Protected Provided Interface "start_recording"
----------------------------------------------------*/
void sync_compstate_start_recording(void *, size_t);

/*----------------------------------------------------
-- Protected Provided Interface "pause"
----------------------------------------------------*/
void sync_compstate_pause(void *, size_t);

/*----------------------------------------------------
-- Protected Provided Interface "resume"
----------------------------------------------------*/
void sync_compstate_resume(void *, size_t);

/*----------------------------------------------------
-- Protected Provided Interface "stop_recording"
----------------------------------------------------*/
void sync_compstate_stop_recording(void *, size_t);

/*----------------------------------------------------
-- Protected Provided Interface "fail"
----------------------------------------------------*/
void sync_compstate_fail(void *, size_t);

/* ------------------------------------------------------
--  Asynchronous Required Interface "out_msg"
------------------------------------------------------ */
void vm_async_compstate_out_msg(void *msg, size_t msg_len);
/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue"
------------------------------------------------------ */
void vm_compstate_check_queue(void *, size_t *);
#endif
