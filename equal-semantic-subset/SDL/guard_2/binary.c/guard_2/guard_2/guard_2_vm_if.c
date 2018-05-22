/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifdef __unix__
    #include <stdlib.h>
    #include <stdio.h>
#else
    typedef unsigned size_t;
#endif

#include "guard_2_vm_if.h"

#include "C_ASN1_Types.h"

void init_guard_2()
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

void guard_2_e (void *pmy_imsg, size_t size_my_imsg)
{
    /* Decoded input variable(s): developer can use them */
    static asn1SccMyString IN_imsg;

#ifdef __unix__
    asn1SccMyString_Initialize(&IN_imsg);
#endif

    /* Decode each input parameter */
    if (0 != Decode_NATIVE_MyString (&IN_imsg, pmy_imsg, size_my_imsg)) {
        #ifdef __unix__
            printf("\nError Decoding MyString\n");
        #endif
        return;
    }

    /* Call to User-defined function */
    guard_2_PI_e (&IN_imsg);

}
