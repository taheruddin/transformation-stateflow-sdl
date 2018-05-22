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
	asn1SccMyString outmsg;
} T_outputmsg__data;

typedef struct
{
	T_gui_PI_list	message_identifier;
	T_outputmsg__data	message;
} T_outputmsg_message;


typedef struct
{
	asn1SccT_Int32 inmsg;
} T_inputmsg__data;

typedef struct
{
	T_gui_RI_list	message_identifier;
	T_inputmsg__data	message;
} T_inputmsg_message;


void gui_RI_inputmsg(const asn1SccT_Int32 *);

#define INVOKE_RI_inputmsg(params) gui_RI_inputmsg(&((T_inputmsg__data*)params)->inmsg);

void gui_PI_gui_polling_gui();

void gui_PI_outputmsg(const asn1SccMyString* outmsg);



#endif
