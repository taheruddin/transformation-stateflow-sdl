/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef VM_IF_gui
#define VM_IF_gui

#ifdef __cplusplus
extern "C" {
#endif

#include "C_ASN1_Types.h"

/*
 * Function initialization:
 * Calls all dependent user (or GUI) startup code - including sychronous RI
*/
void init_gui();

void gui_transaction (void *pmy_amount, size_t size_my_amount);
extern void gui_PI_transaction (const asn1SccAmount *);
void gui_display (void *pmy_msg, size_t size_my_msg);
extern void gui_PI_display (const asn1SccMyString *);
void gui_eject_card (void *pmy_w, size_t size_my_w);
extern void gui_PI_eject_card (const asn1SccMyString *);
void gui_out_msg (void *pmy_msg, size_t size_my_msg);
extern void gui_PI_out_msg (const asn1SccMyString *);
void gui_gui_polling_gui ();
extern void gui_PI_gui_polling_gui ();
#ifdef __cplusplus
}
#endif

#endif
