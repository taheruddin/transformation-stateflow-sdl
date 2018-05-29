/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifdef __unix__
    #include <stdlib.h>
    #include <stdio.h>
#else
    typedef unsigned size_t;
#endif

#include "chip_timer_manager_vm_if.h"

#include "chip_timer_manager.h"

#include "C_ASN1_Types.h"

void init_chip_timer_manager()
{
    static int init = 0;

    if (!init) {
        init = 1;
        chip_timer_manager_startup();
        extern void init_chip_taste_api();
        init_chip_taste_api();
    }
}

void chip_timer_manager_tick_100ms ()
{
    /* Call to User-defined function */
    chip_timer_manager_PI_tick_100ms ();

}
void chip_timer_manager_timersys_RESET_sdltmr ()
{
    /* Call to User-defined function */
    chip_timer_manager_PI_timersys_RESET_sdltmr ();

}
void chip_timer_manager_timersys_SET_sdltmr (void *pmy_duration, size_t size_my_duration)
{
    /* Decoded input variable(s): developer can use them */
    static asn1SccT_UInt32 IN_duration;

#ifdef __unix__
    asn1SccT_UInt32_Initialize(&IN_duration);
#endif

    /* Decode each input parameter */
    if (0 != Decode_NATIVE_T_UInt32 (&IN_duration, pmy_duration, size_my_duration)) {
        #ifdef __unix__
            printf("\nError Decoding T_UInt32\n");
        #endif
        return;
    }

    /* Call to User-defined function */
    chip_timer_manager_PI_timersys_SET_sdltmr (&IN_duration);

}
