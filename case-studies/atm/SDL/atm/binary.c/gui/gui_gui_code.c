#include <unistd.h>
#include <mqueue.h>
#include "queue_manager.h"
#include "gui_gui_header.h"



//Handle to the queue of incomming messages
static mqd_t    gui_RI_queue_id;



//Variable to contain the size of the biggest type of messqges to be handled for RI
int    gui_RI_max_msg_size = 0;



//Handle to the queue of incomming messages
static mqd_t    gui_PI_queue_id;


static mqd_t    gui_PI_Python_queue_id;



//Variable to contain the size of the biggest type of messqges to be handled for PI
int    gui_PI_max_msg_size = 0;


void gui_PI_gui_polling_gui()
{
   int msgsz = 0;
   unsigned int sender = 0;
   struct mq_attr msgq_attr;
   char* msgcontent = NULL;
   int msg_cnt = 0;
   T_gui_RI_list message_recieved_type;


   if ( (msgcontent = (char*)malloc( sizeof(char) * gui_RI_max_msg_size ) ) == NULL)
   {
      perror("Error when allocating memory in gui_cyc_ function");
      return;
   }

   mq_getattr(gui_RI_queue_id, &msgq_attr);

   while (!retrieve_message_from_queue(gui_RI_queue_id, gui_RI_max_msg_size, msgcontent, (int *)&message_recieved_type))
   {
      switch(message_recieved_type)
      {
       case i_transaction_succeseeded : INVOKE_RI_transaction_succeseeded (msgcontent);
                 break; 
       case i_ok : INVOKE_RI_ok (msgcontent);
                 break; 
       case i_digit : INVOKE_RI_digit (msgcontent);
                 break; 
       case i_other_amount : INVOKE_RI_other_amount (msgcontent);
                 break; 
       case i_amount : INVOKE_RI_amount (msgcontent);
                 break; 
       case i_abort_out : INVOKE_RI_abort_out (msgcontent);
                 break; 
       case i_out_of_service : INVOKE_RI_out_of_service (msgcontent);
                 break; 
       case i_reject_transaction : INVOKE_RI_reject_transaction (msgcontent);
                 break; 
       case i_accept_card : INVOKE_RI_accept_card (msgcontent);
                 break; 
       default : break;
      }
   }

   free(msgcontent);

   return;
}
void gui_PI_transaction(const asn1SccAmount* amount)
{
   //Create a variable of type T_transaction__data to be contained in the queue
   T_transaction__data transaction__data;

   transaction__data.amount = *amount;

   write_message_to_queue(gui_PI_queue_id, sizeof(T_transaction__data), (void*)&transaction__data, i_transaction);

   write_message_to_queue(gui_PI_Python_queue_id, sizeof(T_transaction__data), (void*)&transaction__data, i_transaction);

}

void gui_PI_display(const asn1SccMyString* msg)
{
   //Create a variable of type T_display__data to be contained in the queue
   T_display__data display__data;

   display__data.msg = *msg;

   write_message_to_queue(gui_PI_queue_id, sizeof(T_display__data), (void*)&display__data, i_display);

   write_message_to_queue(gui_PI_Python_queue_id, sizeof(T_display__data), (void*)&display__data, i_display);

}

void gui_PI_eject_card(const asn1SccMyString* w)
{
   //Create a variable of type T_eject_card__data to be contained in the queue
   T_eject_card__data eject_card__data;

   eject_card__data.w = *w;

   write_message_to_queue(gui_PI_queue_id, sizeof(T_eject_card__data), (void*)&eject_card__data, i_eject_card);

   write_message_to_queue(gui_PI_Python_queue_id, sizeof(T_eject_card__data), (void*)&eject_card__data, i_eject_card);

}

void gui_PI_out_msg(const asn1SccMyString* msg)
{
   //Create a variable of type T_out_msg__data to be contained in the queue
   T_out_msg__data out_msg__data;

   out_msg__data.msg = *msg;

   write_message_to_queue(gui_PI_queue_id, sizeof(T_out_msg__data), (void*)&out_msg__data, i_out_msg);

   write_message_to_queue(gui_PI_Python_queue_id, sizeof(T_out_msg__data), (void*)&out_msg__data, i_out_msg);

}

int compute_max_queue_size_element_for_RI(void)
{
   int MAX_SIZE = sizeof(int);   // The minimum size of a message (id + functional data) is the size of the id alone !

   if( sizeof(T_transaction_succeseeded_message) > MAX_SIZE )
      MAX_SIZE = sizeof(T_transaction_succeseeded_message);

   if( sizeof(T_ok_message) > MAX_SIZE )
      MAX_SIZE = sizeof(T_ok_message);

   if( sizeof(T_digit_message) > MAX_SIZE )
      MAX_SIZE = sizeof(T_digit_message);

   if( sizeof(T_other_amount_message) > MAX_SIZE )
      MAX_SIZE = sizeof(T_other_amount_message);

   if( sizeof(T_amount_message) > MAX_SIZE )
      MAX_SIZE = sizeof(T_amount_message);

   if( sizeof(T_abort_out_message) > MAX_SIZE )
      MAX_SIZE = sizeof(T_abort_out_message);

   if( sizeof(T_out_of_service_message) > MAX_SIZE )
      MAX_SIZE = sizeof(T_out_of_service_message);

   if( sizeof(T_reject_transaction_message) > MAX_SIZE )
      MAX_SIZE = sizeof(T_reject_transaction_message);

   if( sizeof(T_accept_card_message) > MAX_SIZE )
      MAX_SIZE = sizeof(T_accept_card_message);

   return(MAX_SIZE);
}


int compute_max_queue_size_element_for_PI(void)
{
   int MAX_SIZE = sizeof(int);   // The minimum size of a message (id + functional data) is the size of the id alone !

   if( sizeof(T_out_msg_message) > MAX_SIZE )
      MAX_SIZE = sizeof(T_out_msg_message);

   if( sizeof(T_eject_card_message) > MAX_SIZE )
      MAX_SIZE = sizeof(T_eject_card_message);

   if( sizeof(T_display_message) > MAX_SIZE )
      MAX_SIZE = sizeof(T_display_message);

   if( sizeof(T_transaction_message) > MAX_SIZE )
      MAX_SIZE = sizeof(T_transaction_message);

   return(MAX_SIZE);
}


void gui_startup(void)
{
   int res_RI = 0;
   int res_PI = 0;
   int msgsize_max = 8192;
   FILE *f = fopen("/proc/sys/fs/mqueue/msgsize_max", "r");
   fscanf(f, "%d", &msgsize_max);

    if (sizeof(T_transaction_message) > msgsize_max) {
        printf("[ERROR] The GUI is passing a message (transaction) which parameter size (%d) exceeds your system limit (%d).\nYou can extend this limit by running: \n    echo NUMBER | sudo tee /proc/sys/fs/mqueue/msgsize_max  # ...with NUMBER > %d\nYou can also make it permanent (check TASTE wiki)\n\n", sizeof(T_transaction_message), msgsize_max, sizeof(T_transaction_message));
        exit(1);
    }

    if (sizeof(T_display_message) > msgsize_max) {
        printf("[ERROR] The GUI is passing a message (display) which parameter size (%d) exceeds your system limit (%d).\nYou can extend this limit by running: \n    echo NUMBER | sudo tee /proc/sys/fs/mqueue/msgsize_max  # ...with NUMBER > %d\nYou can also make it permanent (check TASTE wiki)\n\n", sizeof(T_display_message), msgsize_max, sizeof(T_display_message));
        exit(1);
    }

    if (sizeof(T_eject_card_message) > msgsize_max) {
        printf("[ERROR] The GUI is passing a message (eject_card) which parameter size (%d) exceeds your system limit (%d).\nYou can extend this limit by running: \n    echo NUMBER | sudo tee /proc/sys/fs/mqueue/msgsize_max  # ...with NUMBER > %d\nYou can also make it permanent (check TASTE wiki)\n\n", sizeof(T_eject_card_message), msgsize_max, sizeof(T_eject_card_message));
        exit(1);
    }

    if (sizeof(T_out_msg_message) > msgsize_max) {
        printf("[ERROR] The GUI is passing a message (out_msg) which parameter size (%d) exceeds your system limit (%d).\nYou can extend this limit by running: \n    echo NUMBER | sudo tee /proc/sys/fs/mqueue/msgsize_max  # ...with NUMBER > %d\nYou can also make it permanent (check TASTE wiki)\n\n", sizeof(T_out_msg_message), msgsize_max, sizeof(T_out_msg_message));
        exit(1);
    }

    if (sizeof(T_accept_card_message) > msgsize_max) {
        printf("[ERROR] The GUI is passing a message (accept_card) which parameter size (%d) exceeds your system limit (%d).\nYou can extend this limit by running: \n    echo NUMBER | sudo tee /proc/sys/fs/mqueue/msgsize_max  # ...with NUMBER > %d\nYou can also make it permanent (check TASTE wiki)\n\n", sizeof(T_accept_card_message), msgsize_max, sizeof(T_accept_card_message));
        exit(1);
    }

    if (sizeof(T_reject_transaction_message) > msgsize_max) {
        printf("[ERROR] The GUI is passing a message (reject_transaction) which parameter size (%d) exceeds your system limit (%d).\nYou can extend this limit by running: \n    echo NUMBER | sudo tee /proc/sys/fs/mqueue/msgsize_max  # ...with NUMBER > %d\nYou can also make it permanent (check TASTE wiki)\n\n", sizeof(T_reject_transaction_message), msgsize_max, sizeof(T_reject_transaction_message));
        exit(1);
    }

    if (sizeof(T_out_of_service_message) > msgsize_max) {
        printf("[ERROR] The GUI is passing a message (out_of_service) which parameter size (%d) exceeds your system limit (%d).\nYou can extend this limit by running: \n    echo NUMBER | sudo tee /proc/sys/fs/mqueue/msgsize_max  # ...with NUMBER > %d\nYou can also make it permanent (check TASTE wiki)\n\n", sizeof(T_out_of_service_message), msgsize_max, sizeof(T_out_of_service_message));
        exit(1);
    }

    if (sizeof(T_abort_out_message) > msgsize_max) {
        printf("[ERROR] The GUI is passing a message (abort_out) which parameter size (%d) exceeds your system limit (%d).\nYou can extend this limit by running: \n    echo NUMBER | sudo tee /proc/sys/fs/mqueue/msgsize_max  # ...with NUMBER > %d\nYou can also make it permanent (check TASTE wiki)\n\n", sizeof(T_abort_out_message), msgsize_max, sizeof(T_abort_out_message));
        exit(1);
    }

    if (sizeof(T_amount_message) > msgsize_max) {
        printf("[ERROR] The GUI is passing a message (amount) which parameter size (%d) exceeds your system limit (%d).\nYou can extend this limit by running: \n    echo NUMBER | sudo tee /proc/sys/fs/mqueue/msgsize_max  # ...with NUMBER > %d\nYou can also make it permanent (check TASTE wiki)\n\n", sizeof(T_amount_message), msgsize_max, sizeof(T_amount_message));
        exit(1);
    }

    if (sizeof(T_other_amount_message) > msgsize_max) {
        printf("[ERROR] The GUI is passing a message (other_amount) which parameter size (%d) exceeds your system limit (%d).\nYou can extend this limit by running: \n    echo NUMBER | sudo tee /proc/sys/fs/mqueue/msgsize_max  # ...with NUMBER > %d\nYou can also make it permanent (check TASTE wiki)\n\n", sizeof(T_other_amount_message), msgsize_max, sizeof(T_other_amount_message));
        exit(1);
    }

    if (sizeof(T_digit_message) > msgsize_max) {
        printf("[ERROR] The GUI is passing a message (digit) which parameter size (%d) exceeds your system limit (%d).\nYou can extend this limit by running: \n    echo NUMBER | sudo tee /proc/sys/fs/mqueue/msgsize_max  # ...with NUMBER > %d\nYou can also make it permanent (check TASTE wiki)\n\n", sizeof(T_digit_message), msgsize_max, sizeof(T_digit_message));
        exit(1);
    }

    if (sizeof(T_ok_message) > msgsize_max) {
        printf("[ERROR] The GUI is passing a message (ok) which parameter size (%d) exceeds your system limit (%d).\nYou can extend this limit by running: \n    echo NUMBER | sudo tee /proc/sys/fs/mqueue/msgsize_max  # ...with NUMBER > %d\nYou can also make it permanent (check TASTE wiki)\n\n", sizeof(T_ok_message), msgsize_max, sizeof(T_ok_message));
        exit(1);
    }

    if (sizeof(T_transaction_succeseeded_message) > msgsize_max) {
        printf("[ERROR] The GUI is passing a message (transaction_succeseeded) which parameter size (%d) exceeds your system limit (%d).\nYou can extend this limit by running: \n    echo NUMBER | sudo tee /proc/sys/fs/mqueue/msgsize_max  # ...with NUMBER > %d\nYou can also make it permanent (check TASTE wiki)\n\n", sizeof(T_transaction_succeseeded_message), msgsize_max, sizeof(T_transaction_succeseeded_message));
        exit(1);
    }

   gui_RI_max_msg_size = compute_max_queue_size_element_for_RI();

   {
    char *gui_queue_name = NULL;
    int  len = snprintf (gui_queue_name, 0, "%d_gui_RI_queue", geteuid());
    gui_queue_name = (char *) malloc ((size_t) len + 1);
    if (NULL != gui_queue_name) {
       snprintf (gui_queue_name, len + 1, "%d_gui_RI_queue", geteuid());

       create_exchange_queue(gui_queue_name, 45, gui_RI_max_msg_size, &gui_RI_queue_id);

       free (gui_queue_name);
       gui_queue_name = NULL;
    }
   }
   gui_PI_max_msg_size = compute_max_queue_size_element_for_PI();

   {
    char *gui_queue_name = NULL;
    int  len = snprintf (gui_queue_name, 0, "%d_gui_PI_queue", geteuid());
    gui_queue_name = (char *) malloc ((size_t) len + 1);
    if (NULL != gui_queue_name) {
       snprintf (gui_queue_name, len + 1, "%d_gui_PI_queue", geteuid());

       create_exchange_queue(gui_queue_name, 25, gui_PI_max_msg_size, &gui_PI_queue_id);

       free (gui_queue_name);
       gui_queue_name = NULL;
    }
    len = snprintf (gui_queue_name, 0, "%d_gui_PI_Python_queue", geteuid());
    gui_queue_name = (char *) malloc ((size_t) len + 1);
    if (NULL != gui_queue_name) {
       snprintf (gui_queue_name, len + 1, "%d_gui_PI_Python_queue", geteuid());

       /* Extra queue for the TM sent to the Python mappers */
       create_exchange_queue(gui_queue_name, 25, gui_PI_max_msg_size, &gui_PI_Python_queue_id);

       free (gui_queue_name);
       gui_queue_name = NULL;
    }
   }
}

