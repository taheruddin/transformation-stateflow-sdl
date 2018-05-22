/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifdef __unix__
    #include <stdlib.h>
    #include <stdio.h>
#else
    typedef unsigned size_t;
#endif

#include "initsys_vm_if.h"

#include "C_ASN1_Types.h"

void init_initsys()
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

void initsys_inmsg (void *pmy_whatever, size_t size_my_whatever)
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
    initsys_PI_inmsg (&IN_whatever);

}
