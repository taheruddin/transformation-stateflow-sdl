/* This file was generated automatically: DO NOT MODIFY IT ! */

#include <stdlib.h>
#ifdef __unix__
#include <stdio.h>
#include "PrintTypesAsASN1.h"
#include "timeInMS.h"
#endif

#include "C_ASN1_Types.h"
#include "coffee_polyorb_interface.h"

void coffee_RI_out_msg(const asn1SccMyString *IN_msg)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1MyString ("INNERDATA: out_msg::MyString::msg", IN_msg);
        }
        printf ("\nINNER: coffee,gui,out_msg,%lld\n", msc_time);
        fflush(stdout);
    }
#endif

    /* Buffer(s) to put the encoded input parameter(s) */
    static char IN_buf_msg[sizeof(asn1SccMyString)] = {0};
    size_t size_IN_buf_msg=0;

    /* Encode each input parameter */
    size_IN_buf_msg = Encode_NATIVE_MyString(IN_buf_msg, sizeof(asn1SccMyString), IN_msg);
    if (-1 == size_IN_buf_msg) {
#ifdef __unix__
        printf ("** Encoding error in coffee_RI_out_msg!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_async_coffee_out_msg(void *, size_t);

    vm_async_coffee_out_msg(IN_buf_msg, size_IN_buf_msg);

}

void coffee_RI_RESET_tmr()
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        printf ("\nINNER: coffee,chip_timer_manager,RESET_tmr,%lld\n", msc_time);
        fflush(stdout);
    }
#endif


    /* Call to VM callback function */
    extern void vm_coffee_RESET_tmr();

    vm_coffee_RESET_tmr();

}

void coffee_RI_SET_tmr(const asn1SccT_UInt32 *IN_duration)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1T_UInt32 ("INNERDATA: SET_tmr::T_UInt32::duration", IN_duration);
        }
        printf ("\nINNER: coffee,chip_timer_manager,SET_tmr,%lld\n", msc_time);
        fflush(stdout);
    }
#endif

    /* Buffer(s) to put the encoded input parameter(s) */
    static char IN_buf_duration[sizeof(asn1SccT_UInt32)] = {0};
    size_t size_IN_buf_duration=0;

    /* Encode each input parameter */
    size_IN_buf_duration = Encode_NATIVE_T_UInt32(IN_buf_duration, sizeof(asn1SccT_UInt32), IN_duration);
    if (-1 == size_IN_buf_duration) {
#ifdef __unix__
        printf ("** Encoding error in coffee_RI_SET_tmr!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_coffee_SET_tmr(void *, size_t);

    vm_coffee_SET_tmr(IN_buf_duration, size_IN_buf_duration);

}

void coffee_RI_RESET_tmr1()
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        printf ("\nINNER: coffee,chip_timer_manager,RESET_tmr1,%lld\n", msc_time);
        fflush(stdout);
    }
#endif


    /* Call to VM callback function */
    extern void vm_coffee_RESET_tmr1();

    vm_coffee_RESET_tmr1();

}

void coffee_RI_SET_tmr1(const asn1SccT_UInt32 *IN_duration)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1T_UInt32 ("INNERDATA: SET_tmr1::T_UInt32::duration", IN_duration);
        }
        printf ("\nINNER: coffee,chip_timer_manager,SET_tmr1,%lld\n", msc_time);
        fflush(stdout);
    }
#endif

    /* Buffer(s) to put the encoded input parameter(s) */
    static char IN_buf_duration[sizeof(asn1SccT_UInt32)] = {0};
    size_t size_IN_buf_duration=0;

    /* Encode each input parameter */
    size_IN_buf_duration = Encode_NATIVE_T_UInt32(IN_buf_duration, sizeof(asn1SccT_UInt32), IN_duration);
    if (-1 == size_IN_buf_duration) {
#ifdef __unix__
        printf ("** Encoding error in coffee_RI_SET_tmr1!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_coffee_SET_tmr1(void *, size_t);

    vm_coffee_SET_tmr1(IN_buf_duration, size_IN_buf_duration);

}

void coffee_RI_RESET_tmr2()
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        printf ("\nINNER: coffee,chip_timer_manager,RESET_tmr2,%lld\n", msc_time);
        fflush(stdout);
    }
#endif


    /* Call to VM callback function */
    extern void vm_coffee_RESET_tmr2();

    vm_coffee_RESET_tmr2();

}

void coffee_RI_SET_tmr2(const asn1SccT_UInt32 *IN_duration)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1T_UInt32 ("INNERDATA: SET_tmr2::T_UInt32::duration", IN_duration);
        }
        printf ("\nINNER: coffee,chip_timer_manager,SET_tmr2,%lld\n", msc_time);
        fflush(stdout);
    }
#endif

    /* Buffer(s) to put the encoded input parameter(s) */
    static char IN_buf_duration[sizeof(asn1SccT_UInt32)] = {0};
    size_t size_IN_buf_duration=0;

    /* Encode each input parameter */
    size_IN_buf_duration = Encode_NATIVE_T_UInt32(IN_buf_duration, sizeof(asn1SccT_UInt32), IN_duration);
    if (-1 == size_IN_buf_duration) {
#ifdef __unix__
        printf ("** Encoding error in coffee_RI_SET_tmr2!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_coffee_SET_tmr2(void *, size_t);

    vm_coffee_SET_tmr2(IN_buf_duration, size_IN_buf_duration);

}

void coffee_RI_RESET_tmr3()
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        printf ("\nINNER: coffee,chip_timer_manager,RESET_tmr3,%lld\n", msc_time);
        fflush(stdout);
    }
#endif


    /* Call to VM callback function */
    extern void vm_coffee_RESET_tmr3();

    vm_coffee_RESET_tmr3();

}

void coffee_RI_SET_tmr3(const asn1SccT_UInt32 *IN_duration)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1T_UInt32 ("INNERDATA: SET_tmr3::T_UInt32::duration", IN_duration);
        }
        printf ("\nINNER: coffee,chip_timer_manager,SET_tmr3,%lld\n", msc_time);
        fflush(stdout);
    }
#endif

    /* Buffer(s) to put the encoded input parameter(s) */
    static char IN_buf_duration[sizeof(asn1SccT_UInt32)] = {0};
    size_t size_IN_buf_duration=0;

    /* Encode each input parameter */
    size_IN_buf_duration = Encode_NATIVE_T_UInt32(IN_buf_duration, sizeof(asn1SccT_UInt32), IN_duration);
    if (-1 == size_IN_buf_duration) {
#ifdef __unix__
        printf ("** Encoding error in coffee_RI_SET_tmr3!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_coffee_SET_tmr3(void *, size_t);

    vm_coffee_SET_tmr3(IN_buf_duration, size_IN_buf_duration);

}

void coffee_RI_check_queue(asn1SccT_Boolean *OUT_res)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        printf ("\nINNER: coffee,chip_taste_api,check_queue,%lld\n", msc_time);
        fflush(stdout);
    }
#endif


    /* Buffer(s) for the output parameter(s) */
    static char OUT_buf_res[sizeof(asn1SccT_Boolean)];
    size_t size_OUT_buf_res=0;

    /* Call to VM callback function */
    extern void vm_coffee_check_queue(void *, size_t *);

    vm_coffee_check_queue(OUT_buf_res, &size_OUT_buf_res);

    /* Decode each output parameter */
    if (0 != Decode_NATIVE_T_Boolean(OUT_res, OUT_buf_res, size_OUT_buf_res)) {
#ifdef __unix__
        printf("\nError Decoding T_Boolean\n");
#endif
        return;
    }

}

