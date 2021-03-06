#ifndef __OCARINA_GENERATED_REQUEST_H_
#define __OCARINA_GENERATED_REQUEST_H_ 
#include <types.h>
#include <deployment.h>
/*****************************************************/

/*  This file was automatically generated by Ocarina */

/*  Do NOT hand-modify this file, as your            */

/*  changes will be lost when you re-run Ocarina     */

/*****************************************************/

/*  Enumeration type for all the operations in the distributed application.*/

typedef struct
{
  __po_hi_port_t port;

  union
  {
    struct
    {
      dataview__mystring_buffer_impl initsys_global_inport_inmsg;

    } initsys_global_inport_inmsg;

    struct
    {
      dataview__mystring_buffer_impl initsys_global_outport_outmsg;

    } initsys_global_outport_outmsg;

    struct
    {
      dataview__mystring_buffer_impl vt_gui_outmsg_global_inport_artificial_outmsg;

    } vt_gui_outmsg_global_inport_artificial_outmsg;

    struct
    {
      dataview__mystring_buffer_impl vt_gui_outmsg_global_outport_inmsg_vt;

    } vt_gui_outmsg_global_outport_inmsg_vt;

    struct
    {
      dataview__mystring_buffer_impl vt_gui_gui_polling_gui_global_outport_inmsg_vt;

    } vt_gui_gui_polling_gui_global_outport_inmsg_vt;

  } vars;

} __po_hi_request_t;

#define __PO_HI_NB_OPERATIONS 0

#endif
