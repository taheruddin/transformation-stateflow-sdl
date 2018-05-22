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
} T_e__data;

typedef struct
{
	T_gui_RI_list	message_identifier;
	T_e__data	message;
} T_e_message;


void gui_RI_e(const asn1SccMyReal *);

#define INVOKE_RI_e(params) gui_RI_e(&((T_e__data*)params)->x);

void gui_PI_gui_polling_gui();

void gui_PI_out_msg(const asn1SccMyString* msg);



#endif
