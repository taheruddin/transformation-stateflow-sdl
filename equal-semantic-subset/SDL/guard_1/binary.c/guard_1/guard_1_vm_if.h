/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef VM_IF_guard_1
#define VM_IF_guard_1

#ifdef __cplusplus
extern "C" {
#endif

#include "C_ASN1_Types.h"

/*
 * Function initialization:
 * Calls all dependent user (or GUI) startup code - including sychronous RI
*/
void init_guard_1();

extern void adainit();
void guard_1_get_data (void *pmy_x, size_t size_my_x);
extern void guard_1_PI_get_data (const asn1SccMyReal *);
void guard_1_check (void *pmy_whatever, size_t size_my_whatever);
extern void guard_1_PI_check (const asn1SccMyString *);
#ifdef __cplusplus
}
#endif

#endif
