/* TASTE API */
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include <deployment.h>

#include "chip_taste_api.h"

extern int __po_hi_gqueue_get_count(int, int);

#ifdef __unix__
    #include <stdio.h>
#endif

void chip_taste_api_startup()
{
    /* TASTE API start up (nothing to do) */
}

void chip_taste_api_PI_compstate_has_pending_msg(asn1SccT_Boolean *res) {
    /* Check all incoming queues (if any) for a pending message */
    (void)res;
    *res = 0;
    if (__po_hi_gqueue_get_count(chip_vt_compstate_switch_on_k, vt_compstate_switch_on_local_inport_artificial_switch_on)) {
        *res = 1;
    }
    *res = 0;
    if (__po_hi_gqueue_get_count(chip_vt_compstate_switch_off_k, vt_compstate_switch_off_local_inport_artificial_switch_off)) {
        *res = 1;
    }
    *res = 0;
    if (__po_hi_gqueue_get_count(chip_vt_compstate_restart_k, vt_compstate_restart_local_inport_artificial_restart)) {
        *res = 1;
    }
    *res = 0;
    if (__po_hi_gqueue_get_count(chip_vt_compstate_start_recording_k, vt_compstate_start_recording_local_inport_artificial_start_recording)) {
        *res = 1;
    }
    *res = 0;
    if (__po_hi_gqueue_get_count(chip_vt_compstate_pause_k, vt_compstate_pause_local_inport_artificial_pause)) {
        *res = 1;
    }
    *res = 0;
    if (__po_hi_gqueue_get_count(chip_vt_compstate_resume_k, vt_compstate_resume_local_inport_artificial_resume)) {
        *res = 1;
    }
    *res = 0;
    if (__po_hi_gqueue_get_count(chip_vt_compstate_stop_recording_k, vt_compstate_stop_recording_local_inport_artificial_stop_recording)) {
        *res = 1;
    }
    *res = 0;
    if (__po_hi_gqueue_get_count(chip_vt_compstate_fail_k, vt_compstate_fail_local_inport_artificial_fail)) {
        *res = 1;
    }
}

