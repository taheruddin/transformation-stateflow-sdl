/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef chip_taste_api_POLYORB_INTERFACE
#define chip_taste_api_POLYORB_INTERFACE
#include <stddef.h>

#include "deployment.h"
#include "po_hi_transport.h"
#include "../../vt_compstate_switch_on/vt_compstate_switch_on_polyorb_interface.h"
#include "../../vt_compstate_switch_off/vt_compstate_switch_off_polyorb_interface.h"
#include "../../vt_compstate_restart/vt_compstate_restart_polyorb_interface.h"
#include "../../vt_compstate_start_recording/vt_compstate_start_recording_polyorb_interface.h"
#include "../../vt_compstate_pause/vt_compstate_pause_polyorb_interface.h"
#include "../../vt_compstate_resume/vt_compstate_resume_polyorb_interface.h"
#include "../../vt_compstate_stop_recording/vt_compstate_stop_recording_polyorb_interface.h"
#include "../../vt_compstate_fail/vt_compstate_fail_polyorb_interface.h"
/*----------------------------------------------------
-- Unprotected Provided Interface "compstate_has_pending_msg"
----------------------------------------------------*/
void sync_chip_taste_api_compstate_has_pending_msg(void *, size_t *);

#endif
