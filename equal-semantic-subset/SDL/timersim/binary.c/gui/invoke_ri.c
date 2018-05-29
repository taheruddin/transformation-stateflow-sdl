/* This file was generated automatically: DO NOT MODIFY IT ! */

#include <stdlib.h>
#ifdef __unix__
#include <stdio.h>
#include "PrintTypesAsASN1.h"
#include "timeInMS.h"
#endif

#include "C_ASN1_Types.h"
#include "gui_polyorb_interface.h"

void gui_RI_inputmsg(const asn1SccT_Boolean *IN_into)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1T_Boolean ("INNERDATA: inputmsg::T_Boolean::into", IN_into);
        }
        printf ("\nINNER: gui,timersys,inputmsg,%lld\n", msc_time);
        fflush(stdout);
    }
#endif

    /* Buffer(s) to put the encoded input parameter(s) */
    static char IN_buf_into[sizeof(asn1SccT_Boolean)] = {0};
    size_t size_IN_buf_into=0;

    /* Encode each input parameter */
    size_IN_buf_into = Encode_NATIVE_T_Boolean(IN_buf_into, sizeof(asn1SccT_Boolean), IN_into);
    if (-1 == size_IN_buf_into) {
#ifdef __unix__
        printf ("** Encoding error in gui_RI_inputmsg!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_async_gui_inputmsg(void *, size_t);

    vm_async_gui_inputmsg(IN_buf_into, size_IN_buf_into);

}

