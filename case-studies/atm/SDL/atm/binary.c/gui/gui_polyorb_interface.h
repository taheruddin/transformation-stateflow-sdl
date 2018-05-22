/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef gui_POLYORB_INTERFACE
#define gui_POLYORB_INTERFACE
#include <stddef.h>

#include "types.h"
#include "deployment.h"
#include "po_hi_transport.h"
#include "../../vt_gui_transaction/vt_gui_transaction_polyorb_interface.h"
#include "../../vt_gui_display/vt_gui_display_polyorb_interface.h"
#include "../../vt_gui_eject_card/vt_gui_eject_card_polyorb_interface.h"
#include "../../vt_gui_out_msg/vt_gui_out_msg_polyorb_interface.h"
#include "../../vt_gui_gui_polling_gui/vt_gui_gui_polling_gui_polyorb_interface.h"
/*----------------------------------------------------
-- Protected Provided Interface "transaction"
----------------------------------------------------*/
void sync_gui_transaction(void *, size_t);

/*----------------------------------------------------
-- Protected Provided Interface "display"
----------------------------------------------------*/
void sync_gui_display(void *, size_t);

/*----------------------------------------------------
-- Protected Provided Interface "eject_card"
----------------------------------------------------*/
void sync_gui_eject_card(void *, size_t);

/*----------------------------------------------------
-- Protected Provided Interface "out_msg"
----------------------------------------------------*/
void sync_gui_out_msg(void *, size_t);

/* ------------------------------------------------------
--  Asynchronous Required Interface "accept_card"
------------------------------------------------------ */
void vm_async_gui_accept_card(void *account, size_t account_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "reject_transaction"
------------------------------------------------------ */
void vm_async_gui_reject_transaction(void *w, size_t w_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "out_of_service"
------------------------------------------------------ */
void vm_async_gui_out_of_service(void *w, size_t w_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "abort_out"
------------------------------------------------------ */
void vm_async_gui_abort_out(void *w, size_t w_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "amount"
------------------------------------------------------ */
void vm_async_gui_amount(void *amount, size_t amount_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "other_amount"
------------------------------------------------------ */
void vm_async_gui_other_amount(void *w, size_t w_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "digit"
------------------------------------------------------ */
void vm_async_gui_digit(void *num, size_t num_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "ok"
------------------------------------------------------ */
void vm_async_gui_ok(void *w, size_t w_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "transaction_succeseeded"
------------------------------------------------------ */
void vm_async_gui_transaction_succeseeded(void *w, size_t w_len);
/*----------------------------------------------------
-- Protected Provided Interface "gui_polling_gui"
----------------------------------------------------*/
void sync_gui_gui_polling_gui();

#endif
