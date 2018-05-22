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

void chip_taste_api_PI_actions_has_pending_msg(asn1SccT_Boolean *res) {
    /* Check all incoming queues (if any) for a pending message */
    (void)res;
    *res = 0;
    if (__po_hi_gqueue_get_count(chip_vt_actions_push_k, vt_actions_push_local_inport_artificial_push)) {
        *res = 1;
    }
    *res = 0;
    if (__po_hi_gqueue_get_count(chip_vt_actions_tap_k, vt_actions_tap_local_inport_artificial_tap)) {
        *res = 1;
    }
}

