/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifdef __unix__
    #include <stdlib.h>
    #include <stdio.h>
#else
    typedef unsigned size_t;
#endif

#include "functions_vm_if.h"

#include "C_ASN1_Types.h"

void init_functions()
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

void functions_e (void *pmy_x, size_t size_my_x)
{
    /* Decoded input variable(s): developer can use them */
    static asn1SccT_Int32 IN_x;

#ifdef __unix__
    asn1SccT_Int32_Initialize(&IN_x);
#endif

    /* Decode each input parameter */
    if (0 != Decode_NATIVE_T_Int32 (&IN_x, pmy_x, size_my_x)) {
        #ifdef __unix__
            printf("\nError Decoding T_Int32\n");
        #endif
        return;
    }

    /* Call to User-defined function */
    functions_PI_e (&IN_x);

}
