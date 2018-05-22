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
	asn1SccMyString w;
} T_switch_on__data;

typedef struct
{
	T_gui_RI_list	message_identifier;
	T_switch_on__data	message;
} T_switch_on_message;


void gui_RI_switch_on(const asn1SccMyString *);

#define INVOKE_RI_switch_on(params) gui_RI_switch_on(&((T_switch_on__data*)params)->w);

typedef struct
{
	asn1SccMyString w;
} T_switch_off__data;

typedef struct
{
	T_gui_RI_list	message_identifier;
	T_switch_off__data	message;
} T_switch_off_message;


void gui_RI_switch_off(const asn1SccMyString *);

#define INVOKE_RI_switch_off(params) gui_RI_switch_off(&((T_switch_off__data*)params)->w);

typedef struct
{
	asn1SccMyString w;
} T_restart__data;

typedef struct
{
	T_gui_RI_list	message_identifier;
	T_restart__data	message;
} T_restart_message;


void gui_RI_restart(const asn1SccMyString *);

#define INVOKE_RI_restart(params) gui_RI_restart(&((T_restart__data*)params)->w);

typedef struct
{
	asn1SccMyString w;
} T_start_recording__data;

typedef struct
{
	T_gui_RI_list	message_identifier;
	T_start_recording__data	message;
} T_start_recording_message;


void gui_RI_start_recording(const asn1SccMyString *);

#define INVOKE_RI_start_recording(params) gui_RI_start_recording(&((T_start_recording__data*)params)->w);

typedef struct
{
	asn1SccMyString w;
} T_pause__data;

typedef struct
{
	T_gui_RI_list	message_identifier;
	T_pause__data	message;
} T_pause_message;


void gui_RI_pause(const asn1SccMyString *);

#define INVOKE_RI_pause(params) gui_RI_pause(&((T_pause__data*)params)->w);

typedef struct
{
	asn1SccMyString w;
} T_resume__data;

typedef struct
{
	T_gui_RI_list	message_identifier;
	T_resume__data	message;
} T_resume_message;


void gui_RI_resume(const asn1SccMyString *);

#define INVOKE_RI_resume(params) gui_RI_resume(&((T_resume__data*)params)->w);

typedef struct
{
	asn1SccMyString w;
} T_fail__data;

typedef struct
{
	T_gui_RI_list	message_identifier;
	T_fail__data	message;
} T_fail_message;


void gui_RI_fail(const asn1SccMyString *);

#define INVOKE_RI_fail(params) gui_RI_fail(&((T_fail__data*)params)->w);

typedef struct
{
	asn1SccMyString w;
} T_stop_recording__data;

typedef struct
{
	T_gui_RI_list	message_identifier;
	T_stop_recording__data	message;
} T_stop_recording_message;


void gui_RI_stop_recording(const asn1SccMyString *);

#define INVOKE_RI_stop_recording(params) gui_RI_stop_recording(&((T_stop_recording__data*)params)->w);

void gui_PI_gui_polling_gui();

void gui_PI_out_msg(const asn1SccMyString* msg);



#endif
