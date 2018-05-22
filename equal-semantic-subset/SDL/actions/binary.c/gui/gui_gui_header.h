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
	asn1SccT_Int32 msg;
} T_out_msg__data;

typedef struct
{
	T_gui_PI_list	message_identifier;
	T_out_msg__data	message;
} T_out_msg_message;


typedef struct
{
	asn1SccMyString w;
} T_push__data;

typedef struct
{
	T_gui_RI_list	message_identifier;
	T_push__data	message;
} T_push_message;


void gui_RI_push(const asn1SccMyString *);

#define INVOKE_RI_push(params) gui_RI_push(&((T_push__data*)params)->w);

typedef struct
{
	asn1SccMyString w;
} T_tap__data;

typedef struct
{
	T_gui_RI_list	message_identifier;
	T_tap__data	message;
} T_tap_message;


void gui_RI_tap(const asn1SccMyString *);

#define INVOKE_RI_tap(params) gui_RI_tap(&((T_tap__data*)params)->w);

void gui_PI_gui_polling_gui();

void gui_PI_out_msg(const asn1SccT_Int32* msg);



#endif
