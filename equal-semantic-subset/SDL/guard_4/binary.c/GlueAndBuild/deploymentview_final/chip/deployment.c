#include <po_hi_protected.h>
#include <deployment.h>
#include <po_hi_types.h>
#include <po_hi_transport.h>
/*****************************************************/
/*  This file was automatically generated by Ocarina */
/*  Do NOT hand-modify this file, as your            */
/*  changes will be lost when you re-run Ocarina     */
/*****************************************************/
__po_hi_protected_protocol_t __po_hi_protected_configuration[__PO_HI_NB_PROTECTED] = {__PO_HI_PROTECTED_REGULAR};
__po_hi_uint8_t __po_hi_protected_priorities[__PO_HI_NB_PROTECTED] = {0};
__po_hi_entity_t __po_hi_port_global_to_entity[__PO_HI_NB_PORTS] = {chip_guard_4_k_entity,chip_guard_4_k_entity,chip_vt_gui_out_msg_k_entity,chip_vt_gui_out_msg_k_entity,chip_vt_gui_gui_polling_gui_k_entity};
char* __po_hi_port_global_names[__PO_HI_NB_PORTS] = {"guard_4_global_inport_e","guard_4_global_outport_out_msg","vt_gui_out_msg_global_inport_artificial_out_msg","vt_gui_out_msg_global_outport_e_vt","vt_gui_gui_polling_gui_global_outport_e_vt"};
char* __po_hi_port_global_model_names[__PO_HI_NB_PORTS] = {"inport_e","outport_out_msg","inport_artificial_out_msg","outport_e_vt","outport_e_vt"};
__po_hi_port_kind_t __po_hi_port_global_kind[__PO_HI_NB_PORTS] = {__PO_HI_IN_EVENT_DATA_INTRA_PROCESS,__PO_HI_OUT_EVENT_DATA_INTRA_PROCESS,__PO_HI_IN_EVENT_DATA_INTRA_PROCESS,__PO_HI_OUT_EVENT_DATA_INTRA_PROCESS,__PO_HI_OUT_EVENT_DATA_INTRA_PROCESS};
__po_hi_uint32_t __po_hi_port_global_data_size[__PO_HI_NB_PORTS] = {sizeof (dataview__myreal_buffer_impl),sizeof (dataview__mystring_buffer_impl),sizeof (dataview__mystring_buffer_impl),sizeof (dataview__myreal_buffer_impl),sizeof (dataview__myreal_buffer_impl)};
__po_hi_uint32_t __po_hi_port_global_queue_size[__PO_HI_NB_PORTS] = {1,1,1,1,1};
__po_hi_local_port_t __po_hi_port_global_to_local[__PO_HI_NB_PORTS] = {guard_4_local_inport_e,guard_4_local_outport_out_msg,vt_gui_out_msg_local_inport_artificial_out_msg,vt_gui_out_msg_local_outport_e_vt,vt_gui_gui_polling_gui_local_outport_e_vt};
__po_hi_node_t __po_hi_entity_table[__PO_HI_NB_ENTITIES] = {chip_k,chip_k,chip_k};
__po_hi_uint8_t __po_hi_deployment_endiannesses[__PO_HI_NB_NODES] = {__PO_HI_LITTLEENDIAN};
__po_hi_device_id __po_hi_port_to_device[__PO_HI_NB_PORTS] = {0,0,0,0,0};

