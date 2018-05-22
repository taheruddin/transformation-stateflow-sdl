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
} T_outmsg__data;

typedef struct
{
	T_gui_PI_list	message_identifier;
	T_outmsg__data	message;
} T_outmsg_message;


typedef struct
{
	asn1SccMyString whatever;
} T_inmsg__data;

typedef struct
{
	T_gui_RI_list	message_identifier;
	T_inmsg__data	message;
} T_inmsg_message;


void gui_RI_inmsg(const asn1SccMyString *);

#define INVOKE_RI_inmsg(params) gui_RI_inmsg(&((T_inmsg__data*)params)->whatever);

void gui_PI_gui_polling_gui();

void gui_PI_outmsg(const asn1SccMyString* msg);



#endif
