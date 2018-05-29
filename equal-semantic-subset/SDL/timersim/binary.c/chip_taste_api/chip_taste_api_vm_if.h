/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef VM_IF_chip_taste_api
#define VM_IF_chip_taste_api

#ifdef __cplusplus
extern "C" {
#endif

#include "C_ASN1_Types.h"

/*
 * Function initialization:
 * Calls all dependent user (or GUI) startup code - including sychronous RI
*/
void init_chip_taste_api();

void chip_taste_api_timersys_has_pending_msg (void *pmy_res, size_t *psize_my_res);
extern void chip_taste_api_PI_timersys_has_pending_msg (asn1SccT_Boolean *);
void chip_taste_api_chip_timer_manager_has_pending_msg (void *pmy_res, size_t *psize_my_res);
extern void chip_taste_api_PI_chip_timer_manager_has_pending_msg (asn1SccT_Boolean *);
#ifdef __cplusplus
}
#endif

#endif
