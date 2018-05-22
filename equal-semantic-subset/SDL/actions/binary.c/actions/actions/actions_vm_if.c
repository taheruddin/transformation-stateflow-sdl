/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifdef __unix__
    #include <stdlib.h>
    #include <stdio.h>
#else
    typedef unsigned size_t;
#endif

#include "actions_vm_if.h"

#include "C_ASN1_Types.h"

void init_actions()
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

void actions_push (void *pmy_w, size_t size_my_w)
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
    actions_PI_push (&IN_w);

}
void actions_tap (void *pmy_w, size_t size_my_w)
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
    actions_PI_tap (&IN_w);

}
