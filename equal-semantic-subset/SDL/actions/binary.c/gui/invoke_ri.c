/* This file was generated automatically: DO NOT MODIFY IT ! */

#include <stdlib.h>
#ifdef __unix__
#include <stdio.h>
#include "PrintTypesAsASN1.h"
#include "timeInMS.h"
#endif

#include "C_ASN1_Types.h"
#include "gui_polyorb_interface.h"

void gui_RI_push(const asn1SccMyString *IN_w)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1MyString ("INNERDATA: push::MyString::w", IN_w);
        }
        printf ("\nINNER: gui,actions,push,%lld\n", msc_time);
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
        printf ("** Encoding error in gui_RI_push!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_async_gui_push(void *, size_t);

    vm_async_gui_push(IN_buf_w, size_IN_buf_w);

}

void gui_RI_tap(const asn1SccMyString *IN_w)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1MyString ("INNERDATA: tap::MyString::w", IN_w);
        }
        printf ("\nINNER: gui,actions,tap,%lld\n", msc_time);
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
        printf ("** Encoding error in gui_RI_tap!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_async_gui_tap(void *, size_t);

    vm_async_gui_tap(IN_buf_w, size_IN_buf_w);

}

