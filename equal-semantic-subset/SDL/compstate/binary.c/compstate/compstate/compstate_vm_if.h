/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef VM_IF_compstate
#define VM_IF_compstate

#ifdef __cplusplus
extern "C" {
#endif

#include "C_ASN1_Types.h"

/*
 * Function initialization:
 * Calls all dependent user (or GUI) startup code - including sychronous RI
*/
void init_compstate();

extern void adainit();
void compstate_switch_on (void *pmy_w, size_t size_my_w);
extern void compstate_PI_switch_on (const asn1SccMyString *);
void compstate_switch_off (void *pmy_w, size_t size_my_w);
extern void compstate_PI_switch_off (const asn1SccMyString *);
void compstate_restart (void *pmy_w, size_t size_my_w);
extern void compstate_PI_restart (const asn1SccMyString *);
void compstate_start_recording (void *pmy_w, size_t size_my_w);
extern void compstate_PI_start_recording (const asn1SccMyString *);
void compstate_pause (void *pmy_w, size_t size_my_w);
extern void compstate_PI_pause (const asn1SccMyString *);
void compstate_resume (void *pmy_w, size_t size_my_w);
extern void compstate_PI_resume (const asn1SccMyString *);
void compstate_stop_recording (void *pmy_w, size_t size_my_w);
extern void compstate_PI_stop_recording (const asn1SccMyString *);
void compstate_fail (void *pmy_w, size_t size_my_w);
extern void compstate_PI_fail (const asn1SccMyString *);
#ifdef __cplusplus
}
#endif

#endif
