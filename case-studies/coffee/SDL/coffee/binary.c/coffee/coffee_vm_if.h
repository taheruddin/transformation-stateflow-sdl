/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef VM_IF_coffee
#define VM_IF_coffee

#ifdef __cplusplus
extern "C" {
#endif

#include "C_ASN1_Types.h"

/*
 * Function initialization:
 * Calls all dependent user (or GUI) startup code - including sychronous RI
*/
void init_coffee();

extern void adainit();
void coffee_get_init_tmpr (void *pmy_init_tmpr, size_t size_my_init_tmpr);
extern void coffee_PI_get_init_tmpr (const asn1SccT_Int32 *);
void coffee_get_init_water (void *pmy_init_water, size_t size_my_init_water);
extern void coffee_PI_get_init_water (const asn1SccT_Int32 *);
void coffee_for_water (void *pmy_w, size_t size_my_w);
extern void coffee_PI_for_water (const asn1SccMyString *);
void coffee_for_water_tmpr (void *pmy_w, size_t size_my_w);
extern void coffee_PI_for_water_tmpr (const asn1SccMyString *);
void coffee_for_coffee (void *pmy_w, size_t size_my_w);
extern void coffee_PI_for_coffee (const asn1SccMyString *);
void coffee_for_ticking (void *pmy_w, size_t size_my_w);
extern void coffee_PI_for_ticking (const asn1SccMyString *);
void coffee_tmr ();
extern void coffee_PI_tmr ();
void coffee_tmr1 ();
extern void coffee_PI_tmr1 ();
void coffee_tmr2 ();
extern void coffee_PI_tmr2 ();
void coffee_tmr3 ();
extern void coffee_PI_tmr3 ();
#ifdef __cplusplus
}
#endif

#endif
