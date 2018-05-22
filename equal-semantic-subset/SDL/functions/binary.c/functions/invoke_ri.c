/* This file was generated automatically: DO NOT MODIFY IT ! */

#include <stdlib.h>
#ifdef __unix__
#include <stdio.h>
#include "PrintTypesAsASN1.h"
#include "timeInMS.h"
#endif

#include "C_ASN1_Types.h"
#include "functions_polyorb_interface.h"

void functions_RI_out_msg(const asn1SccT_Int32 *IN_y)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1T_Int32 ("INNERDATA: out_msg::T_Int32::y", IN_y);
        }
        printf ("\nINNER: functions,gui,out_msg,%lld\n", msc_time);
        fflush(stdout);
    }
#endif

    /* Buffer(s) to put the encoded input parameter(s) */
    static char IN_buf_y[sizeof(asn1SccT_Int32)] = {0};
    size_t size_IN_buf_y=0;

    /* Encode each input parameter */
    size_IN_buf_y = Encode_NATIVE_T_Int32(IN_buf_y, sizeof(asn1SccT_Int32), IN_y);
    if (-1 == size_IN_buf_y) {
#ifdef __unix__
        printf ("** Encoding error in functions_RI_out_msg!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_async_functions_out_msg(void *, size_t);

    vm_async_functions_out_msg(IN_buf_y, size_IN_buf_y);

}

void functions_RI_check_queue(asn1SccT_Boolean *OUT_res)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        printf ("\nINNER: functions,chip_taste_api,check_queue,%lld\n", msc_time);
        fflush(stdout);
    }
#endif


    /* Buffer(s) for the output parameter(s) */
    static char OUT_buf_res[sizeof(asn1SccT_Boolean)];
    size_t size_OUT_buf_res=0;

    /* Call to VM callback function */
    extern void vm_functions_check_queue(void *, size_t *);

    vm_functions_check_queue(OUT_buf_res, &size_OUT_buf_res);

    /* Decode each output parameter */
    if (0 != Decode_NATIVE_T_Boolean(OUT_res, OUT_buf_res, size_OUT_buf_res)) {
#ifdef __unix__
        printf("\nError Decoding T_Boolean\n");
#endif
        return;
    }

}

