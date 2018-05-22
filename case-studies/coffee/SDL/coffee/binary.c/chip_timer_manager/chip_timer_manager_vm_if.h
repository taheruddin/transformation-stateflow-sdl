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
void chip_timer_manager_coffee_RESET_tmr ();
extern void chip_timer_manager_PI_coffee_RESET_tmr ();
void chip_timer_manager_coffee_SET_tmr (void *pmy_duration, size_t size_my_duration);
extern void chip_timer_manager_PI_coffee_SET_tmr (const asn1SccT_UInt32 *);
void chip_timer_manager_coffee_RESET_tmr1 ();
extern void chip_timer_manager_PI_coffee_RESET_tmr1 ();
void chip_timer_manager_coffee_SET_tmr1 (void *pmy_duration, size_t size_my_duration);
extern void chip_timer_manager_PI_coffee_SET_tmr1 (const asn1SccT_UInt32 *);
void chip_timer_manager_coffee_RESET_tmr2 ();
extern void chip_timer_manager_PI_coffee_RESET_tmr2 ();
void chip_timer_manager_coffee_SET_tmr2 (void *pmy_duration, size_t size_my_duration);
extern void chip_timer_manager_PI_coffee_SET_tmr2 (const asn1SccT_UInt32 *);
void chip_timer_manager_coffee_RESET_tmr3 ();
extern void chip_timer_manager_PI_coffee_RESET_tmr3 ();
void chip_timer_manager_coffee_SET_tmr3 (void *pmy_duration, size_t size_my_duration);
extern void chip_timer_manager_PI_coffee_SET_tmr3 (const asn1SccT_UInt32 *);
#ifdef __cplusplus
}
#endif

#endif
