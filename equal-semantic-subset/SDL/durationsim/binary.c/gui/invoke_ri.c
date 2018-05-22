/* This file was generated automatically: DO NOT MODIFY IT ! */

#include <stdlib.h>
#ifdef __unix__
#include <stdio.h>
#include "PrintTypesAsASN1.h"
#include "timeInMS.h"
#endif

#include "C_ASN1_Types.h"
#include "gui_polyorb_interface.h"

void gui_RI_inputmsg(const asn1SccT_Int32 *IN_inmsg)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1T_Int32 ("INNERDATA: inputmsg::T_Int32::inmsg", IN_inmsg);
        }
        printf ("\nINNER: gui,durationsys,inputmsg,%lld\n", msc_time);
        fflush(stdout);
    }
#endif

    /* Buffer(s) to put the encoded input parameter(s) */
    static char IN_buf_inmsg[sizeof(asn1SccT_Int32)] = {0};
    size_t size_IN_buf_inmsg=0;

    /* Encode each input parameter */
    size_IN_buf_inmsg = Encode_NATIVE_T_Int32(IN_buf_inmsg, sizeof(asn1SccT_Int32), IN_inmsg);
    if (-1 == size_IN_buf_inmsg) {
#ifdef __unix__
        printf ("** Encoding error in gui_RI_inputmsg!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_async_gui_inputmsg(void *, size_t);

    vm_async_gui_inputmsg(IN_buf_inmsg, size_IN_buf_inmsg);

}

