/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef VM_IF_actions
#define VM_IF_actions

#ifdef __cplusplus
extern "C" {
#endif

#include "C_ASN1_Types.h"

/*
 * Function initialization:
 * Calls all dependent user (or GUI) startup code - including sychronous RI
*/
void init_actions();

extern void adainit();
void actions_push (void *pmy_w, size_t size_my_w);
extern void actions_PI_push (const asn1SccMyString *);
void actions_tap (void *pmy_w, size_t size_my_w);
extern void actions_PI_tap (const asn1SccMyString *);
#ifdef __cplusplus
}
#endif

#endif
