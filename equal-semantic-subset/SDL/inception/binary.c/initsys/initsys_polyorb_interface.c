#include "po_hi_gqueue.h"
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "initsys_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_task.h"
#include "initsys_vm_if.h"

/* ------------------------------------------------------
-- Asynchronous Provided Interface "inmsg"
------------------------------------------------------ */
void po_hi_c_initsys_inmsg(__po_hi_task_id e, dataview__mystring_buffer_impl buf)
{
    (void)e;
   initsys_inmsg(buf.buffer, buf.length);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "outmsg"
------------------------------------------------------ */
void vm_async_initsys_outmsg(void *msg, size_t msg_len)
{
   __po_hi_request_t request;

   __po_hi_copy_array(&(request.vars.initsys_global_outport_outmsg.initsys_global_outport_outmsg.buffer), msg, msg_len);
   request.vars.initsys_global_outport_outmsg.initsys_global_outport_outmsg.length = msg_len;
   request.port = initsys_global_outport_outmsg;
   __po_hi_gqueue_store_out(chip_initsys_k, initsys_local_outport_outmsg, &request);
   __po_hi_send_output(chip_initsys_k, initsys_global_outport_outmsg);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue"
------------------------------------------------------ */
void vm_initsys_check_queue(void *res, size_t *res_len)
{
   sync_chip_taste_api_initsys_has_pending_msg(res, res_len);
}

