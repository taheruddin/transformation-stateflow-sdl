/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef VM_IF_timersys
#define VM_IF_timersys

#ifdef __cplusplus
extern "C" {
#endif

#include "C_ASN1_Types.h"

/*
 * Function initialization:
 * Calls all dependent user (or GUI) startup code - including sychronous RI
*/
void init_timersys();

extern void adainit();
void timersys_inputmsg (void *pmy_into, size_t size_my_into);
extern void timersys_PI_inputmsg (const asn1SccT_Boolean *);
void timersys_sdltmr ();
extern void timersys_PI_sdltmr ();
#ifdef __cplusplus
}
#endif

#endif
