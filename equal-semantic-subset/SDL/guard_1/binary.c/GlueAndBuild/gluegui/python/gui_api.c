#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <mqueue.h>

#include "dataview-uniq.h"
#include "gui_enums_def.h"
#include "queue_manager.h"

int OpenMsgQueueForReading(char *queueName)
{
    mqd_t queue_id;
    if (0 == open_exchange_queue_for_reading(queueName, &queue_id))
        return queue_id;
    return -1;
}

void CloseMsgQueue(int queue_id)
{
    mq_close(queue_id);
}

int GetMsgQueueBufferSize(int _queue_id)
{
    struct mq_attr mqstat;
    mq_getattr(_queue_id, &mqstat);
    return mqstat.mq_msgsize;
}

int RetrieveMessageFromQueue(int queue_id, int maxSize, byte *pBuf)
{
    int message_received_type = -1;
    retrieve_message_from_queue(queue_id, maxSize, pBuf, &message_received_type);
    return(message_received_type);
}

T_gui_PI_list ii_out_msg = i_out_msg;
T_gui_RI_list ii_get_data = i_get_data;
typedef struct {
    int tc_id;
    MyReal x;
} get_data_TCDATA;

int SendTC_get_data(void *p_x)
{
    static mqd_t q = (mqd_t)-2;
    if (((mqd_t)-2) == q) {
        static char QName[1024];
        sprintf(QName, "%d_gui_RI_queue", geteuid());
        open_exchange_queue_for_writing(QName, &q);
    }
    get_data_TCDATA data;
    data.tc_id = (int) i_get_data;
    data.x = * (MyReal *) p_x;
    if (((mqd_t)-1) != q) {
        write_message_to_queue(q, sizeof(get_data_TCDATA)-4, &data.x, data.tc_id);
    } else {
        return -1;
    }
    return 0;
}
T_gui_RI_list ii_check = i_check;
typedef struct {
    int tc_id;
    MyString whatever;
} check_TCDATA;

int SendTC_check(void *p_whatever)
{
    static mqd_t q = (mqd_t)-2;
    if (((mqd_t)-2) == q) {
        static char QName[1024];
        sprintf(QName, "%d_gui_RI_queue", geteuid());
        open_exchange_queue_for_writing(QName, &q);
    }
    check_TCDATA data;
    data.tc_id = (int) i_check;
    data.whatever = * (MyString *) p_whatever;
    if (((mqd_t)-1) != q) {
        write_message_to_queue(q, sizeof(check_TCDATA)-4, &data.whatever, data.tc_id);
    } else {
        return -1;
    }
    return 0;
}
