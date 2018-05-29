/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef VM_IF_chip_timer_manager
#define VM_IF_chip_timer_manager

#ifdef __cplusplus
extern "C" {
#endif

#include "C_ASN1_Types.h"

/*
 * Function initialization:
 * Calls all dependent user (or GUI) startup code - including sychronous RI
*/
void init_chip_timer_manager();

void chip_timer_manager_tick_100ms ();
extern void chip_timer_manager_PI_tick_100ms ();
void chip_timer_manager_timersys_RESET_sdltmr ();
extern void chip_timer_manager_PI_timersys_RESET_sdltmr ();
void chip_timer_manager_timersys_SET_sdltmr (void *pmy_duration, size_t size_my_duration);
extern void chip_timer_manager_PI_timersys_SET_sdltmr (const asn1SccT_UInt32 *);
#ifdef __cplusplus
}
#endif

#endif
