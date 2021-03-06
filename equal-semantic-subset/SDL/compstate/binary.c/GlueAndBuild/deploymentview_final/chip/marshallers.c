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

void __po_hi_marshall_request_vt_gui_out_msg_inport_artificial_out_msg 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_type_mystring_buffer_impl (request->vars.vt_gui_out_msg_global_inport_artificial_out_msg.vt_gui_out_msg_global_inport_artificial_out_msg, message, offset);
}

void __po_hi_unmarshall_request_vt_gui_out_msg_inport_artificial_out_msg 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_type_mystring_buffer_impl (&(request->vars.vt_gui_out_msg_global_inport_artificial_out_msg.vt_gui_out_msg_global_inport_artificial_out_msg), message, offset);
}

void __po_hi_marshall_request_vt_gui_out_msg_outport_switch_on_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_type_mystring_buffer_impl (request->vars.vt_gui_out_msg_global_outport_switch_on_vt.vt_gui_out_msg_global_outport_switch_on_vt, message, offset);
}

void __po_hi_unmarshall_request_vt_gui_out_msg_outport_switch_on_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_type_mystring_buffer_impl (&(request->vars.vt_gui_out_msg_global_outport_switch_on_vt.vt_gui_out_msg_global_outport_switch_on_vt), message, offset);
}

void __po_hi_marshall_request_vt_gui_out_msg_outport_switch_off_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_type_mystring_buffer_impl (request->vars.vt_gui_out_msg_global_outport_switch_off_vt.vt_gui_out_msg_global_outport_switch_off_vt, message, offset);
}

void __po_hi_unmarshall_request_vt_gui_out_msg_outport_switch_off_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_type_mystring_buffer_impl (&(request->vars.vt_gui_out_msg_global_outport_switch_off_vt.vt_gui_out_msg_global_outport_switch_off_vt), message, offset);
}

void __po_hi_marshall_request_vt_gui_out_msg_outport_restart_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_type_mystring_buffer_impl (request->vars.vt_gui_out_msg_global_outport_restart_vt.vt_gui_out_msg_global_outport_restart_vt, message, offset);
}

void __po_hi_unmarshall_request_vt_gui_out_msg_outport_restart_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_type_mystring_buffer_impl (&(request->vars.vt_gui_out_msg_global_outport_restart_vt.vt_gui_out_msg_global_outport_restart_vt), message, offset);
}

void __po_hi_marshall_request_vt_gui_out_msg_outport_start_recording_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_type_mystring_buffer_impl (request->vars.vt_gui_out_msg_global_outport_start_recording_vt.vt_gui_out_msg_global_outport_start_recording_vt, message, offset);
}

void __po_hi_unmarshall_request_vt_gui_out_msg_outport_start_recording_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_type_mystring_buffer_impl (&(request->vars.vt_gui_out_msg_global_outport_start_recording_vt.vt_gui_out_msg_global_outport_start_recording_vt), message, offset);
}

void __po_hi_marshall_request_vt_gui_out_msg_outport_pause_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_type_mystring_buffer_impl (request->vars.vt_gui_out_msg_global_outport_pause_vt.vt_gui_out_msg_global_outport_pause_vt, message, offset);
}

void __po_hi_unmarshall_request_vt_gui_out_msg_outport_pause_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_type_mystring_buffer_impl (&(request->vars.vt_gui_out_msg_global_outport_pause_vt.vt_gui_out_msg_global_outport_pause_vt), message, offset);
}

void __po_hi_marshall_request_vt_gui_out_msg_outport_resume_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_type_mystring_buffer_impl (request->vars.vt_gui_out_msg_global_outport_resume_vt.vt_gui_out_msg_global_outport_resume_vt, message, offset);
}

void __po_hi_unmarshall_request_vt_gui_out_msg_outport_resume_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_type_mystring_buffer_impl (&(request->vars.vt_gui_out_msg_global_outport_resume_vt.vt_gui_out_msg_global_outport_resume_vt), message, offset);
}

void __po_hi_marshall_request_vt_gui_out_msg_outport_fail_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_type_mystring_buffer_impl (request->vars.vt_gui_out_msg_global_outport_fail_vt.vt_gui_out_msg_global_outport_fail_vt, message, offset);
}

void __po_hi_unmarshall_request_vt_gui_out_msg_outport_fail_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_type_mystring_buffer_impl (&(request->vars.vt_gui_out_msg_global_outport_fail_vt.vt_gui_out_msg_global_outport_fail_vt), message, offset);
}

void __po_hi_marshall_request_vt_gui_out_msg_outport_stop_recording_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_type_mystring_buffer_impl (request->vars.vt_gui_out_msg_global_outport_stop_recording_vt.vt_gui_out_msg_global_outport_stop_recording_vt, message, offset);
}

void __po_hi_unmarshall_request_vt_gui_out_msg_outport_stop_recording_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_type_mystring_buffer_impl (&(request->vars.vt_gui_out_msg_global_outport_stop_recording_vt.vt_gui_out_msg_global_outport_stop_recording_vt), message, offset);
}

void __po_hi_marshall_request_vt_gui_gui_polling_gui_outport_switch_on_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_type_mystring_buffer_impl (request->vars.vt_gui_gui_polling_gui_global_outport_switch_on_vt.vt_gui_gui_polling_gui_global_outport_switch_on_vt, message, offset);
}

void __po_hi_unmarshall_request_vt_gui_gui_polling_gui_outport_switch_on_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_type_mystring_buffer_impl (&(request->vars.vt_gui_gui_polling_gui_global_outport_switch_on_vt.vt_gui_gui_polling_gui_global_outport_switch_on_vt), message, offset);
}

void __po_hi_marshall_request_vt_gui_gui_polling_gui_outport_switch_off_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_type_mystring_buffer_impl (request->vars.vt_gui_gui_polling_gui_global_outport_switch_off_vt.vt_gui_gui_polling_gui_global_outport_switch_off_vt, message, offset);
}

void __po_hi_unmarshall_request_vt_gui_gui_polling_gui_outport_switch_off_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_type_mystring_buffer_impl (&(request->vars.vt_gui_gui_polling_gui_global_outport_switch_off_vt.vt_gui_gui_polling_gui_global_outport_switch_off_vt), message, offset);
}

void __po_hi_marshall_request_vt_gui_gui_polling_gui_outport_restart_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_type_mystring_buffer_impl (request->vars.vt_gui_gui_polling_gui_global_outport_restart_vt.vt_gui_gui_polling_gui_global_outport_restart_vt, message, offset);
}

void __po_hi_unmarshall_request_vt_gui_gui_polling_gui_outport_restart_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_type_mystring_buffer_impl (&(request->vars.vt_gui_gui_polling_gui_global_outport_restart_vt.vt_gui_gui_polling_gui_global_outport_restart_vt), message, offset);
}

void __po_hi_marshall_request_vt_gui_gui_polling_gui_outport_start_recording_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_type_mystring_buffer_impl (request->vars.vt_gui_gui_polling_gui_global_outport_start_recording_vt.vt_gui_gui_polling_gui_global_outport_start_recording_vt, message, offset);
}

void __po_hi_unmarshall_request_vt_gui_gui_polling_gui_outport_start_recording_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_type_mystring_buffer_impl (&(request->vars.vt_gui_gui_polling_gui_global_outport_start_recording_vt.vt_gui_gui_polling_gui_global_outport_start_recording_vt), message, offset);
}

void __po_hi_marshall_request_vt_gui_gui_polling_gui_outport_pause_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_type_mystring_buffer_impl (request->vars.vt_gui_gui_polling_gui_global_outport_pause_vt.vt_gui_gui_polling_gui_global_outport_pause_vt, message, offset);
}

void __po_hi_unmarshall_request_vt_gui_gui_polling_gui_outport_pause_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_type_mystring_buffer_impl (&(request->vars.vt_gui_gui_polling_gui_global_outport_pause_vt.vt_gui_gui_polling_gui_global_outport_pause_vt), message, offset);
}

void __po_hi_marshall_request_vt_gui_gui_polling_gui_outport_resume_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_type_mystring_buffer_impl (request->vars.vt_gui_gui_polling_gui_global_outport_resume_vt.vt_gui_gui_polling_gui_global_outport_resume_vt, message, offset);
}

void __po_hi_unmarshall_request_vt_gui_gui_polling_gui_outport_resume_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_type_mystring_buffer_impl (&(request->vars.vt_gui_gui_polling_gui_global_outport_resume_vt.vt_gui_gui_polling_gui_global_outport_resume_vt), message, offset);
}

void __po_hi_marshall_request_vt_gui_gui_polling_gui_outport_fail_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_type_mystring_buffer_impl (request->vars.vt_gui_gui_polling_gui_global_outport_fail_vt.vt_gui_gui_polling_gui_global_outport_fail_vt, message, offset);
}

void __po_hi_unmarshall_request_vt_gui_gui_polling_gui_outport_fail_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_type_mystring_buffer_impl (&(request->vars.vt_gui_gui_polling_gui_global_outport_fail_vt.vt_gui_gui_polling_gui_global_outport_fail_vt), message, offset);
}

void __po_hi_marshall_request_vt_gui_gui_polling_gui_outport_stop_recording_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_type_mystring_buffer_impl (request->vars.vt_gui_gui_polling_gui_global_outport_stop_recording_vt.vt_gui_gui_polling_gui_global_outport_stop_recording_vt, message, offset);
}

void __po_hi_unmarshall_request_vt_gui_gui_polling_gui_outport_stop_recording_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_type_mystring_buffer_impl (&(request->vars.vt_gui_gui_polling_gui_global_outport_stop_recording_vt.vt_gui_gui_polling_gui_global_outport_stop_recording_vt), message, offset);
}

void __po_hi_marshall_request_vt_compstate_switch_on_inport_artificial_switch_on 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_type_mystring_buffer_impl (request->vars.vt_compstate_switch_on_global_inport_artificial_switch_on.vt_compstate_switch_on_global_inport_artificial_switch_on, message, offset);
}

void __po_hi_unmarshall_request_vt_compstate_switch_on_inport_artificial_switch_on 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_type_mystring_buffer_impl (&(request->vars.vt_compstate_switch_on_global_inport_artificial_switch_on.vt_compstate_switch_on_global_inport_artificial_switch_on), message, offset);
}

void __po_hi_marshall_request_vt_compstate_switch_on_outport_out_msg_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_type_mystring_buffer_impl (request->vars.vt_compstate_switch_on_global_outport_out_msg_vt.vt_compstate_switch_on_global_outport_out_msg_vt, message, offset);
}

void __po_hi_unmarshall_request_vt_compstate_switch_on_outport_out_msg_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_type_mystring_buffer_impl (&(request->vars.vt_compstate_switch_on_global_outport_out_msg_vt.vt_compstate_switch_on_global_outport_out_msg_vt), message, offset);
}

void __po_hi_marshall_request_vt_compstate_switch_off_inport_artificial_switch_off 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_type_mystring_buffer_impl (request->vars.vt_compstate_switch_off_global_inport_artificial_switch_off.vt_compstate_switch_off_global_inport_artificial_switch_off, message, offset);
}

void __po_hi_unmarshall_request_vt_compstate_switch_off_inport_artificial_switch_off 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_type_mystring_buffer_impl (&(request->vars.vt_compstate_switch_off_global_inport_artificial_switch_off.vt_compstate_switch_off_global_inport_artificial_switch_off), message, offset);
}

void __po_hi_marshall_request_vt_compstate_switch_off_outport_out_msg_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_type_mystring_buffer_impl (request->vars.vt_compstate_switch_off_global_outport_out_msg_vt.vt_compstate_switch_off_global_outport_out_msg_vt, message, offset);
}

void __po_hi_unmarshall_request_vt_compstate_switch_off_outport_out_msg_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_type_mystring_buffer_impl (&(request->vars.vt_compstate_switch_off_global_outport_out_msg_vt.vt_compstate_switch_off_global_outport_out_msg_vt), message, offset);
}

void __po_hi_marshall_request_vt_compstate_restart_inport_artificial_restart 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_type_mystring_buffer_impl (request->vars.vt_compstate_restart_global_inport_artificial_restart.vt_compstate_restart_global_inport_artificial_restart, message, offset);
}

void __po_hi_unmarshall_request_vt_compstate_restart_inport_artificial_restart 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_type_mystring_buffer_impl (&(request->vars.vt_compstate_restart_global_inport_artificial_restart.vt_compstate_restart_global_inport_artificial_restart), message, offset);
}

void __po_hi_marshall_request_vt_compstate_restart_outport_out_msg_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_type_mystring_buffer_impl (request->vars.vt_compstate_restart_global_outport_out_msg_vt.vt_compstate_restart_global_outport_out_msg_vt, message, offset);
}

void __po_hi_unmarshall_request_vt_compstate_restart_outport_out_msg_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_type_mystring_buffer_impl (&(request->vars.vt_compstate_restart_global_outport_out_msg_vt.vt_compstate_restart_global_outport_out_msg_vt), message, offset);
}

void __po_hi_marshall_request_vt_compstate_start_recording_inport_artificial_start_recording 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_type_mystring_buffer_impl (request->vars.vt_compstate_start_recording_global_inport_artificial_start_recording.vt_compstate_start_recording_global_inport_artificial_start_recording, message, offset);
}

void __po_hi_unmarshall_request_vt_compstate_start_recording_inport_artificial_start_recording 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_type_mystring_buffer_impl (&(request->vars.vt_compstate_start_recording_global_inport_artificial_start_recording.vt_compstate_start_recording_global_inport_artificial_start_recording), message, offset);
}

void __po_hi_marshall_request_vt_compstate_start_recording_outport_out_msg_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_type_mystring_buffer_impl (request->vars.vt_compstate_start_recording_global_outport_out_msg_vt.vt_compstate_start_recording_global_outport_out_msg_vt, message, offset);
}

void __po_hi_unmarshall_request_vt_compstate_start_recording_outport_out_msg_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_type_mystring_buffer_impl (&(request->vars.vt_compstate_start_recording_global_outport_out_msg_vt.vt_compstate_start_recording_global_outport_out_msg_vt), message, offset);
}

void __po_hi_marshall_request_vt_compstate_pause_inport_artificial_pause 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_type_mystring_buffer_impl (request->vars.vt_compstate_pause_global_inport_artificial_pause.vt_compstate_pause_global_inport_artificial_pause, message, offset);
}

void __po_hi_unmarshall_request_vt_compstate_pause_inport_artificial_pause 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_type_mystring_buffer_impl (&(request->vars.vt_compstate_pause_global_inport_artificial_pause.vt_compstate_pause_global_inport_artificial_pause), message, offset);
}

void __po_hi_marshall_request_vt_compstate_pause_outport_out_msg_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_type_mystring_buffer_impl (request->vars.vt_compstate_pause_global_outport_out_msg_vt.vt_compstate_pause_global_outport_out_msg_vt, message, offset);
}

void __po_hi_unmarshall_request_vt_compstate_pause_outport_out_msg_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_type_mystring_buffer_impl (&(request->vars.vt_compstate_pause_global_outport_out_msg_vt.vt_compstate_pause_global_outport_out_msg_vt), message, offset);
}

void __po_hi_marshall_request_vt_compstate_resume_inport_artificial_resume 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_type_mystring_buffer_impl (request->vars.vt_compstate_resume_global_inport_artificial_resume.vt_compstate_resume_global_inport_artificial_resume, message, offset);
}

void __po_hi_unmarshall_request_vt_compstate_resume_inport_artificial_resume 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_type_mystring_buffer_impl (&(request->vars.vt_compstate_resume_global_inport_artificial_resume.vt_compstate_resume_global_inport_artificial_resume), message, offset);
}

void __po_hi_marshall_request_vt_compstate_resume_outport_out_msg_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_type_mystring_buffer_impl (request->vars.vt_compstate_resume_global_outport_out_msg_vt.vt_compstate_resume_global_outport_out_msg_vt, message, offset);
}

void __po_hi_unmarshall_request_vt_compstate_resume_outport_out_msg_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_type_mystring_buffer_impl (&(request->vars.vt_compstate_resume_global_outport_out_msg_vt.vt_compstate_resume_global_outport_out_msg_vt), message, offset);
}

void __po_hi_marshall_request_vt_compstate_stop_recording_inport_artificial_stop_recording 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_type_mystring_buffer_impl (request->vars.vt_compstate_stop_recording_global_inport_artificial_stop_recording.vt_compstate_stop_recording_global_inport_artificial_stop_recording, message, offset);
}

void __po_hi_unmarshall_request_vt_compstate_stop_recording_inport_artificial_stop_recording 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_type_mystring_buffer_impl (&(request->vars.vt_compstate_stop_recording_global_inport_artificial_stop_recording.vt_compstate_stop_recording_global_inport_artificial_stop_recording), message, offset);
}

void __po_hi_marshall_request_vt_compstate_stop_recording_outport_out_msg_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_type_mystring_buffer_impl (request->vars.vt_compstate_stop_recording_global_outport_out_msg_vt.vt_compstate_stop_recording_global_outport_out_msg_vt, message, offset);
}

void __po_hi_unmarshall_request_vt_compstate_stop_recording_outport_out_msg_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_type_mystring_buffer_impl (&(request->vars.vt_compstate_stop_recording_global_outport_out_msg_vt.vt_compstate_stop_recording_global_outport_out_msg_vt), message, offset);
}

void __po_hi_marshall_request_vt_compstate_fail_inport_artificial_fail 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_type_mystring_buffer_impl (request->vars.vt_compstate_fail_global_inport_artificial_fail.vt_compstate_fail_global_inport_artificial_fail, message, offset);
}

void __po_hi_unmarshall_request_vt_compstate_fail_inport_artificial_fail 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_type_mystring_buffer_impl (&(request->vars.vt_compstate_fail_global_inport_artificial_fail.vt_compstate_fail_global_inport_artificial_fail), message, offset);
}

void __po_hi_marshall_request_vt_compstate_fail_outport_out_msg_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_type_mystring_buffer_impl (request->vars.vt_compstate_fail_global_outport_out_msg_vt.vt_compstate_fail_global_outport_out_msg_vt, message, offset);
}

void __po_hi_unmarshall_request_vt_compstate_fail_outport_out_msg_vt 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_type_mystring_buffer_impl (&(request->vars.vt_compstate_fail_global_outport_out_msg_vt.vt_compstate_fail_global_outport_out_msg_vt), message, offset);
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
    case vt_gui_out_msg_global_inport_artificial_out_msg:
    {
      __po_hi_marshall_request_vt_gui_out_msg_inport_artificial_out_msg (request, message, &(offset));

      break;
    }
    case vt_gui_out_msg_global_outport_switch_on_vt:
    {
      __po_hi_marshall_request_vt_gui_out_msg_outport_switch_on_vt (request, message, &(offset));

      break;
    }
    case vt_gui_out_msg_global_outport_switch_off_vt:
    {
      __po_hi_marshall_request_vt_gui_out_msg_outport_switch_off_vt (request, message, &(offset));

      break;
    }
    case vt_gui_out_msg_global_outport_restart_vt:
    {
      __po_hi_marshall_request_vt_gui_out_msg_outport_restart_vt (request, message, &(offset));

      break;
    }
    case vt_gui_out_msg_global_outport_start_recording_vt:
    {
      __po_hi_marshall_request_vt_gui_out_msg_outport_start_recording_vt (request, message, &(offset));

      break;
    }
    case vt_gui_out_msg_global_outport_pause_vt:
    {
      __po_hi_marshall_request_vt_gui_out_msg_outport_pause_vt (request, message, &(offset));

      break;
    }
    case vt_gui_out_msg_global_outport_resume_vt:
    {
      __po_hi_marshall_request_vt_gui_out_msg_outport_resume_vt (request, message, &(offset));

      break;
    }
    case vt_gui_out_msg_global_outport_fail_vt:
    {
      __po_hi_marshall_request_vt_gui_out_msg_outport_fail_vt (request, message, &(offset));

      break;
    }
    case vt_gui_out_msg_global_outport_stop_recording_vt:
    {
      __po_hi_marshall_request_vt_gui_out_msg_outport_stop_recording_vt (request, message, &(offset));

      break;
    }
    case vt_gui_gui_polling_gui_global_outport_switch_on_vt:
    {
      __po_hi_marshall_request_vt_gui_gui_polling_gui_outport_switch_on_vt (request, message, &(offset));

      break;
    }
    case vt_gui_gui_polling_gui_global_outport_switch_off_vt:
    {
      __po_hi_marshall_request_vt_gui_gui_polling_gui_outport_switch_off_vt (request, message, &(offset));

      break;
    }
    case vt_gui_gui_polling_gui_global_outport_restart_vt:
    {
      __po_hi_marshall_request_vt_gui_gui_polling_gui_outport_restart_vt (request, message, &(offset));

      break;
    }
    case vt_gui_gui_polling_gui_global_outport_start_recording_vt:
    {
      __po_hi_marshall_request_vt_gui_gui_polling_gui_outport_start_recording_vt (request, message, &(offset));

      break;
    }
    case vt_gui_gui_polling_gui_global_outport_pause_vt:
    {
      __po_hi_marshall_request_vt_gui_gui_polling_gui_outport_pause_vt (request, message, &(offset));

      break;
    }
    case vt_gui_gui_polling_gui_global_outport_resume_vt:
    {
      __po_hi_marshall_request_vt_gui_gui_polling_gui_outport_resume_vt (request, message, &(offset));

      break;
    }
    case vt_gui_gui_polling_gui_global_outport_fail_vt:
    {
      __po_hi_marshall_request_vt_gui_gui_polling_gui_outport_fail_vt (request, message, &(offset));

      break;
    }
    case vt_gui_gui_polling_gui_global_outport_stop_recording_vt:
    {
      __po_hi_marshall_request_vt_gui_gui_polling_gui_outport_stop_recording_vt (request, message, &(offset));

      break;
    }
    case vt_compstate_switch_on_global_inport_artificial_switch_on:
    {
      __po_hi_marshall_request_vt_compstate_switch_on_inport_artificial_switch_on (request, message, &(offset));

      break;
    }
    case vt_compstate_switch_on_global_outport_out_msg_vt:
    {
      __po_hi_marshall_request_vt_compstate_switch_on_outport_out_msg_vt (request, message, &(offset));

      break;
    }
    case vt_compstate_switch_off_global_inport_artificial_switch_off:
    {
      __po_hi_marshall_request_vt_compstate_switch_off_inport_artificial_switch_off (request, message, &(offset));

      break;
    }
    case vt_compstate_switch_off_global_outport_out_msg_vt:
    {
      __po_hi_marshall_request_vt_compstate_switch_off_outport_out_msg_vt (request, message, &(offset));

      break;
    }
    case vt_compstate_restart_global_inport_artificial_restart:
    {
      __po_hi_marshall_request_vt_compstate_restart_inport_artificial_restart (request, message, &(offset));

      break;
    }
    case vt_compstate_restart_global_outport_out_msg_vt:
    {
      __po_hi_marshall_request_vt_compstate_restart_outport_out_msg_vt (request, message, &(offset));

      break;
    }
    case vt_compstate_start_recording_global_inport_artificial_start_recording:
    {
      __po_hi_marshall_request_vt_compstate_start_recording_inport_artificial_start_recording (request, message, &(offset));

      break;
    }
    case vt_compstate_start_recording_global_outport_out_msg_vt:
    {
      __po_hi_marshall_request_vt_compstate_start_recording_outport_out_msg_vt (request, message, &(offset));

      break;
    }
    case vt_compstate_pause_global_inport_artificial_pause:
    {
      __po_hi_marshall_request_vt_compstate_pause_inport_artificial_pause (request, message, &(offset));

      break;
    }
    case vt_compstate_pause_global_outport_out_msg_vt:
    {
      __po_hi_marshall_request_vt_compstate_pause_outport_out_msg_vt (request, message, &(offset));

      break;
    }
    case vt_compstate_resume_global_inport_artificial_resume:
    {
      __po_hi_marshall_request_vt_compstate_resume_inport_artificial_resume (request, message, &(offset));

      break;
    }
    case vt_compstate_resume_global_outport_out_msg_vt:
    {
      __po_hi_marshall_request_vt_compstate_resume_outport_out_msg_vt (request, message, &(offset));

      break;
    }
    case vt_compstate_stop_recording_global_inport_artificial_stop_recording:
    {
      __po_hi_marshall_request_vt_compstate_stop_recording_inport_artificial_stop_recording (request, message, &(offset));

      break;
    }
    case vt_compstate_stop_recording_global_outport_out_msg_vt:
    {
      __po_hi_marshall_request_vt_compstate_stop_recording_outport_out_msg_vt (request, message, &(offset));

      break;
    }
    case vt_compstate_fail_global_inport_artificial_fail:
    {
      __po_hi_marshall_request_vt_compstate_fail_inport_artificial_fail (request, message, &(offset));

      break;
    }
    case vt_compstate_fail_global_outport_out_msg_vt:
    {
      __po_hi_marshall_request_vt_compstate_fail_outport_out_msg_vt (request, message, &(offset));

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
    case vt_gui_out_msg_global_inport_artificial_out_msg:
    {
      __po_hi_unmarshall_request_vt_gui_out_msg_inport_artificial_out_msg (request, message, &(offset));

      break;
    }
    case vt_gui_out_msg_global_outport_switch_on_vt:
    {
      __po_hi_unmarshall_request_vt_gui_out_msg_outport_switch_on_vt (request, message, &(offset));

      break;
    }
    case vt_gui_out_msg_global_outport_switch_off_vt:
    {
      __po_hi_unmarshall_request_vt_gui_out_msg_outport_switch_off_vt (request, message, &(offset));

      break;
    }
    case vt_gui_out_msg_global_outport_restart_vt:
    {
      __po_hi_unmarshall_request_vt_gui_out_msg_outport_restart_vt (request, message, &(offset));

      break;
    }
    case vt_gui_out_msg_global_outport_start_recording_vt:
    {
      __po_hi_unmarshall_request_vt_gui_out_msg_outport_start_recording_vt (request, message, &(offset));

      break;
    }
    case vt_gui_out_msg_global_outport_pause_vt:
    {
      __po_hi_unmarshall_request_vt_gui_out_msg_outport_pause_vt (request, message, &(offset));

      break;
    }
    case vt_gui_out_msg_global_outport_resume_vt:
    {
      __po_hi_unmarshall_request_vt_gui_out_msg_outport_resume_vt (request, message, &(offset));

      break;
    }
    case vt_gui_out_msg_global_outport_fail_vt:
    {
      __po_hi_unmarshall_request_vt_gui_out_msg_outport_fail_vt (request, message, &(offset));

      break;
    }
    case vt_gui_out_msg_global_outport_stop_recording_vt:
    {
      __po_hi_unmarshall_request_vt_gui_out_msg_outport_stop_recording_vt (request, message, &(offset));

      break;
    }
    case vt_gui_gui_polling_gui_global_outport_switch_on_vt:
    {
      __po_hi_unmarshall_request_vt_gui_gui_polling_gui_outport_switch_on_vt (request, message, &(offset));

      break;
    }
    case vt_gui_gui_polling_gui_global_outport_switch_off_vt:
    {
      __po_hi_unmarshall_request_vt_gui_gui_polling_gui_outport_switch_off_vt (request, message, &(offset));

      break;
    }
    case vt_gui_gui_polling_gui_global_outport_restart_vt:
    {
      __po_hi_unmarshall_request_vt_gui_gui_polling_gui_outport_restart_vt (request, message, &(offset));

      break;
    }
    case vt_gui_gui_polling_gui_global_outport_start_recording_vt:
    {
      __po_hi_unmarshall_request_vt_gui_gui_polling_gui_outport_start_recording_vt (request, message, &(offset));

      break;
    }
    case vt_gui_gui_polling_gui_global_outport_pause_vt:
    {
      __po_hi_unmarshall_request_vt_gui_gui_polling_gui_outport_pause_vt (request, message, &(offset));

      break;
    }
    case vt_gui_gui_polling_gui_global_outport_resume_vt:
    {
      __po_hi_unmarshall_request_vt_gui_gui_polling_gui_outport_resume_vt (request, message, &(offset));

      break;
    }
    case vt_gui_gui_polling_gui_global_outport_fail_vt:
    {
      __po_hi_unmarshall_request_vt_gui_gui_polling_gui_outport_fail_vt (request, message, &(offset));

      break;
    }
    case vt_gui_gui_polling_gui_global_outport_stop_recording_vt:
    {
      __po_hi_unmarshall_request_vt_gui_gui_polling_gui_outport_stop_recording_vt (request, message, &(offset));

      break;
    }
    case vt_compstate_switch_on_global_inport_artificial_switch_on:
    {
      __po_hi_unmarshall_request_vt_compstate_switch_on_inport_artificial_switch_on (request, message, &(offset));

      break;
    }
    case vt_compstate_switch_on_global_outport_out_msg_vt:
    {
      __po_hi_unmarshall_request_vt_compstate_switch_on_outport_out_msg_vt (request, message, &(offset));

      break;
    }
    case vt_compstate_switch_off_global_inport_artificial_switch_off:
    {
      __po_hi_unmarshall_request_vt_compstate_switch_off_inport_artificial_switch_off (request, message, &(offset));

      break;
    }
    case vt_compstate_switch_off_global_outport_out_msg_vt:
    {
      __po_hi_unmarshall_request_vt_compstate_switch_off_outport_out_msg_vt (request, message, &(offset));

      break;
    }
    case vt_compstate_restart_global_inport_artificial_restart:
    {
      __po_hi_unmarshall_request_vt_compstate_restart_inport_artificial_restart (request, message, &(offset));

      break;
    }
    case vt_compstate_restart_global_outport_out_msg_vt:
    {
      __po_hi_unmarshall_request_vt_compstate_restart_outport_out_msg_vt (request, message, &(offset));

      break;
    }
    case vt_compstate_start_recording_global_inport_artificial_start_recording:
    {
      __po_hi_unmarshall_request_vt_compstate_start_recording_inport_artificial_start_recording (request, message, &(offset));

      break;
    }
    case vt_compstate_start_recording_global_outport_out_msg_vt:
    {
      __po_hi_unmarshall_request_vt_compstate_start_recording_outport_out_msg_vt (request, message, &(offset));

      break;
    }
    case vt_compstate_pause_global_inport_artificial_pause:
    {
      __po_hi_unmarshall_request_vt_compstate_pause_inport_artificial_pause (request, message, &(offset));

      break;
    }
    case vt_compstate_pause_global_outport_out_msg_vt:
    {
      __po_hi_unmarshall_request_vt_compstate_pause_outport_out_msg_vt (request, message, &(offset));

      break;
    }
    case vt_compstate_resume_global_inport_artificial_resume:
    {
      __po_hi_unmarshall_request_vt_compstate_resume_inport_artificial_resume (request, message, &(offset));

      break;
    }
    case vt_compstate_resume_global_outport_out_msg_vt:
    {
      __po_hi_unmarshall_request_vt_compstate_resume_outport_out_msg_vt (request, message, &(offset));

      break;
    }
    case vt_compstate_stop_recording_global_inport_artificial_stop_recording:
    {
      __po_hi_unmarshall_request_vt_compstate_stop_recording_inport_artificial_stop_recording (request, message, &(offset));

      break;
    }
    case vt_compstate_stop_recording_global_outport_out_msg_vt:
    {
      __po_hi_unmarshall_request_vt_compstate_stop_recording_outport_out_msg_vt (request, message, &(offset));

      break;
    }
    case vt_compstate_fail_global_inport_artificial_fail:
    {
      __po_hi_unmarshall_request_vt_compstate_fail_inport_artificial_fail (request, message, &(offset));

      break;
    }
    case vt_compstate_fail_global_outport_out_msg_vt:
    {
      __po_hi_unmarshall_request_vt_compstate_fail_outport_out_msg_vt (request, message, &(offset));

      break;
    }
    default:
    {
      break;
    }
  }
}


