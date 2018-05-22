/* This file was generated automatically: DO NOT MODIFY IT ! */

#include <stdlib.h>
#ifdef __unix__
#include <stdio.h>
#include "PrintTypesAsASN1.h"
#include "timeInMS.h"
#endif

#include "C_ASN1_Types.h"
#include "gui_polyorb_interface.h"

void gui_RI_e(const asn1SccMyReal *IN_x)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1MyReal ("INNERDATA: e::MyReal::x", IN_x);
        }
        printf ("\nINNER: gui,guard_4,e,%lld\n", msc_time);
        fflush(stdout);
    }
#endif

    /* Buffer(s) to put the encoded input parameter(s) */
    static char IN_buf_x[sizeof(asn1SccMyReal)] = {0};
    size_t size_IN_buf_x=0;

    /* Encode each input parameter */
    size_IN_buf_x = Encode_NATIVE_MyReal(IN_buf_x, sizeof(asn1SccMyReal), IN_x);
    if (-1 == size_IN_buf_x) {
#ifdef __unix__
        printf ("** Encoding error in gui_RI_e!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_async_gui_e(void *, size_t);

    vm_async_gui_e(IN_buf_x, size_IN_buf_x);

}

