/* This file was generated automatically: DO NOT MODIFY IT ! */

#include <stdlib.h>
#ifdef __unix__
#include <stdio.h>
#include "PrintTypesAsASN1.h"
#include "timeInMS.h"
#endif

#include "C_ASN1_Types.h"
#include "gui_polyorb_interface.h"

void gui_RI_get_data(const asn1SccMyReal *IN_x)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1MyReal ("INNERDATA: get_data::MyReal::x", IN_x);
        }
        printf ("\nINNER: gui,guard_1,get_data,%lld\n", msc_time);
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
        printf ("** Encoding error in gui_RI_get_data!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_async_gui_get_data(void *, size_t);

    vm_async_gui_get_data(IN_buf_x, size_IN_buf_x);

}

void gui_RI_check(const asn1SccMyString *IN_whatever)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1MyString ("INNERDATA: check::MyString::whatever", IN_whatever);
        }
        printf ("\nINNER: gui,guard_1,check,%lld\n", msc_time);
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
        printf ("** Encoding error in gui_RI_check!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_async_gui_check(void *, size_t);

    vm_async_gui_check(IN_buf_whatever, size_IN_buf_whatever);

}

