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
	asn1SccT_Int32 init_tmpr;
} T_get_init_tmpr__data;

typedef struct
{
	T_gui_RI_list	message_identifier;
	T_get_init_tmpr__data	message;
} T_get_init_tmpr_message;


void gui_RI_get_init_tmpr(const asn1SccT_Int32 *);

#define INVOKE_RI_get_init_tmpr(params) gui_RI_get_init_tmpr(&((T_get_init_tmpr__data*)params)->init_tmpr);

typedef struct
{
	asn1SccT_Int32 init_water;
} T_get_init_water__data;

typedef struct
{
	T_gui_RI_list	message_identifier;
	T_get_init_water__data	message;
} T_get_init_water_message;


void gui_RI_get_init_water(const asn1SccT_Int32 *);

#define INVOKE_RI_get_init_water(params) gui_RI_get_init_water(&((T_get_init_water__data*)params)->init_water);

typedef struct
{
	asn1SccMyString w;
} T_for_water__data;

typedef struct
{
	T_gui_RI_list	message_identifier;
	T_for_water__data	message;
} T_for_water_message;


void gui_RI_for_water(const asn1SccMyString *);

#define INVOKE_RI_for_water(params) gui_RI_for_water(&((T_for_water__data*)params)->w);

typedef struct
{
	asn1SccMyString w;
} T_for_water_tmpr__data;

typedef struct
{
	T_gui_RI_list	message_identifier;
	T_for_water_tmpr__data	message;
} T_for_water_tmpr_message;


void gui_RI_for_water_tmpr(const asn1SccMyString *);

#define INVOKE_RI_for_water_tmpr(params) gui_RI_for_water_tmpr(&((T_for_water_tmpr__data*)params)->w);

typedef struct
{
	asn1SccMyString w;
} T_for_coffee__data;

typedef struct
{
	T_gui_RI_list	message_identifier;
	T_for_coffee__data	message;
} T_for_coffee_message;


void gui_RI_for_coffee(const asn1SccMyString *);

#define INVOKE_RI_for_coffee(params) gui_RI_for_coffee(&((T_for_coffee__data*)params)->w);

typedef struct
{
	asn1SccMyString w;
} T_for_ticking__data;

typedef struct
{
	T_gui_RI_list	message_identifier;
	T_for_ticking__data	message;
} T_for_ticking_message;


void gui_RI_for_ticking(const asn1SccMyString *);

#define INVOKE_RI_for_ticking(params) gui_RI_for_ticking(&((T_for_ticking__data*)params)->w);

void gui_PI_gui_polling_gui();

void gui_PI_out_msg(const asn1SccMyString* msg);



#endif
