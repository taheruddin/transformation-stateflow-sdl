#include <activity.h>
#include <po_hi_task.h>
#include <po_hi_main.h>
#include <types.h>
#include <po_hi_time.h>
/*****************************************************/
/*  This file was automatically generated by Ocarina */
/*  Do NOT hand-modify this file, as your            */
/*  changes will be lost when you re-run Ocarina     */
/*****************************************************/
extern void init_gui (void);
extern void init_gui (void);
extern void init_gui (void);
extern void init_gui (void);
extern void init_gui (void);
extern void init_atm (void);
extern void init_atm (void);
extern void init_atm (void);
extern void init_atm (void);
extern void init_atm (void);
extern void init_atm (void);
extern void init_atm (void);
extern void init_atm (void);
extern void init_atm (void);
process_package__taste_protected_object gui_protected;
process_package__taste_protected_object atm_protected;

/*!
 * \fn __PO_HI_MAIN_TYPE __PO_HI_MAIN_NAME (void)
 * \brief Main function executed by the system
 *
 * Full function name and return types are available  in the PolyORB-HI-C 
 * runtime header files.
 */
__PO_HI_MAIN_TYPE __PO_HI_MAIN_NAME (void)
{
  
/*!
 * \var period
 * \brief Variable for task period
 *
 * This variable is used to store the valueof the period of a task when we 
 * create it. The value put in the variable is set according to AADL model 
 * description
 */
  __po_hi_time_t period;

  __po_hi_initialize_early ();
  
/*!
 * Initialize the runtime
 */
  __po_hi_initialize ();
  init_gui ();
  init_gui ();
  init_gui ();
  init_gui ();
  init_gui ();
  init_atm ();
  init_atm ();
  init_atm ();
  init_atm ();
  init_atm ();
  init_atm ();
  init_atm ();
  init_atm ();
  init_atm ();
  gui_protected.protected_id = 0;
  atm_protected.protected_id = 1;
  
/*!
 * Store the period time for task vt_gui_transaction
 */
  __po_hi_milliseconds (&(period), 1);
  
/*!
 * Making Sporadic task
 */
  __po_hi_create_sporadic_task (chip_vt_gui_transaction_k, &(period), 1, 50000, 0, vt_gui_transaction_job);
  
/*!
 * Store the period time for task vt_gui_display
 */
  __po_hi_milliseconds (&(period), 1);
  
/*!
 * Making Sporadic task
 */
  __po_hi_create_sporadic_task (chip_vt_gui_display_k, &(period), 1, 50000, 0, vt_gui_display_job);
  
/*!
 * Store the period time for task vt_gui_eject_card
 */
  __po_hi_milliseconds (&(period), 1);
  
/*!
 * Making Sporadic task
 */
  __po_hi_create_sporadic_task (chip_vt_gui_eject_card_k, &(period), 1, 50000, 0, vt_gui_eject_card_job);
  
/*!
 * Store the period time for task vt_gui_out_msg
 */
  __po_hi_milliseconds (&(period), 1);
  
/*!
 * Making Sporadic task
 */
  __po_hi_create_sporadic_task (chip_vt_gui_out_msg_k, &(period), 1, 50000, 0, vt_gui_out_msg_job);
  
/*!
 * Store the period time for task vt_gui_gui_polling_gui
 */
  __po_hi_milliseconds (&(period), 40);
  
/*!
 * \brief Making Periodic Task vt_gui_gui_polling_gui
 *
 * Make a periodic task according to AADL model requirements. The first 
 * parameter is the task identifier defined in deployment.h 
 * (chip_vt_gui_gui_polling_gui_k) the second is the period defined in the 
 * AADL model. Third is the task priority ( 1), fourth is the stack size ( 
 * 50000 bytes) and last is the subprogram executed by the task
 */
  __po_hi_create_periodic_task (chip_vt_gui_gui_polling_gui_k, &(period), 1, 50000, 0, vt_gui_gui_polling_gui_job);
  
/*!
 * Store the period time for task vt_atm_accept_card
 */
  __po_hi_milliseconds (&(period), 1);
  
/*!
 * Making Sporadic task
 */
  __po_hi_create_sporadic_task (chip_vt_atm_accept_card_k, &(period), 1, 50000, 0, vt_atm_accept_card_job);
  
/*!
 * Store the period time for task vt_atm_reject_transaction
 */
  __po_hi_milliseconds (&(period), 1);
  
/*!
 * Making Sporadic task
 */
  __po_hi_create_sporadic_task (chip_vt_atm_reject_transaction_k, &(period), 1, 50000, 0, vt_atm_reject_transaction_job);
  
/*!
 * Store the period time for task vt_atm_out_of_service
 */
  __po_hi_milliseconds (&(period), 1);
  
/*!
 * Making Sporadic task
 */
  __po_hi_create_sporadic_task (chip_vt_atm_out_of_service_k, &(period), 1, 50000, 0, vt_atm_out_of_service_job);
  
/*!
 * Store the period time for task vt_atm_abort_out
 */
  __po_hi_milliseconds (&(period), 1);
  
/*!
 * Making Sporadic task
 */
  __po_hi_create_sporadic_task (chip_vt_atm_abort_out_k, &(period), 1, 50000, 0, vt_atm_abort_out_job);
  
/*!
 * Store the period time for task vt_atm_amount
 */
  __po_hi_milliseconds (&(period), 1);
  
/*!
 * Making Sporadic task
 */
  __po_hi_create_sporadic_task (chip_vt_atm_amount_k, &(period), 1, 50000, 0, vt_atm_amount_job);
  
/*!
 * Store the period time for task vt_atm_other_amount
 */
  __po_hi_milliseconds (&(period), 1);
  
/*!
 * Making Sporadic task
 */
  __po_hi_create_sporadic_task (chip_vt_atm_other_amount_k, &(period), 1, 50000, 0, vt_atm_other_amount_job);
  
/*!
 * Store the period time for task vt_atm_digit
 */
  __po_hi_milliseconds (&(period), 1);
  
/*!
 * Making Sporadic task
 */
  __po_hi_create_sporadic_task (chip_vt_atm_digit_k, &(period), 1, 50000, 0, vt_atm_digit_job);
  
/*!
 * Store the period time for task vt_atm_ok
 */
  __po_hi_milliseconds (&(period), 1);
  
/*!
 * Making Sporadic task
 */
  __po_hi_create_sporadic_task (chip_vt_atm_ok_k, &(period), 1, 50000, 0, vt_atm_ok_job);
  
/*!
 * Store the period time for task vt_atm_transaction_succeseeded
 */
  __po_hi_milliseconds (&(period), 1);
  
/*!
 * Making Sporadic task
 */
  __po_hi_create_sporadic_task (chip_vt_atm_transaction_succeseeded_k, &(period), 1, 50000, 0, vt_atm_transaction_succeseeded_job);
  
/*!
 * Waiting for other tasks initialization
 */
  __po_hi_wait_initialization ();
  
/*!
 * Used to switch the main task to sleep all the time
 */
  __po_hi_wait_for_tasks ();
  
/*!
 * Return Statement
 */
  return (__PO_HI_MAIN_RETURN);
}


