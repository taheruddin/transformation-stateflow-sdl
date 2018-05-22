/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef _gui_GUI_HEADER_H
#define _gui_GUI_HEADER_H


#include <stdlib.h>
#include <stdio.h>

#include "C_ASN1_Types.h"

#include "gui_enums_def.h"


void gui_startup();

typedef struct
{
	asn1SccAmount amount;
} T_transaction__data;

typedef struct
{
	T_gui_PI_list	message_identifier;
	T_transaction__data	message;
} T_transaction_message;


typedef struct
{
	asn1SccMyString msg;
} T_display__data;

typedef struct
{
	T_gui_PI_list	message_identifier;
	T_display__data	message;
} T_display_message;


typedef struct
{
	asn1SccMyString w;
} T_eject_card__data;

typedef struct
{
	T_gui_PI_list	message_identifier;
	T_eject_card__data	message;
} T_eject_card_message;


typedef struct
{
	asn1SccMyString msg;
} T_out_msg__data;

typedef struct
{
	T_gui_PI_list	message_identifier;
	T_out_msg__data	message;
} T_out_msg_message;


typedef struct
{
	asn1SccMyString account;
} T_accept_card__data;

typedef struct
{
	T_gui_RI_list	message_identifier;
	T_accept_card__data	message;
} T_accept_card_message;


void gui_RI_accept_card(const asn1SccMyString *);

#define INVOKE_RI_accept_card(params) gui_RI_accept_card(&((T_accept_card__data*)params)->account);

typedef struct
{
	asn1SccMyString w;
} T_reject_transaction__data;

typedef struct
{
	T_gui_RI_list	message_identifier;
	T_reject_transaction__data	message;
} T_reject_transaction_message;


void gui_RI_reject_transaction(const asn1SccMyString *);

#define INVOKE_RI_reject_transaction(params) gui_RI_reject_transaction(&((T_reject_transaction__data*)params)->w);

typedef struct
{
	asn1SccMyString w;
} T_out_of_service__data;

typedef struct
{
	T_gui_RI_list	message_identifier;
	T_out_of_service__data	message;
} T_out_of_service_message;


void gui_RI_out_of_service(const asn1SccMyString *);

#define INVOKE_RI_out_of_service(params) gui_RI_out_of_service(&((T_out_of_service__data*)params)->w);

typedef struct
{
	asn1SccMyString w;
} T_abort_out__data;

typedef struct
{
	T_gui_RI_list	message_identifier;
	T_abort_out__data	message;
} T_abort_out_message;


void gui_RI_abort_out(const asn1SccMyString *);

#define INVOKE_RI_abort_out(params) gui_RI_abort_out(&((T_abort_out__data*)params)->w);

typedef struct
{
	asn1SccAmount amount;
} T_amount__data;

typedef struct
{
	T_gui_RI_list	message_identifier;
	T_amount__data	message;
} T_amount_message;


void gui_RI_amount(const asn1SccAmount *);

#define INVOKE_RI_amount(params) gui_RI_amount(&((T_amount__data*)params)->amount);

typedef struct
{
	asn1SccMyString w;
} T_other_amount__data;

typedef struct
{
	T_gui_RI_list	message_identifier;
	T_other_amount__data	message;
} T_other_amount_message;


void gui_RI_other_amount(const asn1SccMyString *);

#define INVOKE_RI_other_amount(params) gui_RI_other_amount(&((T_other_amount__data*)params)->w);

typedef struct
{
	asn1SccNum num;
} T_digit__data;

typedef struct
{
	T_gui_RI_list	message_identifier;
	T_digit__data	message;
} T_digit_message;


void gui_RI_digit(const asn1SccNum *);

#define INVOKE_RI_digit(params) gui_RI_digit(&((T_digit__data*)params)->num);

typedef struct
{
	asn1SccMyString w;
} T_ok__data;

typedef struct
{
	T_gui_RI_list	message_identifier;
	T_ok__data	message;
} T_ok_message;


void gui_RI_ok(const asn1SccMyString *);

#define INVOKE_RI_ok(params) gui_RI_ok(&((T_ok__data*)params)->w);

typedef struct
{
	asn1SccMyString w;
} T_transaction_succeseeded__data;

typedef struct
{
	T_gui_RI_list	message_identifier;
	T_transaction_succeseeded__data	message;
} T_transaction_succeseeded_message;


void gui_RI_transaction_succeseeded(const asn1SccMyString *);

#define INVOKE_RI_transaction_succeseeded(params) gui_RI_transaction_succeseeded(&((T_transaction_succeseeded__data*)params)->w);

void gui_PI_gui_polling_gui();

void gui_PI_transaction(const asn1SccAmount* amount);

void gui_PI_display(const asn1SccMyString* msg);

void gui_PI_eject_card(const asn1SccMyString* w);

void gui_PI_out_msg(const asn1SccMyString* msg);



#endif
