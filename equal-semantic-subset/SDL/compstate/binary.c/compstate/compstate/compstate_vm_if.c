/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifdef __unix__
    #include <stdlib.h>
    #include <stdio.h>
#else
    typedef unsigned size_t;
#endif

#include "compstate_vm_if.h"

#include "C_ASN1_Types.h"

void init_compstate()
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

void compstate_switch_on (void *pmy_w, size_t size_my_w)
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
    compstate_PI_switch_on (&IN_w);

}
void compstate_switch_off (void *pmy_w, size_t size_my_w)
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
    compstate_PI_switch_off (&IN_w);

}
void compstate_restart (void *pmy_w, size_t size_my_w)
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
    compstate_PI_restart (&IN_w);

}
void compstate_start_recording (void *pmy_w, size_t size_my_w)
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
    compstate_PI_start_recording (&IN_w);

}
void compstate_pause (void *pmy_w, size_t size_my_w)
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
    compstate_PI_pause (&IN_w);

}
void compstate_resume (void *pmy_w, size_t size_my_w)
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
    compstate_PI_resume (&IN_w);

}
void compstate_stop_recording (void *pmy_w, size_t size_my_w)
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
    compstate_PI_stop_recording (&IN_w);

}
void compstate_fail (void *pmy_w, size_t size_my_w)
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
    compstate_PI_fail (&IN_w);

}
