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

void gui_outputmsg (void *pmy_outmsg, size_t size_my_outmsg)
{
    /* Decoded input variable(s): developer can use them */
    static asn1SccMyString IN_outmsg;

#ifdef __unix__
    asn1SccMyString_Initialize(&IN_outmsg);
#endif

    /* Decode each input parameter */
    if (0 != Decode_NATIVE_MyString (&IN_outmsg, pmy_outmsg, size_my_outmsg)) {
        #ifdef __unix__
            printf("\nError Decoding MyString\n");
        #endif
        return;
    }

    /* Call to User-defined function */
    gui_PI_outputmsg (&IN_outmsg);

}
void gui_gui_polling_gui ()
{
    /* Call to User-defined function */
    gui_PI_gui_polling_gui ();

}
