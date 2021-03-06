#include <types.h>
#include <po_hi_types.h>
#include <po_hi_marshallers.h>
/*****************************************************/
/*  This file was automatically generated by Ocarina */
/*  Do NOT hand-modify this file, as your            */
/*  changes will be lost when you re-run Ocarina     */
/*****************************************************/
void __po_hi_marshall_type_taste_protected_object 
    (process_package__taste_protected_object value,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_array (&(value), message, sizeof (process_package__taste_protected_object), offset);
}

void __po_hi_unmarshall_type_taste_protected_object 
    (process_package__taste_protected_object* value,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_array (value, message, sizeof (process_package__taste_protected_object), offset);
}

void __po_hi_marshall_type_mystring_buffer_max_impl 
    (dataview__mystring_buffer_max_impl value,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_array (value, message, 264 * sizeof (dataview__stream_element_buffer), offset);
}

void __po_hi_unmarshall_type_mystring_buffer_max_impl 
    (dataview__mystring_buffer_max_impl* value,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_array (value, message, 264 * sizeof (dataview__stream_element_buffer), offset);
}

void __po_hi_marshall_type_stream_element_buffer 
    (dataview__stream_element_buffer value,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_char (value, message, offset);
}

void __po_hi_unmarshall_type_stream_element_buffer 
    (dataview__stream_element_buffer* value,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_char (value, message, offset);
}

void __po_hi_marshall_type_unsigned_32 
    (base_types__unsigned_32 value,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_uint32 (value, message, offset);
}

void __po_hi_unmarshall_type_unsigned_32 
    (base_types__unsigned_32* value,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_uint32 (value, message, offset);
}

void __po_hi_marshall_type_mystring_buffer_impl 
    (dataview__mystring_buffer_impl value,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_type_mystring_buffer_max_impl (value.buffer, message, offset);
  __po_hi_marshall_uint32 (value.length, message, offset);
}

void __po_hi_unmarshall_type_mystring_buffer_impl 
    (dataview__mystring_buffer_impl* value,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_type_mystring_buffer_max_impl (&(value->buffer), message, offset);
  __po_hi_unmarshall_uint32 (&(value->length), message, offset);
}

void __po_hi_marshall_type_t_int32_buffer_max_impl 
    (dataview__t_int32_buffer_max_impl value,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_array (value, message, 8 * sizeof (dataview__stream_element_buffer), offset);
}

void __po_hi_unmarshall_type_t_int32_buffer_max_impl 
    (dataview__t_int32_buffer_max_impl* value,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_array (value, message, 8 * sizeof (dataview__stream_element_buffer), offset);
}

void __po_hi_marshall_type_t_int32_buffer_impl 
    (dataview__t_int32_buffer_impl value,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_type_t_int32_buffer_max_impl (value.buffer, message, offset);
  __po_hi_marshall_uint32 (value.length, message, offset);
}

void __po_hi_unmarshall_type_t_int32_buffer_impl 
    (dataview__t_int32_buffer_impl* value,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_type_t_int32_buffer_max_impl (&(value->buffer), message, offset);
  __po_hi_unmarshall_uint32 (&(value->length), message, offset);
}

void __po_hi_marshall_request_vt_gui_outputmsg_inport_artificial_outputmsg 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_type_mystring_buffer_impl (request->vars.vt_gui_outputmsg_global_inport_artificial_outputmsg.vt_gui_outputmsg_global_inport_artificial_outputmsg, message, offset);
}

void __po_hi_unmarshall_request_vt_gui_outputmsg_inport_artificial_outputmsg 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_type_mystring_buffer_impl (&(request->vars.vt_gui_outputmsg_global_inport_artificial_outputmsg.vt_gui_outputmsg_global_inport_artificial_outputmsg), message, offset);
}

void __po_hi_marshall_request_vt_gui_outputmsg_outport_inputmsg_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_type_t_int32_buffer_impl (request->vars.vt_gui_outputmsg_global_outport_inputmsg_vt.vt_gui_outputmsg_global_outport_inputmsg_vt, message, offset);
}

void __po_hi_unmarshall_request_vt_gui_outputmsg_outport_inputmsg_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_type_t_int32_buffer_impl (&(request->vars.vt_gui_outputmsg_global_outport_inputmsg_vt.vt_gui_outputmsg_global_outport_inputmsg_vt), message, offset);
}

void __po_hi_marshall_request_vt_gui_gui_polling_gui_outport_inputmsg_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_type_t_int32_buffer_impl (request->vars.vt_gui_gui_polling_gui_global_outport_inputmsg_vt.vt_gui_gui_polling_gui_global_outport_inputmsg_vt, message, offset);
}

void __po_hi_unmarshall_request_vt_gui_gui_polling_gui_outport_inputmsg_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_type_t_int32_buffer_impl (&(request->vars.vt_gui_gui_polling_gui_global_outport_inputmsg_vt.vt_gui_gui_polling_gui_global_outport_inputmsg_vt), message, offset);
}

void __po_hi_marshall_request_vt_durationsys_inputmsg_inport_artificial_inputmsg 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_type_t_int32_buffer_impl (request->vars.vt_durationsys_inputmsg_global_inport_artificial_inputmsg.vt_durationsys_inputmsg_global_inport_artificial_inputmsg, message, offset);
}

void __po_hi_unmarshall_request_vt_durationsys_inputmsg_inport_artificial_inputmsg 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_type_t_int32_buffer_impl (&(request->vars.vt_durationsys_inputmsg_global_inport_artificial_inputmsg.vt_durationsys_inputmsg_global_inport_artificial_inputmsg), message, offset);
}

void __po_hi_marshall_request_vt_durationsys_inputmsg_outport_outputmsg_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_type_mystring_buffer_impl (request->vars.vt_durationsys_inputmsg_global_outport_outputmsg_vt.vt_durationsys_inputmsg_global_outport_outputmsg_vt, message, offset);
}

void __po_hi_unmarshall_request_vt_durationsys_inputmsg_outport_outputmsg_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_type_mystring_buffer_impl (&(request->vars.vt_durationsys_inputmsg_global_outport_outputmsg_vt.vt_durationsys_inputmsg_global_outport_outputmsg_vt), message, offset);
}

void __po_hi_marshall_request_vt_durationsys_sdltmr_outport_outputmsg_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_type_mystring_buffer_impl (request->vars.vt_durationsys_sdltmr_global_outport_outputmsg_vt.vt_durationsys_sdltmr_global_outport_outputmsg_vt, message, offset);
}

void __po_hi_unmarshall_request_vt_durationsys_sdltmr_outport_outputmsg_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_type_mystring_buffer_impl (&(request->vars.vt_durationsys_sdltmr_global_outport_outputmsg_vt.vt_durationsys_sdltmr_global_outport_outputmsg_vt), message, offset);
}

void __po_hi_marshall_request 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message)
{
  __po_hi_uint32_t offset;

  offset = 0;
  __po_hi_marshall_port (request->port, message);
  switch (request->port)
  {
    case vt_gui_outputmsg_global_inport_artificial_outputmsg:
    {
      __po_hi_marshall_request_vt_gui_outputmsg_inport_artificial_outputmsg (request, message, &(offset));

      break;
    }
    case vt_gui_outputmsg_global_outport_inputmsg_vt:
    {
      __po_hi_marshall_request_vt_gui_outputmsg_outport_inputmsg_vt (request, message, &(offset));

      break;
    }
    case vt_gui_gui_polling_gui_global_outport_inputmsg_vt:
    {
      __po_hi_marshall_request_vt_gui_gui_polling_gui_outport_inputmsg_vt (request, message, &(offset));

      break;
    }
    case vt_durationsys_inputmsg_global_inport_artificial_inputmsg:
    {
      __po_hi_marshall_request_vt_durationsys_inputmsg_inport_artificial_inputmsg (request, message, &(offset));

      break;
    }
    case vt_durationsys_inputmsg_global_outport_outputmsg_vt:
    {
      __po_hi_marshall_request_vt_durationsys_inputmsg_outport_outputmsg_vt (request, message, &(offset));

      break;
    }
    case vt_durationsys_sdltmr_global_outport_outputmsg_vt:
    {
      __po_hi_marshall_request_vt_durationsys_sdltmr_outport_outputmsg_vt (request, message, &(offset));

      break;
    }
    default:
    {
      break;
    }
  }
}

void __po_hi_unmarshall_request 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message)
{
  __po_hi_uint32_t offset;

  offset = 0;
  __po_hi_unmarshall_port (&(request->port), message);
  switch (request->port)
  {
    case vt_gui_outputmsg_global_inport_artificial_outputmsg:
    {
      __po_hi_unmarshall_request_vt_gui_outputmsg_inport_artificial_outputmsg (request, message, &(offset));

      break;
    }
    case vt_gui_outputmsg_global_outport_inputmsg_vt:
    {
      __po_hi_unmarshall_request_vt_gui_outputmsg_outport_inputmsg_vt (request, message, &(offset));

      break;
    }
    case vt_gui_gui_polling_gui_global_outport_inputmsg_vt:
    {
      __po_hi_unmarshall_request_vt_gui_gui_polling_gui_outport_inputmsg_vt (request, message, &(offset));

      break;
    }
    case vt_durationsys_inputmsg_global_inport_artificial_inputmsg:
    {
      __po_hi_unmarshall_request_vt_durationsys_inputmsg_inport_artificial_inputmsg (request, message, &(offset));

      break;
    }
    case vt_durationsys_inputmsg_global_outport_outputmsg_vt:
    {
      __po_hi_unmarshall_request_vt_durationsys_inputmsg_outport_outputmsg_vt (request, message, &(offset));

      break;
    }
    case vt_durationsys_sdltmr_global_outport_outputmsg_vt:
    {
      __po_hi_unmarshall_request_vt_durationsys_sdltmr_outport_outputmsg_vt (request, message, &(offset));

      break;
    }
    default:
    {
      break;
    }
  }
}


