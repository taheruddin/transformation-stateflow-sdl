/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifdef __unix__
    #include <stdlib.h>
    #include <stdio.h>
#else
    typedef unsigned size_t;
#endif

#include "durationsys_vm_if.h"

#include "C_ASN1_Types.h"

void init_durationsys()
{
    static int init = 0;

    if (!init) {
        init = 1;
        extern void init_chip_timer_manager();
        init_chip_timer_manager();
        extern void init_chip_timer_manager();
        init_chip_timer_manager();
        extern void init_chip_taste_api();
        init_chip_taste_api();
    }
    /* Calling Ada initialization code */
    adainit();
}

void durationsys_inputmsg (void *pmy_inmsg, size_t size_my_inmsg)
{
    /* Decoded input variable(s): developer can use them */
    static asn1SccT_Int32 IN_inmsg;

#ifdef __unix__
    asn1SccT_Int32_Initialize(&IN_inmsg);
#endif

    /* Decode each input parameter */
    if (0 != Decode_NATIVE_T_Int32 (&IN_inmsg, pmy_inmsg, size_my_inmsg)) {
        #ifdef __unix__
            printf("\nError Decoding T_Int32\n");
        #endif
        return;
    }

    /* Call to User-defined function */
    durationsys_PI_inputmsg (&IN_inmsg);

}
void durationsys_sdltmr ()
{
    /* Call to User-defined function */
    durationsys_PI_sdltmr ();

}
