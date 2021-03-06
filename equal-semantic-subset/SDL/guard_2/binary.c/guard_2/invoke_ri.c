/* This file was generated automatically: DO NOT MODIFY IT ! */

#include <stdlib.h>
#ifdef __unix__
#include <stdio.h>
#include "PrintTypesAsASN1.h"
#include "timeInMS.h"
#endif

#include "C_ASN1_Types.h"
#include "guard_2_polyorb_interface.h"

void guard_2_RI_out_msg(const asn1SccMyString *IN_omsg)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1MyString ("INNERDATA: out_msg::MyString::omsg", IN_omsg);
        }
        printf ("\nINNER: guard_2,gui,out_msg,%lld\n", msc_time);
        fflush(stdout);
    }
#endif

    /* Buffer(s) to put the encoded input parameter(s) */
    static char IN_buf_omsg[sizeof(asn1SccMyString)] = {0};
    size_t size_IN_buf_omsg=0;

    /* Encode each input parameter */
    size_IN_buf_omsg = Encode_NATIVE_MyString(IN_buf_omsg, sizeof(asn1SccMyString), IN_omsg);
    if (-1 == size_IN_buf_omsg) {
#ifdef __unix__
        printf ("** Encoding error in guard_2_RI_out_msg!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_async_guard_2_out_msg(void *, size_t);

    vm_async_guard_2_out_msg(IN_buf_omsg, size_IN_buf_omsg);

}

void guard_2_RI_check_queue(asn1SccT_Boolean *OUT_res)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        printf ("\nINNER: guard_2,chip_taste_api,check_queue,%lld\n", msc_time);
        fflush(stdout);
    }
#endif


    /* Buffer(s) for the output parameter(s) */
    static char OUT_buf_res[sizeof(asn1SccT_Boolean)];
    size_t size_OUT_buf_res=0;

    /* Call to VM callback function */
    extern void vm_guard_2_check_queue(void *, size_t *);

    vm_guard_2_check_queue(OUT_buf_res, &size_OUT_buf_res);

    /* Decode each output parameter */
    if (0 != Decode_NATIVE_T_Boolean(OUT_res, OUT_buf_res, size_OUT_buf_res)) {
#ifdef __unix__
        printf("\nError Decoding T_Boolean\n");
#endif
        return;
    }

}

