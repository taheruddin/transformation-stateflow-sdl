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

void chip_taste_api_PI_coffee_has_pending_msg(asn1SccT_Boolean *res) {
    /* Check all incoming queues (if any) for a pending message */
    (void)res;
    *res = 0;
    if (__po_hi_gqueue_get_count(chip_vt_coffee_get_init_tmpr_k, vt_coffee_get_init_tmpr_local_inport_artificial_get_init_tmpr)) {
        *res = 1;
    }
    *res = 0;
    if (__po_hi_gqueue_get_count(chip_vt_coffee_get_init_water_k, vt_coffee_get_init_water_local_inport_artificial_get_init_water)) {
        *res = 1;
    }
    *res = 0;
    if (__po_hi_gqueue_get_count(chip_vt_coffee_for_water_k, vt_coffee_for_water_local_inport_artificial_for_water)) {
        *res = 1;
    }
    *res = 0;
    if (__po_hi_gqueue_get_count(chip_vt_coffee_for_water_tmpr_k, vt_coffee_for_water_tmpr_local_inport_artificial_for_water_tmpr)) {
        *res = 1;
    }
    *res = 0;
    if (__po_hi_gqueue_get_count(chip_vt_coffee_for_coffee_k, vt_coffee_for_coffee_local_inport_artificial_for_coffee)) {
        *res = 1;
    }
    *res = 0;
    if (__po_hi_gqueue_get_count(chip_vt_coffee_for_ticking_k, vt_coffee_for_ticking_local_inport_artificial_for_ticking)) {
        *res = 1;
    }
    *res = 0;
    if (__po_hi_gqueue_get_count(chip_vt_coffee_tmr_k, vt_coffee_tmr_local_inport_artificial_tmr)) {
        *res = 1;
    }
    *res = 0;
    if (__po_hi_gqueue_get_count(chip_vt_coffee_tmr1_k, vt_coffee_tmr1_local_inport_artificial_tmr1)) {
        *res = 1;
    }
    *res = 0;
    if (__po_hi_gqueue_get_count(chip_vt_coffee_tmr2_k, vt_coffee_tmr2_local_inport_artificial_tmr2)) {
        *res = 1;
    }
    *res = 0;
    if (__po_hi_gqueue_get_count(chip_vt_coffee_tmr3_k, vt_coffee_tmr3_local_inport_artificial_tmr3)) {
        *res = 1;
    }
}

void chip_taste_api_PI_chip_timer_manager_has_pending_msg(asn1SccT_Boolean *res) {
    /* Check all incoming queues (if any) for a pending message */
    (void)res;
}

