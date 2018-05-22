/* This file was generated automatically: DO NOT MODIFY IT ! */

#include <stdlib.h>
#ifdef __unix__
#include <stdio.h>
#include "PrintTypesAsASN1.h"
#include "timeInMS.h"
#endif

#include "C_ASN1_Types.h"
#include "chip_timer_manager_polyorb_interface.h"

void chip_timer_manager_RI_coffee_tmr()
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        printf ("\nINNER: chip_timer_manager,coffee,coffee_tmr,%lld\n", msc_time);
        fflush(stdout);
    }
#endif


    /* Call to VM callback function */
    extern void vm_async_chip_timer_manager_coffee_tmr();

    vm_async_chip_timer_manager_coffee_tmr();

}

void chip_timer_manager_RI_coffee_tmr1()
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        printf ("\nINNER: chip_timer_manager,coffee,coffee_tmr1,%lld\n", msc_time);
        fflush(stdout);
    }
#endif


    /* Call to VM callback function */
    extern void vm_async_chip_timer_manager_coffee_tmr1();

    vm_async_chip_timer_manager_coffee_tmr1();

}

void chip_timer_manager_RI_coffee_tmr2()
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        printf ("\nINNER: chip_timer_manager,coffee,coffee_tmr2,%lld\n", msc_time);
        fflush(stdout);
    }
#endif


    /* Call to VM callback function */
    extern void vm_async_chip_timer_manager_coffee_tmr2();

    vm_async_chip_timer_manager_coffee_tmr2();

}

void chip_timer_manager_RI_coffee_tmr3()
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        printf ("\nINNER: chip_timer_manager,coffee,coffee_tmr3,%lld\n", msc_time);
        fflush(stdout);
    }
#endif


    /* Call to VM callback function */
    extern void vm_async_chip_timer_manager_coffee_tmr3();

    vm_async_chip_timer_manager_coffee_tmr3();

}

void chip_timer_manager_RI_check_queue(asn1SccT_Boolean *OUT_res)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        printf ("\nINNER: chip_timer_manager,chip_taste_api,check_queue,%lld\n", msc_time);
        fflush(stdout);
    }
#endif


    /* Buffer(s) for the output parameter(s) */
    static char OUT_buf_res[sizeof(asn1SccT_Boolean)];
    size_t size_OUT_buf_res=0;

    /* Call to VM callback function */
    extern void vm_chip_timer_manager_check_queue(void *, size_t *);

    vm_chip_timer_manager_check_queue(OUT_buf_res, &size_OUT_buf_res);

    /* Decode each output parameter */
    if (0 != Decode_NATIVE_T_Boolean(OUT_res, OUT_buf_res, size_OUT_buf_res)) {
#ifdef __unix__
        printf("\nError Decoding T_Boolean\n");
#endif
        return;
    }

}

