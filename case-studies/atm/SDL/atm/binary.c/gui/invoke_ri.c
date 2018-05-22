/* This file was generated automatically: DO NOT MODIFY IT ! */

#include <stdlib.h>
#ifdef __unix__
#include <stdio.h>
#include "PrintTypesAsASN1.h"
#include "timeInMS.h"
#endif

#include "C_ASN1_Types.h"
#include "gui_polyorb_interface.h"

void gui_RI_accept_card(const asn1SccMyString *IN_account)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1MyString ("INNERDATA: accept_card::MyString::account", IN_account);
        }
        printf ("\nINNER: gui,atm,accept_card,%lld\n", msc_time);
        fflush(stdout);
    }
#endif

    /* Buffer(s) to put the encoded input parameter(s) */
    static char IN_buf_account[sizeof(asn1SccMyString)] = {0};
    size_t size_IN_buf_account=0;

    /* Encode each input parameter */
    size_IN_buf_account = Encode_NATIVE_MyString(IN_buf_account, sizeof(asn1SccMyString), IN_account);
    if (-1 == size_IN_buf_account) {
#ifdef __unix__
        printf ("** Encoding error in gui_RI_accept_card!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_async_gui_accept_card(void *, size_t);

    vm_async_gui_accept_card(IN_buf_account, size_IN_buf_account);

}

void gui_RI_reject_transaction(const asn1SccMyString *IN_w)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1MyString ("INNERDATA: reject_transaction::MyString::w", IN_w);
        }
        printf ("\nINNER: gui,atm,reject_transaction,%lld\n", msc_time);
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
        printf ("** Encoding error in gui_RI_reject_transaction!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_async_gui_reject_transaction(void *, size_t);

    vm_async_gui_reject_transaction(IN_buf_w, size_IN_buf_w);

}

void gui_RI_out_of_service(const asn1SccMyString *IN_w)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1MyString ("INNERDATA: out_of_service::MyString::w", IN_w);
        }
        printf ("\nINNER: gui,atm,out_of_service,%lld\n", msc_time);
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
        printf ("** Encoding error in gui_RI_out_of_service!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_async_gui_out_of_service(void *, size_t);

    vm_async_gui_out_of_service(IN_buf_w, size_IN_buf_w);

}

void gui_RI_abort_out(const asn1SccMyString *IN_w)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1MyString ("INNERDATA: abort_out::MyString::w", IN_w);
        }
        printf ("\nINNER: gui,atm,abort_out,%lld\n", msc_time);
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
        printf ("** Encoding error in gui_RI_abort_out!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_async_gui_abort_out(void *, size_t);

    vm_async_gui_abort_out(IN_buf_w, size_IN_buf_w);

}

void gui_RI_amount(const asn1SccAmount *IN_amount)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1Amount ("INNERDATA: amount::Amount::amount", IN_amount);
        }
        printf ("\nINNER: gui,atm,amount,%lld\n", msc_time);
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
        printf ("** Encoding error in gui_RI_amount!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_async_gui_amount(void *, size_t);

    vm_async_gui_amount(IN_buf_amount, size_IN_buf_amount);

}

void gui_RI_other_amount(const asn1SccMyString *IN_w)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1MyString ("INNERDATA: other_amount::MyString::w", IN_w);
        }
        printf ("\nINNER: gui,atm,other_amount,%lld\n", msc_time);
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
        printf ("** Encoding error in gui_RI_other_amount!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_async_gui_other_amount(void *, size_t);

    vm_async_gui_other_amount(IN_buf_w, size_IN_buf_w);

}

void gui_RI_digit(const asn1SccNum *IN_num)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1Num ("INNERDATA: digit::Num::num", IN_num);
        }
        printf ("\nINNER: gui,atm,digit,%lld\n", msc_time);
        fflush(stdout);
    }
#endif

    /* Buffer(s) to put the encoded input parameter(s) */
    static char IN_buf_num[sizeof(asn1SccNum)] = {0};
    size_t size_IN_buf_num=0;

    /* Encode each input parameter */
    size_IN_buf_num = Encode_NATIVE_Num(IN_buf_num, sizeof(asn1SccNum), IN_num);
    if (-1 == size_IN_buf_num) {
#ifdef __unix__
        printf ("** Encoding error in gui_RI_digit!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_async_gui_digit(void *, size_t);

    vm_async_gui_digit(IN_buf_num, size_IN_buf_num);

}

void gui_RI_ok(const asn1SccMyString *IN_w)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1MyString ("INNERDATA: ok::MyString::w", IN_w);
        }
        printf ("\nINNER: gui,atm,ok,%lld\n", msc_time);
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
        printf ("** Encoding error in gui_RI_ok!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_async_gui_ok(void *, size_t);

    vm_async_gui_ok(IN_buf_w, size_IN_buf_w);

}

void gui_RI_transaction_succeseeded(const asn1SccMyString *IN_w)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1MyString ("INNERDATA: transaction_succeseeded::MyString::w", IN_w);
        }
        printf ("\nINNER: gui,atm,transaction_succeseeded,%lld\n", msc_time);
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
        printf ("** Encoding error in gui_RI_transaction_succeseeded!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_async_gui_transaction_succeseeded(void *, size_t);

    vm_async_gui_transaction_succeseeded(IN_buf_w, size_IN_buf_w);

}

