#ifndef __OCARINA_GENERATED_ACTIVITY_H_
#define __OCARINA_GENERATED_ACTIVITY_H_ 
#include <request.h>
/*****************************************************/

/*  This file was automatically generated by Ocarina */

/*  Do NOT hand-modify this file, as your            */

/*  changes will be lost when you re-run Ocarina     */

/*****************************************************/

void vt_gui_out_msg_deliver 
    (__po_hi_request_t* request);

void* vt_gui_out_msg_job (void);

void vt_gui_gui_polling_gui_deliver 
    (__po_hi_request_t* request);

void* vt_gui_gui_polling_gui_job (void);

void vt_guard_1_get_data_deliver 
    (__po_hi_request_t* request);

void* vt_guard_1_get_data_job (void);

void vt_guard_1_check_deliver 
    (__po_hi_request_t* request);

void* vt_guard_1_check_job (void);

void __po_hi_main_deliver 
    (__po_hi_request_t* request);

#endif
