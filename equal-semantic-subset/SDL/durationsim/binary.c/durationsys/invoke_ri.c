/* This file was generated automatically: DO NOT MODIFY IT ! */

#include <stdlib.h>
#ifdef __unix__
#include <stdio.h>
#include "PrintTypesAsASN1.h"
#include "timeInMS.h"
#endif

#include "C_ASN1_Types.h"
#include "durationsys_polyorb_interface.h"

void durationsys_RI_outputmsg(const asn1SccMyString *IN_outmsg)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1MyString ("INNERDATA: outputmsg::MyString::outmsg", IN_outmsg);
        }
        printf ("\nINNER: durationsys,gui,outputmsg,%lld\n", msc_time);
        fflush(stdout);
    }
#endif

    /* Buffer(s) to put the encoded input parameter(s) */
    static char IN_buf_outmsg[sizeof(asn1SccMyString)] = {0};
    size_t size_IN_buf_outmsg=0;

    /* Encode each input parameter */
    size_IN_buf_outmsg = Encode_NATIVE_MyString(IN_buf_outmsg, sizeof(asn1SccMyString), IN_outmsg);
    if (-1 == size_IN_buf_outmsg) {
#ifdef __unix__
        printf ("** Encoding error in durationsys_RI_outputmsg!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_async_durationsys_outputmsg(void *, size_t);

    vm_async_durationsys_outputmsg(IN_buf_outmsg, size_IN_buf_outmsg);

}

void durationsys_RI_RESET_sdltmr()
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        printf ("\nINNER: durationsys,chip_timer_manager,RESET_sdltmr,%lld\n", msc_time);
        fflush(stdout);
    }
#endif


    /* Call to VM callback function */
    extern void vm_durationsys_RESET_sdltmr();

    vm_durationsys_RESET_sdltmr();

}

void durationsys_RI_SET_sdltmr(const asn1SccT_UInt32 *IN_duration)
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
        printf ("\nINNER: durationsys,chip_timer_manager,SET_sdltmr,%lld\n", msc_time);
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
        printf ("** Encoding error in durationsys_RI_SET_sdltmr!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_durationsys_SET_sdltmr(void *, size_t);

    vm_durationsys_SET_sdltmr(IN_buf_duration, size_IN_buf_duration);

}

void durationsys_RI_check_queue(asn1SccT_Boolean *OUT_res)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        printf ("\nINNER: durationsys,chip_taste_api,check_queue,%lld\n", msc_time);
        fflush(stdout);
    }
#endif


    /* Buffer(s) for the output parameter(s) */
    static char OUT_buf_res[sizeof(asn1SccT_Boolean)];
    size_t size_OUT_buf_res=0;

    /* Call to VM callback function */
    extern void vm_durationsys_check_queue(void *, size_t *);

    vm_durationsys_check_queue(OUT_buf_res, &size_OUT_buf_res);

    /* Decode each output parameter */
    if (0 != Decode_NATIVE_T_Boolean(OUT_res, OUT_buf_res, size_OUT_buf_res)) {
#ifdef __unix__
        printf("\nError Decoding T_Boolean\n");
#endif
        return;
    }

}

