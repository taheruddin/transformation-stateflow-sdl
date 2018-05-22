/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifdef __unix__
    #include <stdlib.h>
    #include <stdio.h>
#else
    typedef unsigned size_t;
#endif

#include "guard_1_vm_if.h"

#include "C_ASN1_Types.h"

void init_guard_1()
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

void guard_1_get_data (void *pmy_x, size_t size_my_x)
{
    /* Decoded input variable(s): developer can use them */
    static asn1SccMyReal IN_x;

#ifdef __unix__
    asn1SccMyReal_Initialize(&IN_x);
#endif

    /* Decode each input parameter */
    if (0 != Decode_NATIVE_MyReal (&IN_x, pmy_x, size_my_x)) {
        #ifdef __unix__
            printf("\nError Decoding MyReal\n");
        #endif
        return;
    }

    /* Call to User-defined function */
    guard_1_PI_get_data (&IN_x);

}
void guard_1_check (void *pmy_whatever, size_t size_my_whatever)
{
    /* Decoded input variable(s): developer can use them */
    static asn1SccMyString IN_whatever;

#ifdef __unix__
    asn1SccMyString_Initialize(&IN_whatever);
#endif

    /* Decode each input parameter */
    if (0 != Decode_NATIVE_MyString (&IN_whatever, pmy_whatever, size_my_whatever)) {
        #ifdef __unix__
            printf("\nError Decoding MyString\n");
        #endif
        return;
    }

    /* Call to User-defined function */
    guard_1_PI_check (&IN_whatever);

}
