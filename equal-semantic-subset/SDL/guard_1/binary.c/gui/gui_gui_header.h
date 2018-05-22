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
	asn1SccMyString msg;
} T_out_msg__data;

typedef struct
{
	T_gui_PI_list	message_identifier;
	T_out_msg__data	message;
} T_out_msg_message;


typedef struct
{
	asn1SccMyReal x;
} T_get_data__data;

typedef struct
{
	T_gui_RI_list	message_identifier;
	T_get_data__data	message;
} T_get_data_message;


void gui_RI_get_data(const asn1SccMyReal *);

#define INVOKE_RI_get_data(params) gui_RI_get_data(&((T_get_data__data*)params)->x);

typedef struct
{
	asn1SccMyString whatever;
} T_check__data;

typedef struct
{
	T_gui_RI_list	message_identifier;
	T_check__data	message;
} T_check_message;


void gui_RI_check(const asn1SccMyString *);

#define INVOKE_RI_check(params) gui_RI_check(&((T_check__data*)params)->whatever);

void gui_PI_gui_polling_gui();

void gui_PI_out_msg(const asn1SccMyString* msg);



#endif
