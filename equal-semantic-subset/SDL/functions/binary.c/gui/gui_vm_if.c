/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifdef __unix__
    #include <stdlib.h>
    #include <stdio.h>
#else
    typedef unsigned size_t;
#endif

#include "gui_vm_if.h"

#include "gui_gui_header.h"

#include "C_ASN1_Types.h"

void init_gui()
{
    static int init = 0;

    if (!init) {
        init = 1;
        gui_startup();
    }
}

void gui_out_msg (void *pmy_y, size_t size_my_y)
{
    /* Decoded input variable(s): developer can use them */
    static asn1SccT_Int32 IN_y;

#ifdef __unix__
    asn1SccT_Int32_Initialize(&IN_y);
#endif

    /* Decode each input parameter */
    if (0 != Decode_NATIVE_T_Int32 (&IN_y, pmy_y, size_my_y)) {
        #ifdef __unix__
            printf("\nError Decoding T_Int32\n");
        #endif
        return;
    }

    /* Call to User-defined function */
    gui_PI_out_msg (&IN_y);

}
void gui_gui_polling_gui ()
{
    /* Call to User-defined function */
    gui_PI_gui_polling_gui ();

}
