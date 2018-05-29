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

void gui_outputmsg (void *pmy_outgo, size_t size_my_outgo)
{
    /* Decoded input variable(s): developer can use them */
    static asn1SccT_Boolean IN_outgo;

#ifdef __unix__
    asn1SccT_Boolean_Initialize(&IN_outgo);
#endif

    /* Decode each input parameter */
    if (0 != Decode_NATIVE_T_Boolean (&IN_outgo, pmy_outgo, size_my_outgo)) {
        #ifdef __unix__
            printf("\nError Decoding T_Boolean\n");
        #endif
        return;
    }

    /* Call to User-defined function */
    gui_PI_outputmsg (&IN_outgo);

}
void gui_gui_polling_gui ()
{
    /* Call to User-defined function */
    gui_PI_gui_polling_gui ();

}
