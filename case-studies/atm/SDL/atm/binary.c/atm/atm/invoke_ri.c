/* This file was generated automatically: DO NOT MODIFY IT ! */

#include <stdlib.h>
#ifdef __unix__
#include <stdio.h>
#include "PrintTypesAsASN1.h"
#include "timeInMS.h"
#endif

#include "C_ASN1_Types.h"
#include "atm_polyorb_interface.h"

void atm_RI_out_msg(const asn1SccMyString *IN_msg)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1MyString ("INNERDATA: out_msg::MyString::msg", IN_msg);
        }
        printf ("\nINNER: atm,gui,out_msg,%lld\n", msc_time);
        fflush(stdout);
    }
#endif

    /* Buffer(s) to put the encoded input parameter(s) */
    static char IN_buf_msg[sizeof(asn1SccMyString)] = {0};
    size_t size_IN_buf_msg=0;

    /* Encode each input parameter */
    size_IN_buf_msg = Encode_NATIVE_MyString(IN_buf_msg, sizeof(asn1SccMyString), IN_msg);
    if (-1 == size_IN_buf_msg) {
#ifdef __unix__
        printf ("** Encoding error in atm_RI_out_msg!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_async_atm_out_msg(void *, size_t);

    vm_async_atm_out_msg(IN_buf_msg, size_IN_buf_msg);

}

void atm_RI_transaction(const asn1SccAmount *IN_amount)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1Amount ("INNERDATA: transaction::Amount::amount", IN_amount);
        }
        printf ("\nINNER: atm,gui,transaction,%lld\n", msc_time);
        fflush(stdout);
    }
#endif

    /* Buffer(s) to put the encoded input parameter(s) */
    static char IN_buf_amount[sizeof(asn1SccAmount)] = {0};
    size_t size_IN_buf_amount=0;

    /* Encode each input parameter */
    size_IN_buf_amount = Encode_NATIVE_Amount(IN_buf_amount, sizeof(asn1SccAmount), IN_amount);
    if (-1 == size_IN_buf_amount) {
#ifdef __unix__
        printf ("** Encoding error in atm_RI_transaction!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_async_atm_transaction(void *, size_t);

    vm_async_atm_transaction(IN_buf_amount, size_IN_buf_amount);

}

void atm_RI_display(const asn1SccMyString *IN_msg)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1MyString ("INNERDATA: display::MyString::msg", IN_msg);
        }
        printf ("\nINNER: atm,gui,display,%lld\n", msc_time);
        fflush(stdout);
    }
#endif

    /* Buffer(s) to put the encoded input parameter(s) */
    static char IN_buf_msg[sizeof(asn1SccMyString)] = {0};
    size_t size_IN_buf_msg=0;

    /* Encode each input parameter */
    size_IN_buf_msg = Encode_NATIVE_MyString(IN_buf_msg, sizeof(asn1SccMyString), IN_msg);
    if (-1 == size_IN_buf_msg) {
#ifdef __unix__
        printf ("** Encoding error in atm_RI_display!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_async_atm_display(void *, size_t);

    vm_async_atm_display(IN_buf_msg, size_IN_buf_msg);

}

void atm_RI_eject_card(const asn1SccMyString *IN_w)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1MyString ("INNERDATA: eject_card::MyString::w", IN_w);
        }
        printf ("\nINNER: atm,gui,eject_card,%lld\n", msc_time);
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
        printf ("** Encoding error in atm_RI_eject_card!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_async_atm_eject_card(void *, size_t);

    vm_async_atm_eject_card(IN_buf_w, size_IN_buf_w);

}

void atm_RI_check_queue(asn1SccT_Boolean *OUT_res)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        printf ("\nINNER: atm,chip_taste_api,check_queue,%lld\n", msc_time);
        fflush(stdout);
    }
#endif


    /* Buffer(s) for the output parameter(s) */
    static char OUT_buf_res[sizeof(asn1SccT_Boolean)];
    size_t size_OUT_buf_res=0;

    /* Call to VM callback function */
    extern void vm_atm_check_queue(void *, size_t *);

    vm_atm_check_queue(OUT_buf_res, &size_OUT_buf_res);

    /* Decode each output parameter */
    if (0 != Decode_NATIVE_T_Boolean(OUT_res, OUT_buf_res, size_OUT_buf_res)) {
#ifdef __unix__
        printf("\nError Decoding T_Boolean\n");
#endif
        return;
    }

}

