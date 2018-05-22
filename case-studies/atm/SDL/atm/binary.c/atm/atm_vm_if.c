/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifdef __unix__
    #include <stdlib.h>
    #include <stdio.h>
#else
    typedef unsigned size_t;
#endif

#include "atm_vm_if.h"

#include "C_ASN1_Types.h"

void init_atm()
{
    static int init = 0;

    if (!init) {
        init = 1;
        extern void init_chip_taste_api();
        init_chip_taste_api();
    }
    /* Calling Ada initialization code */
    adainit();
}

void atm_accept_card (void *pmy_account, size_t size_my_account)
{
    /* Decoded input variable(s): developer can use them */
    static asn1SccMyString IN_account;

#ifdef __unix__
    asn1SccMyString_Initialize(&IN_account);
#endif

    /* Decode each input parameter */
    if (0 != Decode_NATIVE_MyString (&IN_account, pmy_account, size_my_account)) {
        #ifdef __unix__
            printf("\nError Decoding MyString\n");
        #endif
        return;
    }

    /* Call to User-defined function */
    atm_PI_accept_card (&IN_account);

}
void atm_reject_transaction (void *pmy_w, size_t size_my_w)
{
    /* Decoded input variable(s): developer can use them */
    static asn1SccMyString IN_w;

#ifdef __unix__
    asn1SccMyString_Initialize(&IN_w);
#endif

    /* Decode each input parameter */
    if (0 != Decode_NATIVE_MyString (&IN_w, pmy_w, size_my_w)) {
        #ifdef __unix__
            printf("\nError Decoding MyString\n");
        #endif
        return;
    }

    /* Call to User-defined function */
    atm_PI_reject_transaction (&IN_w);

}
void atm_out_of_service (void *pmy_w, size_t size_my_w)
{
    /* Decoded input variable(s): developer can use them */
    static asn1SccMyString IN_w;

#ifdef __unix__
    asn1SccMyString_Initialize(&IN_w);
#endif

    /* Decode each input parameter */
    if (0 != Decode_NATIVE_MyString (&IN_w, pmy_w, size_my_w)) {
        #ifdef __unix__
            printf("\nError Decoding MyString\n");
        #endif
        return;
    }

    /* Call to User-defined function */
    atm_PI_out_of_service (&IN_w);

}
void atm_abort_out (void *pmy_w, size_t size_my_w)
{
    /* Decoded input variable(s): developer can use them */
    static asn1SccMyString IN_w;

#ifdef __unix__
    asn1SccMyString_Initialize(&IN_w);
#endif

    /* Decode each input parameter */
    if (0 != Decode_NATIVE_MyString (&IN_w, pmy_w, size_my_w)) {
        #ifdef __unix__
            printf("\nError Decoding MyString\n");
        #endif
        return;
    }

    /* Call to User-defined function */
    atm_PI_abort_out (&IN_w);

}
void atm_amount (void *pmy_amount, size_t size_my_amount)
{
    /* Decoded input variable(s): developer can use them */
    static asn1SccAmount IN_amount;

#ifdef __unix__
    asn1SccAmount_Initialize(&IN_amount);
#endif

    /* Decode each input parameter */
    if (0 != Decode_NATIVE_Amount (&IN_amount, pmy_amount, size_my_amount)) {
        #ifdef __unix__
            printf("\nError Decoding Amount\n");
        #endif
        return;
    }

    /* Call to User-defined function */
    atm_PI_amount (&IN_amount);

}
void atm_other_amount (void *pmy_w, size_t size_my_w)
{
    /* Decoded input variable(s): developer can use them */
    static asn1SccMyString IN_w;

#ifdef __unix__
    asn1SccMyString_Initialize(&IN_w);
#endif

    /* Decode each input parameter */
    if (0 != Decode_NATIVE_MyString (&IN_w, pmy_w, size_my_w)) {
        #ifdef __unix__
            printf("\nError Decoding MyString\n");
        #endif
        return;
    }

    /* Call to User-defined function */
    atm_PI_other_amount (&IN_w);

}
void atm_digit (void *pmy_num, size_t size_my_num)
{
    /* Decoded input variable(s): developer can use them */
    static asn1SccNum IN_num;

#ifdef __unix__
    asn1SccNum_Initialize(&IN_num);
#endif

    /* Decode each input parameter */
    if (0 != Decode_NATIVE_Num (&IN_num, pmy_num, size_my_num)) {
        #ifdef __unix__
            printf("\nError Decoding Num\n");
        #endif
        return;
    }

    /* Call to User-defined function */
    atm_PI_digit (&IN_num);

}
void atm_ok (void *pmy_w, size_t size_my_w)
{
    /* Decoded input variable(s): developer can use them */
    static asn1SccMyString IN_w;

#ifdef __unix__
    asn1SccMyString_Initialize(&IN_w);
#endif

    /* Decode each input parameter */
    if (0 != Decode_NATIVE_MyString (&IN_w, pmy_w, size_my_w)) {
        #ifdef __unix__
            printf("\nError Decoding MyString\n");
        #endif
        return;
    }

    /* Call to User-defined function */
    atm_PI_ok (&IN_w);

}
void atm_transaction_succeseeded (void *pmy_w, size_t size_my_w)
{
    /* Decoded input variable(s): developer can use them */
    static asn1SccMyString IN_w;

#ifdef __unix__
    asn1SccMyString_Initialize(&IN_w);
#endif

    /* Decode each input parameter */
    if (0 != Decode_NATIVE_MyString (&IN_w, pmy_w, size_my_w)) {
        #ifdef __unix__
            printf("\nError Decoding MyString\n");
        #endif
        return;
    }

    /* Call to User-defined function */
    atm_PI_transaction_succeseeded (&IN_w);

}
