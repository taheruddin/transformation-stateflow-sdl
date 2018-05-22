/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifdef __unix__
    #include <stdlib.h>
    #include <stdio.h>
#else
    typedef unsigned size_t;
#endif

#include "coffee_vm_if.h"

#include "C_ASN1_Types.h"

void init_coffee()
{
    static int init = 0;

    if (!init) {
        init = 1;
        extern void init_chip_timer_manager();
        init_chip_timer_manager();
        extern void init_chip_timer_manager();
        init_chip_timer_manager();
        extern void init_chip_timer_manager();
        init_chip_timer_manager();
        extern void init_chip_timer_manager();
        init_chip_timer_manager();
        extern void init_chip_timer_manager();
        init_chip_timer_manager();
        extern void init_chip_timer_manager();
        init_chip_timer_manager();
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

void coffee_get_init_tmpr (void *pmy_init_tmpr, size_t size_my_init_tmpr)
{
    /* Decoded input variable(s): developer can use them */
    static asn1SccT_Int32 IN_init_tmpr;

#ifdef __unix__
    asn1SccT_Int32_Initialize(&IN_init_tmpr);
#endif

    /* Decode each input parameter */
    if (0 != Decode_NATIVE_T_Int32 (&IN_init_tmpr, pmy_init_tmpr, size_my_init_tmpr)) {
        #ifdef __unix__
            printf("\nError Decoding T_Int32\n");
        #endif
        return;
    }

    /* Call to User-defined function */
    coffee_PI_get_init_tmpr (&IN_init_tmpr);

}
void coffee_get_init_water (void *pmy_init_water, size_t size_my_init_water)
{
    /* Decoded input variable(s): developer can use them */
    static asn1SccT_Int32 IN_init_water;

#ifdef __unix__
    asn1SccT_Int32_Initialize(&IN_init_water);
#endif

    /* Decode each input parameter */
    if (0 != Decode_NATIVE_T_Int32 (&IN_init_water, pmy_init_water, size_my_init_water)) {
        #ifdef __unix__
            printf("\nError Decoding T_Int32\n");
        #endif
        return;
    }

    /* Call to User-defined function */
    coffee_PI_get_init_water (&IN_init_water);

}
void coffee_for_water (void *pmy_w, size_t size_my_w)
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
    coffee_PI_for_water (&IN_w);

}
void coffee_for_water_tmpr (void *pmy_w, size_t size_my_w)
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
    coffee_PI_for_water_tmpr (&IN_w);

}
void coffee_for_coffee (void *pmy_w, size_t size_my_w)
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
    coffee_PI_for_coffee (&IN_w);

}
void coffee_for_ticking (void *pmy_w, size_t size_my_w)
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
    coffee_PI_for_ticking (&IN_w);

}
void coffee_tmr ()
{
    /* Call to User-defined function */
    coffee_PI_tmr ();

}
void coffee_tmr1 ()
{
    /* Call to User-defined function */
    coffee_PI_tmr1 ();

}
void coffee_tmr2 ()
{
    /* Call to User-defined function */
    coffee_PI_tmr2 ();

}
void coffee_tmr3 ()
{
    /* Call to User-defined function */
    coffee_PI_tmr3 ();

}
