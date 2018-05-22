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

void chip_taste_api_PI_atm_has_pending_msg(asn1SccT_Boolean *res) {
    /* Check all incoming queues (if any) for a pending message */
    (void)res;
    *res = 0;
    if (__po_hi_gqueue_get_count(chip_vt_atm_accept_card_k, vt_atm_accept_card_local_inport_artificial_accept_card)) {
        *res = 1;
    }
    *res = 0;
    if (__po_hi_gqueue_get_count(chip_vt_atm_reject_transaction_k, vt_atm_reject_transaction_local_inport_artificial_reject_transaction)) {
        *res = 1;
    }
    *res = 0;
    if (__po_hi_gqueue_get_count(chip_vt_atm_out_of_service_k, vt_atm_out_of_service_local_inport_artificial_out_of_service)) {
        *res = 1;
    }
    *res = 0;
    if (__po_hi_gqueue_get_count(chip_vt_atm_abort_out_k, vt_atm_abort_out_local_inport_artificial_abort_out)) {
        *res = 1;
    }
    *res = 0;
    if (__po_hi_gqueue_get_count(chip_vt_atm_amount_k, vt_atm_amount_local_inport_artificial_amount)) {
        *res = 1;
    }
    *res = 0;
    if (__po_hi_gqueue_get_count(chip_vt_atm_other_amount_k, vt_atm_other_amount_local_inport_artificial_other_amount)) {
        *res = 1;
    }
    *res = 0;
    if (__po_hi_gqueue_get_count(chip_vt_atm_digit_k, vt_atm_digit_local_inport_artificial_digit)) {
        *res = 1;
    }
    *res = 0;
    if (__po_hi_gqueue_get_count(chip_vt_atm_ok_k, vt_atm_ok_local_inport_artificial_ok)) {
        *res = 1;
    }
    *res = 0;
    if (__po_hi_gqueue_get_count(chip_vt_atm_transaction_succeseeded_k, vt_atm_transaction_succeseeded_local_inport_artificial_transaction_succeseeded)) {
        *res = 1;
    }
}

