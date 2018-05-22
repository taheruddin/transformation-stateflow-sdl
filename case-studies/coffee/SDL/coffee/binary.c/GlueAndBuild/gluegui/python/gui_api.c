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
T_gui_RI_list ii_get_init_tmpr = i_get_init_tmpr;
typedef struct {
    int tc_id;
    T_Int32 init_tmpr;
} get_init_tmpr_TCDATA;

int SendTC_get_init_tmpr(void *p_init_tmpr)
{
    static mqd_t q = (mqd_t)-2;
    if (((mqd_t)-2) == q) {
        static char QName[1024];
        sprintf(QName, "%d_gui_RI_queue", geteuid());
        open_exchange_queue_for_writing(QName, &q);
    }
    get_init_tmpr_TCDATA data;
    data.tc_id = (int) i_get_init_tmpr;
    data.init_tmpr = * (T_Int32 *) p_init_tmpr;
    if (((mqd_t)-1) != q) {
        write_message_to_queue(q, sizeof(get_init_tmpr_TCDATA)-4, &data.init_tmpr, data.tc_id);
    } else {
        return -1;
    }
    return 0;
}
T_gui_RI_list ii_get_init_water = i_get_init_water;
typedef struct {
    int tc_id;
    T_Int32 init_water;
} get_init_water_TCDATA;

int SendTC_get_init_water(void *p_init_water)
{
    static mqd_t q = (mqd_t)-2;
    if (((mqd_t)-2) == q) {
        static char QName[1024];
        sprintf(QName, "%d_gui_RI_queue", geteuid());
        open_exchange_queue_for_writing(QName, &q);
    }
    get_init_water_TCDATA data;
    data.tc_id = (int) i_get_init_water;
    data.init_water = * (T_Int32 *) p_init_water;
    if (((mqd_t)-1) != q) {
        write_message_to_queue(q, sizeof(get_init_water_TCDATA)-4, &data.init_water, data.tc_id);
    } else {
        return -1;
    }
    return 0;
}
T_gui_RI_list ii_for_water = i_for_water;
typedef struct {
    int tc_id;
    MyString w;
} for_water_TCDATA;

int SendTC_for_water(void *p_w)
{
    static mqd_t q = (mqd_t)-2;
    if (((mqd_t)-2) == q) {
        static char QName[1024];
        sprintf(QName, "%d_gui_RI_queue", geteuid());
        open_exchange_queue_for_writing(QName, &q);
    }
    for_water_TCDATA data;
    data.tc_id = (int) i_for_water;
    data.w = * (MyString *) p_w;
    if (((mqd_t)-1) != q) {
        write_message_to_queue(q, sizeof(for_water_TCDATA)-4, &data.w, data.tc_id);
    } else {
        return -1;
    }
    return 0;
}
T_gui_RI_list ii_for_water_tmpr = i_for_water_tmpr;
typedef struct {
    int tc_id;
    MyString w;
} for_water_tmpr_TCDATA;

int SendTC_for_water_tmpr(void *p_w)
{
    static mqd_t q = (mqd_t)-2;
    if (((mqd_t)-2) == q) {
        static char QName[1024];
        sprintf(QName, "%d_gui_RI_queue", geteuid());
        open_exchange_queue_for_writing(QName, &q);
    }
    for_water_tmpr_TCDATA data;
    data.tc_id = (int) i_for_water_tmpr;
    data.w = * (MyString *) p_w;
    if (((mqd_t)-1) != q) {
        write_message_to_queue(q, sizeof(for_water_tmpr_TCDATA)-4, &data.w, data.tc_id);
    } else {
        return -1;
    }
    return 0;
}
T_gui_RI_list ii_for_coffee = i_for_coffee;
typedef struct {
    int tc_id;
    MyString w;
} for_coffee_TCDATA;

int SendTC_for_coffee(void *p_w)
{
    static mqd_t q = (mqd_t)-2;
    if (((mqd_t)-2) == q) {
        static char QName[1024];
        sprintf(QName, "%d_gui_RI_queue", geteuid());
        open_exchange_queue_for_writing(QName, &q);
    }
    for_coffee_TCDATA data;
    data.tc_id = (int) i_for_coffee;
    data.w = * (MyString *) p_w;
    if (((mqd_t)-1) != q) {
        write_message_to_queue(q, sizeof(for_coffee_TCDATA)-4, &data.w, data.tc_id);
    } else {
        return -1;
    }
    return 0;
}
T_gui_RI_list ii_for_ticking = i_for_ticking;
typedef struct {
    int tc_id;
    MyString w;
} for_ticking_TCDATA;

int SendTC_for_ticking(void *p_w)
{
    static mqd_t q = (mqd_t)-2;
    if (((mqd_t)-2) == q) {
        static char QName[1024];
        sprintf(QName, "%d_gui_RI_queue", geteuid());
        open_exchange_queue_for_writing(QName, &q);
    }
    for_ticking_TCDATA data;
    data.tc_id = (int) i_for_ticking;
    data.w = * (MyString *) p_w;
    if (((mqd_t)-1) != q) {
        write_message_to_queue(q, sizeof(for_ticking_TCDATA)-4, &data.w, data.tc_id);
    } else {
        return -1;
    }
    return 0;
}
