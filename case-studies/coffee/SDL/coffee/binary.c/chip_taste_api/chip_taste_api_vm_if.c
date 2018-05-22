/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifdef __unix__
    #include <stdlib.h>
    #include <stdio.h>
#else
    typedef unsigned size_t;
#endif

#include "chip_taste_api_vm_if.h"

#include "chip_taste_api.h"

#include "C_ASN1_Types.h"

void init_chip_taste_api()
{
    static int init = 0;

    if (!init) {
        init = 1;
        chip_taste_api_startup();
    }
}

void chip_taste_api_coffee_has_pending_msg (void *pmy_res, size_t *psize_my_res)
{

    /* Output variable(s): developer has to fill them */
    asn1SccT_Boolean OUT_res;

#ifdef __unix__
    asn1SccT_Boolean_Initialize(&OUT_res);
#endif
    /* Call to User-defined function */
    chip_taste_api_PI_coffee_has_pending_msg (&OUT_res);

    /* Encode each output parameter */

    *psize_my_res = Encode_NATIVE_T_Boolean (pmy_res, sizeof (asn1SccT_Boolean), &OUT_res);
}
void chip_taste_api_chip_timer_manager_has_pending_msg (void *pmy_res, size_t *psize_my_res)
{

    /* Output variable(s): developer has to fill them */
    asn1SccT_Boolean OUT_res;

#ifdef __unix__
    asn1SccT_Boolean_Initialize(&OUT_res);
#endif
    /* Call to User-defined function */
    chip_taste_api_PI_chip_timer_manager_has_pending_msg (&OUT_res);

    /* Encode each output parameter */

    *psize_my_res = Encode_NATIVE_T_Boolean (pmy_res, sizeof (asn1SccT_Boolean), &OUT_res);
}
