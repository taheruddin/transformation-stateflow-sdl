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

void chip_taste_api_PI_guard_1_has_pending_msg(asn1SccT_Boolean *res) {
    /* Check all incoming queues (if any) for a pending message */
    (void)res;
    *res = 0;
    if (__po_hi_gqueue_get_count(chip_vt_guard_1_get_data_k, vt_guard_1_get_data_local_inport_artificial_get_data)) {
        *res = 1;
    }
    *res = 0;
    if (__po_hi_gqueue_get_count(chip_vt_guard_1_check_k, vt_guard_1_check_local_inport_artificial_check)) {
        *res = 1;
    }
}

