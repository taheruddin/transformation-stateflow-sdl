/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifdef __unix__
    #include <stdlib.h>
    #include <stdio.h>
#else
    typedef unsigned size_t;
#endif

#include "timersys_vm_if.h"

#include "C_ASN1_Types.h"

void init_timersys()
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

void timersys_inputmsg (void *pmy_into, size_t size_my_into)
{
    /* Decoded input variable(s): developer can use them */
    static asn1SccT_Boolean IN_into;

#ifdef __unix__
    asn1SccT_Boolean_Initialize(&IN_into);
#endif

    /* Decode each input parameter */
    if (0 != Decode_NATIVE_T_Boolean (&IN_into, pmy_into, size_my_into)) {
        #ifdef __unix__
            printf("\nError Decoding T_Boolean\n");
        #endif
        return;
    }

    /* Call to User-defined function */
    timersys_PI_inputmsg (&IN_into);

}
void timersys_sdltmr ()
{
    /* Call to User-defined function */
    timersys_PI_sdltmr ();

}
