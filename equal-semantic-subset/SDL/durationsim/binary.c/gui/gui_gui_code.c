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
       case i_inputmsg : INVOKE_RI_inputmsg (msgcontent);
                 break; 
       default : break;
      }
   }

   free(msgcontent);

   return;
}
void gui_PI_outputmsg(const asn1SccMyString* outmsg)
{
   //Create a variable of type T_outputmsg__data to be contained in the queue
   T_outputmsg__data outputmsg__data;

   outputmsg__data.outmsg = *outmsg;

   write_message_to_queue(gui_PI_queue_id, sizeof(T_outputmsg__data), (void*)&outputmsg__data, i_outputmsg);

   write_message_to_queue(gui_PI_Python_queue_id, sizeof(T_outputmsg__data), (void*)&outputmsg__data, i_outputmsg);

}

int compute_max_queue_size_element_for_RI(void)
{
   int MAX_SIZE = sizeof(int);   // The minimum size of a message (id + functional data) is the size of the id alone !

   if( sizeof(T_inputmsg_message) > MAX_SIZE )
      MAX_SIZE = sizeof(T_inputmsg_message);

   return(MAX_SIZE);
}


int compute_max_queue_size_element_for_PI(void)
{
   int MAX_SIZE = sizeof(int);   // The minimum size of a message (id + functional data) is the size of the id alone !

   if( sizeof(T_outputmsg_message) > MAX_SIZE )
      MAX_SIZE = sizeof(T_outputmsg_message);

   return(MAX_SIZE);
}


void gui_startup(void)
{
   int res_RI = 0;
   int res_PI = 0;
   int msgsize_max = 8192;
   FILE *f = fopen("/proc/sys/fs/mqueue/msgsize_max", "r");
   fscanf(f, "%d", &msgsize_max);

    if (sizeof(T_outputmsg_message) > msgsize_max) {
        printf("[ERROR] The GUI is passing a message (outputmsg) which parameter size (%d) exceeds your system limit (%d).\nYou can extend this limit by running: \n    echo NUMBER | sudo tee /proc/sys/fs/mqueue/msgsize_max  # ...with NUMBER > %d\nYou can also make it permanent (check TASTE wiki)\n\n", sizeof(T_outputmsg_message), msgsize_max, sizeof(T_outputmsg_message));
        exit(1);
    }

    if (sizeof(T_inputmsg_message) > msgsize_max) {
        printf("[ERROR] The GUI is passing a message (inputmsg) which parameter size (%d) exceeds your system limit (%d).\nYou can extend this limit by running: \n    echo NUMBER | sudo tee /proc/sys/fs/mqueue/msgsize_max  # ...with NUMBER > %d\nYou can also make it permanent (check TASTE wiki)\n\n", sizeof(T_inputmsg_message), msgsize_max, sizeof(T_inputmsg_message));
        exit(1);
    }

   gui_RI_max_msg_size = compute_max_queue_size_element_for_RI();

   {
    char *gui_queue_name = NULL;
    int  len = snprintf (gui_queue_name, 0, "%d_gui_RI_queue", geteuid());
    gui_queue_name = (char *) malloc ((size_t) len + 1);
    if (NULL != gui_queue_name) {
       snprintf (gui_queue_name, len + 1, "%d_gui_RI_queue", geteuid());

       create_exchange_queue(gui_queue_name, 5, gui_RI_max_msg_size, &gui_RI_queue_id);

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

       create_exchange_queue(gui_queue_name, 10, gui_PI_max_msg_size, &gui_PI_queue_id);

       free (gui_queue_name);
       gui_queue_name = NULL;
    }
    len = snprintf (gui_queue_name, 0, "%d_gui_PI_Python_queue", geteuid());
    gui_queue_name = (char *) malloc ((size_t) len + 1);
    if (NULL != gui_queue_name) {
       snprintf (gui_queue_name, len + 1, "%d_gui_PI_Python_queue", geteuid());

       /* Extra queue for the TM sent to the Python mappers */
       create_exchange_queue(gui_queue_name, 10, gui_PI_max_msg_size, &gui_PI_Python_queue_id);

       free (gui_queue_name);
       gui_queue_name = NULL;
    }
   }
}

