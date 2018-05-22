/* This file was generated automatically: DO NOT MODIFY IT ! */

#include <stdlib.h>
#ifdef __unix__
#include <stdio.h>
#include "PrintTypesAsASN1.h"
#include "timeInMS.h"
#endif

#include "C_ASN1_Types.h"
#include "gui_polyorb_interface.h"

void gui_RI_switch_on(const asn1SccMyString *IN_w)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1MyString ("INNERDATA: switch_on::MyString::w", IN_w);
        }
        printf ("\nINNER: gui,compstate,switch_on,%lld\n", msc_time);
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
        printf ("** Encoding error in gui_RI_switch_on!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_async_gui_switch_on(void *, size_t);

    vm_async_gui_switch_on(IN_buf_w, size_IN_buf_w);

}

void gui_RI_switch_off(const asn1SccMyString *IN_w)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1MyString ("INNERDATA: switch_off::MyString::w", IN_w);
        }
        printf ("\nINNER: gui,compstate,switch_off,%lld\n", msc_time);
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
        printf ("** Encoding error in gui_RI_switch_off!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_async_gui_switch_off(void *, size_t);

    vm_async_gui_switch_off(IN_buf_w, size_IN_buf_w);

}

void gui_RI_restart(const asn1SccMyString *IN_w)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1MyString ("INNERDATA: restart::MyString::w", IN_w);
        }
        printf ("\nINNER: gui,compstate,restart,%lld\n", msc_time);
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
        printf ("** Encoding error in gui_RI_restart!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_async_gui_restart(void *, size_t);

    vm_async_gui_restart(IN_buf_w, size_IN_buf_w);

}

void gui_RI_start_recording(const asn1SccMyString *IN_w)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1MyString ("INNERDATA: start_recording::MyString::w", IN_w);
        }
        printf ("\nINNER: gui,compstate,start_recording,%lld\n", msc_time);
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
        printf ("** Encoding error in gui_RI_start_recording!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_async_gui_start_recording(void *, size_t);

    vm_async_gui_start_recording(IN_buf_w, size_IN_buf_w);

}

void gui_RI_pause(const asn1SccMyString *IN_w)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1MyString ("INNERDATA: pause::MyString::w", IN_w);
        }
        printf ("\nINNER: gui,compstate,pause,%lld\n", msc_time);
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
        printf ("** Encoding error in gui_RI_pause!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_async_gui_pause(void *, size_t);

    vm_async_gui_pause(IN_buf_w, size_IN_buf_w);

}

void gui_RI_resume(const asn1SccMyString *IN_w)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1MyString ("INNERDATA: resume::MyString::w", IN_w);
        }
        printf ("\nINNER: gui,compstate,resume,%lld\n", msc_time);
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
        printf ("** Encoding error in gui_RI_resume!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_async_gui_resume(void *, size_t);

    vm_async_gui_resume(IN_buf_w, size_IN_buf_w);

}

void gui_RI_fail(const asn1SccMyString *IN_w)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1MyString ("INNERDATA: fail::MyString::w", IN_w);
        }
        printf ("\nINNER: gui,compstate,fail,%lld\n", msc_time);
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
        printf ("** Encoding error in gui_RI_fail!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_async_gui_fail(void *, size_t);

    vm_async_gui_fail(IN_buf_w, size_IN_buf_w);

}

void gui_RI_stop_recording(const asn1SccMyString *IN_w)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1MyString ("INNERDATA: stop_recording::MyString::w", IN_w);
        }
        printf ("\nINNER: gui,compstate,stop_recording,%lld\n", msc_time);
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
        printf ("** Encoding error in gui_RI_stop_recording!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_async_gui_stop_recording(void *, size_t);

    vm_async_gui_stop_recording(IN_buf_w, size_IN_buf_w);

}

