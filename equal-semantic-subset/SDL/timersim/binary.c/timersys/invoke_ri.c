/* This file was generated automatically: DO NOT MODIFY IT ! */

#include <stdlib.h>
#ifdef __unix__
#include <stdio.h>
#include "PrintTypesAsASN1.h"
#include "timeInMS.h"
#endif

#include "C_ASN1_Types.h"
#include "timersys_polyorb_interface.h"

void timersys_RI_outputmsg(const asn1SccT_Boolean *IN_outgo)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1T_Boolean ("INNERDATA: outputmsg::T_Boolean::outgo", IN_outgo);
        }
        printf ("\nINNER: timersys,gui,outputmsg,%lld\n", msc_time);
        fflush(stdout);
    }
#endif

    /* Buffer(s) to put the encoded input parameter(s) */
    static char IN_buf_outgo[sizeof(asn1SccT_Boolean)] = {0};
    size_t size_IN_buf_outgo=0;

    /* Encode each input parameter */
    size_IN_buf_outgo = Encode_NATIVE_T_Boolean(IN_buf_outgo, sizeof(asn1SccT_Boolean), IN_outgo);
    if (-1 == size_IN_buf_outgo) {
#ifdef __unix__
        printf ("** Encoding error in timersys_RI_outputmsg!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_async_timersys_outputmsg(void *, size_t);

    vm_async_timersys_outputmsg(IN_buf_outgo, size_IN_buf_outgo);

}

void timersys_RI_RESET_sdltmr()
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        printf ("\nINNER: timersys,chip_timer_manager,RESET_sdltmr,%lld\n", msc_time);
        fflush(stdout);
    }
#endif


    /* Call to VM callback function */
    extern void vm_timersys_RESET_sdltmr();

    vm_timersys_RESET_sdltmr();

}

void timersys_RI_SET_sdltmr(const asn1SccT_UInt32 *IN_duration)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1T_UInt32 ("INNERDATA: SET_sdltmr::T_UInt32::duration", IN_duration);
        }
        printf ("\nINNER: timersys,chip_timer_manager,SET_sdltmr,%lld\n", msc_time);
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
        printf ("** Encoding error in timersys_RI_SET_sdltmr!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_timersys_SET_sdltmr(void *, size_t);

    vm_timersys_SET_sdltmr(IN_buf_duration, size_IN_buf_duration);

}

void timersys_RI_check_queue(asn1SccT_Boolean *OUT_res)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        printf ("\nINNER: timersys,chip_taste_api,check_queue,%lld\n", msc_time);
        fflush(stdout);
    }
#endif


    /* Buffer(s) for the output parameter(s) */
    static char OUT_buf_res[sizeof(asn1SccT_Boolean)];
    size_t size_OUT_buf_res=0;

    /* Call to VM callback function */
    extern void vm_timersys_check_queue(void *, size_t *);

    vm_timersys_check_queue(OUT_buf_res, &size_OUT_buf_res);

    /* Decode each output parameter */
    if (0 != Decode_NATIVE_T_Boolean(OUT_res, OUT_buf_res, size_OUT_buf_res)) {
#ifdef __unix__
        printf("\nError Decoding T_Boolean\n");
#endif
        return;
    }

}

