/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef chip_taste_api_POLYORB_INTERFACE
#define chip_taste_api_POLYORB_INTERFACE
#include <stddef.h>

#include "deployment.h"
#include "po_hi_transport.h"
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
-- Unprotected Provided Interface "atm_has_pending_msg"
----------------------------------------------------*/
void sync_chip_taste_api_atm_has_pending_msg(void *, size_t *);

#endif
