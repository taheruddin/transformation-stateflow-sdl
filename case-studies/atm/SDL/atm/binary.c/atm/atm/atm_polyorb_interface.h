/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef atm_POLYORB_INTERFACE
#define atm_POLYORB_INTERFACE
#include <stddef.h>

#include "types.h"
#include "deployment.h"
#include "po_hi_transport.h"
#include "../../chip_taste_api/chip_taste_api_polyorb_interface.h"
#include "../../vt_atm_accept_card/vt_atm_accept_card_polyorb_interface.h"
#include "../../vt_atm_reject_transaction/vt_atm_reject_transaction_polyorb_interface.h"
#include "../../vt_atm_out_of_service/vt_atm_out_of_service_polyorb_interface.h"
#include "../../vt_atm_abort_out/vt_atm_abort_out_polyorb_interface.h"
#include "../../vt_atm_amount/vt_atm_amount_polyorb_interface.h"
#include "../../vt_atm_other_amount/vt_atm_other_amount_polyorb_interface.h"
#include "../../vt_atm_digit/vt_atm_digit_polyorb_interface.h"
#include "../../vt_atm_ok/vt_atm_ok_polyorb_interface.h"
#include "../../vt_atm_transaction_succeseeded/vt_atm_transaction_succeseeded_polyorb_interface.h"
/*----------------------------------------------------
-- Protected Provided Interface "accept_card"
----------------------------------------------------*/
void sync_atm_accept_card(void *, size_t);

/*----------------------------------------------------
-- Protected Provided Interface "reject_transaction"
----------------------------------------------------*/
void sync_atm_reject_transaction(void *, size_t);

/*----------------------------------------------------
-- Protected Provided Interface "out_of_service"
----------------------------------------------------*/
void sync_atm_out_of_service(void *, size_t);

/*----------------------------------------------------
-- Protected Provided Interface "abort_out"
----------------------------------------------------*/
void sync_atm_abort_out(void *, size_t);

/*----------------------------------------------------
-- Protected Provided Interface "amount"
----------------------------------------------------*/
void sync_atm_amount(void *, size_t);

/*----------------------------------------------------
-- Protected Provided Interface "other_amount"
----------------------------------------------------*/
void sync_atm_other_amount(void *, size_t);

/*----------------------------------------------------
-- Protected Provided Interface "digit"
----------------------------------------------------*/
void sync_atm_digit(void *, size_t);

/*----------------------------------------------------
-- Protected Provided Interface "ok"
----------------------------------------------------*/
void sync_atm_ok(void *, size_t);

/*----------------------------------------------------
-- Protected Provided Interface "transaction_succeseeded"
----------------------------------------------------*/
void sync_atm_transaction_succeseeded(void *, size_t);

/* ------------------------------------------------------
--  Asynchronous Required Interface "out_msg"
------------------------------------------------------ */
void vm_async_atm_out_msg(void *msg, size_t msg_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "transaction"
------------------------------------------------------ */
void vm_async_atm_transaction(void *amount, size_t amount_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "display"
------------------------------------------------------ */
void vm_async_atm_display(void *msg, size_t msg_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "eject_card"
------------------------------------------------------ */
void vm_async_atm_eject_card(void *w, size_t w_len);
/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue"
------------------------------------------------------ */
void vm_atm_check_queue(void *, size_t *);
#endif
