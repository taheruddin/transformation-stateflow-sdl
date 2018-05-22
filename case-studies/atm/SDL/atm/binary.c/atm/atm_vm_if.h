/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef VM_IF_atm
#define VM_IF_atm

#ifdef __cplusplus
extern "C" {
#endif

#include "C_ASN1_Types.h"

/*
 * Function initialization:
 * Calls all dependent user (or GUI) startup code - including sychronous RI
*/
void init_atm();

extern void adainit();
void atm_accept_card (void *pmy_account, size_t size_my_account);
extern void atm_PI_accept_card (const asn1SccMyString *);
void atm_reject_transaction (void *pmy_w, size_t size_my_w);
extern void atm_PI_reject_transaction (const asn1SccMyString *);
void atm_out_of_service (void *pmy_w, size_t size_my_w);
extern void atm_PI_out_of_service (const asn1SccMyString *);
void atm_abort_out (void *pmy_w, size_t size_my_w);
extern void atm_PI_abort_out (const asn1SccMyString *);
void atm_amount (void *pmy_amount, size_t size_my_amount);
extern void atm_PI_amount (const asn1SccAmount *);
void atm_other_amount (void *pmy_w, size_t size_my_w);
extern void atm_PI_other_amount (const asn1SccMyString *);
void atm_digit (void *pmy_num, size_t size_my_num);
extern void atm_PI_digit (const asn1SccNum *);
void atm_ok (void *pmy_w, size_t size_my_w);
extern void atm_PI_ok (const asn1SccMyString *);
void atm_transaction_succeseeded (void *pmy_w, size_t size_my_w);
extern void atm_PI_transaction_succeseeded (const asn1SccMyString *);
#ifdef __cplusplus
}
#endif

#endif
