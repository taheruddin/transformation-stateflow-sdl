/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef VM_IF_initsys
#define VM_IF_initsys

#ifdef __cplusplus
extern "C" {
#endif

#include "C_ASN1_Types.h"

/*
 * Function initialization:
 * Calls all dependent user (or GUI) startup code - including sychronous RI
*/
void init_initsys();

extern void adainit();
void initsys_inmsg (void *pmy_whatever, size_t size_my_whatever);
extern void initsys_PI_inmsg (const asn1SccMyString *);
#ifdef __cplusplus
}
#endif

#endif
