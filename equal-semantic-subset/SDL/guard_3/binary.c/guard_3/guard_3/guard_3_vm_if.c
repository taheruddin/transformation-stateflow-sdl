/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifdef __unix__
    #include <stdlib.h>
    #include <stdio.h>
#else
    typedef unsigned size_t;
#endif

#include "guard_3_vm_if.h"

#include "C_ASN1_Types.h"

void init_guard_3()
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

void guard_3_e (void *pmy_x, size_t size_my_x)
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
    guard_3_PI_e (&IN_x);

}
