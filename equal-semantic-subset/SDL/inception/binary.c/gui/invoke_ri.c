/* This file was generated automatically: DO NOT MODIFY IT ! */

#include <stdlib.h>
#ifdef __unix__
#include <stdio.h>
#include "PrintTypesAsASN1.h"
#include "timeInMS.h"
#endif

#include "C_ASN1_Types.h"
#include "gui_polyorb_interface.h"

void gui_RI_inmsg(const asn1SccMyString *IN_whatever)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1MyString ("INNERDATA: inmsg::MyString::whatever", IN_whatever);
        }
        printf ("\nINNER: gui,initsys,inmsg,%lld\n", msc_time);
        fflush(stdout);
    }
#endif

    /* Buffer(s) to put the encoded input parameter(s) */
    static char IN_buf_whatever[sizeof(asn1SccMyString)] = {0};
    size_t size_IN_buf_whatever=0;

    /* Encode each input parameter */
    size_IN_buf_whatever = Encode_NATIVE_MyString(IN_buf_whatever, sizeof(asn1SccMyString), IN_whatever);
    if (-1 == size_IN_buf_whatever) {
#ifdef __unix__
        printf ("** Encoding error in gui_RI_inmsg!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_async_gui_inmsg(void *, size_t);

    vm_async_gui_inmsg(IN_buf_whatever, size_IN_buf_whatever);

}

