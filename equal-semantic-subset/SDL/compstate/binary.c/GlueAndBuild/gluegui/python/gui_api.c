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
T_gui_RI_list ii_switch_on = i_switch_on;
typedef struct {
    int tc_id;
    MyString w;
} switch_on_TCDATA;

int SendTC_switch_on(void *p_w)
{
    static mqd_t q = (mqd_t)-2;
    if (((mqd_t)-2) == q) {
        static char QName[1024];
        sprintf(QName, "%d_gui_RI_queue", geteuid());
        open_exchange_queue_for_writing(QName, &q);
    }
    switch_on_TCDATA data;
    data.tc_id = (int) i_switch_on;
    data.w = * (MyString *) p_w;
    if (((mqd_t)-1) != q) {
        write_message_to_queue(q, sizeof(switch_on_TCDATA)-4, &data.w, data.tc_id);
    } else {
        return -1;
    }
    return 0;
}
T_gui_RI_list ii_switch_off = i_switch_off;
typedef struct {
    int tc_id;
    MyString w;
} switch_off_TCDATA;

int SendTC_switch_off(void *p_w)
{
    static mqd_t q = (mqd_t)-2;
    if (((mqd_t)-2) == q) {
        static char QName[1024];
        sprintf(QName, "%d_gui_RI_queue", geteuid());
        open_exchange_queue_for_writing(QName, &q);
    }
    switch_off_TCDATA data;
    data.tc_id = (int) i_switch_off;
    data.w = * (MyString *) p_w;
    if (((mqd_t)-1) != q) {
        write_message_to_queue(q, sizeof(switch_off_TCDATA)-4, &data.w, data.tc_id);
    } else {
        return -1;
    }
    return 0;
}
T_gui_RI_list ii_restart = i_restart;
typedef struct {
    int tc_id;
    MyString w;
} restart_TCDATA;

int SendTC_restart(void *p_w)
{
    static mqd_t q = (mqd_t)-2;
    if (((mqd_t)-2) == q) {
        static char QName[1024];
        sprintf(QName, "%d_gui_RI_queue", geteuid());
        open_exchange_queue_for_writing(QName, &q);
    }
    restart_TCDATA data;
    data.tc_id = (int) i_restart;
    data.w = * (MyString *) p_w;
    if (((mqd_t)-1) != q) {
        write_message_to_queue(q, sizeof(restart_TCDATA)-4, &data.w, data.tc_id);
    } else {
        return -1;
    }
    return 0;
}
T_gui_RI_list ii_start_recording = i_start_recording;
typedef struct {
    int tc_id;
    MyString w;
} start_recording_TCDATA;

int SendTC_start_recording(void *p_w)
{
    static mqd_t q = (mqd_t)-2;
    if (((mqd_t)-2) == q) {
        static char QName[1024];
        sprintf(QName, "%d_gui_RI_queue", geteuid());
        open_exchange_queue_for_writing(QName, &q);
    }
    start_recording_TCDATA data;
    data.tc_id = (int) i_start_recording;
    data.w = * (MyString *) p_w;
    if (((mqd_t)-1) != q) {
        write_message_to_queue(q, sizeof(start_recording_TCDATA)-4, &data.w, data.tc_id);
    } else {
        return -1;
    }
    return 0;
}
T_gui_RI_list ii_pause = i_pause;
typedef struct {
    int tc_id;
    MyString w;
} pause_TCDATA;

int SendTC_pause(void *p_w)
{
    static mqd_t q = (mqd_t)-2;
    if (((mqd_t)-2) == q) {
        static char QName[1024];
        sprintf(QName, "%d_gui_RI_queue", geteuid());
        open_exchange_queue_for_writing(QName, &q);
    }
    pause_TCDATA data;
    data.tc_id = (int) i_pause;
    data.w = * (MyString *) p_w;
    if (((mqd_t)-1) != q) {
        write_message_to_queue(q, sizeof(pause_TCDATA)-4, &data.w, data.tc_id);
    } else {
        return -1;
    }
    return 0;
}
T_gui_RI_list ii_resume = i_resume;
typedef struct {
    int tc_id;
    MyString w;
} resume_TCDATA;

int SendTC_resume(void *p_w)
{
    static mqd_t q = (mqd_t)-2;
    if (((mqd_t)-2) == q) {
        static char QName[1024];
        sprintf(QName, "%d_gui_RI_queue", geteuid());
        open_exchange_queue_for_writing(QName, &q);
    }
    resume_TCDATA data;
    data.tc_id = (int) i_resume;
    data.w = * (MyString *) p_w;
    if (((mqd_t)-1) != q) {
        write_message_to_queue(q, sizeof(resume_TCDATA)-4, &data.w, data.tc_id);
    } else {
        return -1;
    }
    return 0;
}
T_gui_RI_list ii_fail = i_fail;
typedef struct {
    int tc_id;
    MyString w;
} fail_TCDATA;

int SendTC_fail(void *p_w)
{
    static mqd_t q = (mqd_t)-2;
    if (((mqd_t)-2) == q) {
        static char QName[1024];
        sprintf(QName, "%d_gui_RI_queue", geteuid());
        open_exchange_queue_for_writing(QName, &q);
    }
    fail_TCDATA data;
    data.tc_id = (int) i_fail;
    data.w = * (MyString *) p_w;
    if (((mqd_t)-1) != q) {
        write_message_to_queue(q, sizeof(fail_TCDATA)-4, &data.w, data.tc_id);
    } else {
        return -1;
    }
    return 0;
}
T_gui_RI_list ii_stop_recording = i_stop_recording;
typedef struct {
    int tc_id;
    MyString w;
} stop_recording_TCDATA;

int SendTC_stop_recording(void *p_w)
{
    static mqd_t q = (mqd_t)-2;
    if (((mqd_t)-2) == q) {
        static char QName[1024];
        sprintf(QName, "%d_gui_RI_queue", geteuid());
        open_exchange_queue_for_writing(QName, &q);
    }
    stop_recording_TCDATA data;
    data.tc_id = (int) i_stop_recording;
    data.w = * (MyString *) p_w;
    if (((mqd_t)-1) != q) {
        write_message_to_queue(q, sizeof(stop_recording_TCDATA)-4, &data.w, data.tc_id);
    } else {
        return -1;
    }
    return 0;
}
