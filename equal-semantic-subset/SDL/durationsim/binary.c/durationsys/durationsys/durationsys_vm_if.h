/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef VM_IF_durationsys
#define VM_IF_durationsys

#ifdef __cplusplus
extern "C" {
#endif

#include "C_ASN1_Types.h"

/*
 * Function initialization:
 * Calls all dependent user (or GUI) startup code - including sychronous RI
*/
void init_durationsys();

extern void adainit();
void durationsys_inputmsg (void *pmy_inmsg, size_t size_my_inmsg);
extern void durationsys_PI_inputmsg (const asn1SccT_Int32 *);
void durationsys_sdltmr ();
extern void durationsys_PI_sdltmr ();
#ifdef __cplusplus
}
#endif

#endif
