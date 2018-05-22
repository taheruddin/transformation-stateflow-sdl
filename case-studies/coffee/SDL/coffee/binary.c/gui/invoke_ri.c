/* This file was generated automatically: DO NOT MODIFY IT ! */

#include <stdlib.h>
#ifdef __unix__
#include <stdio.h>
#include "PrintTypesAsASN1.h"
#include "timeInMS.h"
#endif

#include "C_ASN1_Types.h"
#include "gui_polyorb_interface.h"

void gui_RI_get_init_tmpr(const asn1SccT_Int32 *IN_init_tmpr)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1T_Int32 ("INNERDATA: get_init_tmpr::T_Int32::init_tmpr", IN_init_tmpr);
        }
        printf ("\nINNER: gui,coffee,get_init_tmpr,%lld\n", msc_time);
        fflush(stdout);
    }
#endif

    /* Buffer(s) to put the encoded input parameter(s) */
    static char IN_buf_init_tmpr[sizeof(asn1SccT_Int32)] = {0};
    size_t size_IN_buf_init_tmpr=0;

    /* Encode each input parameter */
    size_IN_buf_init_tmpr = Encode_NATIVE_T_Int32(IN_buf_init_tmpr, sizeof(asn1SccT_Int32), IN_init_tmpr);
    if (-1 == size_IN_buf_init_tmpr) {
#ifdef __unix__
        printf ("** Encoding error in gui_RI_get_init_tmpr!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_async_gui_get_init_tmpr(void *, size_t);

    vm_async_gui_get_init_tmpr(IN_buf_init_tmpr, size_IN_buf_init_tmpr);

}

void gui_RI_get_init_water(const asn1SccT_Int32 *IN_init_water)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1T_Int32 ("INNERDATA: get_init_water::T_Int32::init_water", IN_init_water);
        }
        printf ("\nINNER: gui,coffee,get_init_water,%lld\n", msc_time);
        fflush(stdout);
    }
#endif

    /* Buffer(s) to put the encoded input parameter(s) */
    static char IN_buf_init_water[sizeof(asn1SccT_Int32)] = {0};
    size_t size_IN_buf_init_water=0;

    /* Encode each input parameter */
    size_IN_buf_init_water = Encode_NATIVE_T_Int32(IN_buf_init_water, sizeof(asn1SccT_Int32), IN_init_water);
    if (-1 == size_IN_buf_init_water) {
#ifdef __unix__
        printf ("** Encoding error in gui_RI_get_init_water!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_async_gui_get_init_water(void *, size_t);

    vm_async_gui_get_init_water(IN_buf_init_water, size_IN_buf_init_water);

}

void gui_RI_for_water(const asn1SccMyString *IN_w)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1MyString ("INNERDATA: for_water::MyString::w", IN_w);
        }
        printf ("\nINNER: gui,coffee,for_water,%lld\n", msc_time);
        fflush(stdout);
    }
#endif

    /* Buffer(s) to put the encoded input parameter(s) */
    static char IN_buf_w[sizeof(asn1SccMyString)] = {0};
    size_t size_IN_buf_w=0;

    /* Encode each input parameter */
    size_IN_buf_w = Encode_NATIVE_MyString(IN_buf_w, sizeof(asn1SccMyString), IN_w);
    if (-1 == size_IN_buf_w) {
#ifdef __unix__
        printf ("** Encoding error in gui_RI_for_water!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_async_gui_for_water(void *, size_t);

    vm_async_gui_for_water(IN_buf_w, size_IN_buf_w);

}

void gui_RI_for_water_tmpr(const asn1SccMyString *IN_w)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1MyString ("INNERDATA: for_water_tmpr::MyString::w", IN_w);
        }
        printf ("\nINNER: gui,coffee,for_water_tmpr,%lld\n", msc_time);
        fflush(stdout);
    }
#endif

    /* Buffer(s) to put the encoded input parameter(s) */
    static char IN_buf_w[sizeof(asn1SccMyString)] = {0};
    size_t size_IN_buf_w=0;

    /* Encode each input parameter */
    size_IN_buf_w = Encode_NATIVE_MyString(IN_buf_w, sizeof(asn1SccMyString), IN_w);
    if (-1 == size_IN_buf_w) {
#ifdef __unix__
        printf ("** Encoding error in gui_RI_for_water_tmpr!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_async_gui_for_water_tmpr(void *, size_t);

    vm_async_gui_for_water_tmpr(IN_buf_w, size_IN_buf_w);

}

void gui_RI_for_coffee(const asn1SccMyString *IN_w)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1MyString ("INNERDATA: for_coffee::MyString::w", IN_w);
        }
        printf ("\nINNER: gui,coffee,for_coffee,%lld\n", msc_time);
        fflush(stdout);
    }
#endif

    /* Buffer(s) to put the encoded input parameter(s) */
    static char IN_buf_w[sizeof(asn1SccMyString)] = {0};
    size_t size_IN_buf_w=0;

    /* Encode each input parameter */
    size_IN_buf_w = Encode_NATIVE_MyString(IN_buf_w, sizeof(asn1SccMyString), IN_w);
    if (-1 == size_IN_buf_w) {
#ifdef __unix__
        printf ("** Encoding error in gui_RI_for_coffee!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_async_gui_for_coffee(void *, size_t);

    vm_async_gui_for_coffee(IN_buf_w, size_IN_buf_w);

}

void gui_RI_for_ticking(const asn1SccMyString *IN_w)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1MyString ("INNERDATA: for_ticking::MyString::w", IN_w);
        }
        printf ("\nINNER: gui,coffee,for_ticking,%lld\n", msc_time);
        fflush(stdout);
    }
#endif

    /* Buffer(s) to put the encoded input parameter(s) */
    static char IN_buf_w[sizeof(asn1SccMyString)] = {0};
    size_t size_IN_buf_w=0;

    /* Encode each input parameter */
    size_IN_buf_w = Encode_NATIVE_MyString(IN_buf_w, sizeof(asn1SccMyString), IN_w);
    if (-1 == size_IN_buf_w) {
#ifdef __unix__
        printf ("** Encoding error in gui_RI_for_ticking!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_async_gui_for_ticking(void *, size_t);

    vm_async_gui_for_ticking(IN_buf_w, size_IN_buf_w);

}

