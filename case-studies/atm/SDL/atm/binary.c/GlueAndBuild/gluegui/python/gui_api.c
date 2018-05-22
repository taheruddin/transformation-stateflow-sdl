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

T_gui_PI_list ii_transaction = i_transaction;
T_gui_PI_list ii_display = i_display;
T_gui_PI_list ii_eject_card = i_eject_card;
T_gui_PI_list ii_out_msg = i_out_msg;
T_gui_RI_list ii_accept_card = i_accept_card;
typedef struct {
    int tc_id;
    MyString account;
} accept_card_TCDATA;

int SendTC_accept_card(void *p_account)
{
    static mqd_t q = (mqd_t)-2;
    if (((mqd_t)-2) == q) {
        static char QName[1024];
        sprintf(QName, "%d_gui_RI_queue", geteuid());
        open_exchange_queue_for_writing(QName, &q);
    }
    accept_card_TCDATA data;
    data.tc_id = (int) i_accept_card;
    data.account = * (MyString *) p_account;
    if (((mqd_t)-1) != q) {
        write_message_to_queue(q, sizeof(accept_card_TCDATA)-4, &data.account, data.tc_id);
    } else {
        return -1;
    }
    return 0;
}
T_gui_RI_list ii_reject_transaction = i_reject_transaction;
typedef struct {
    int tc_id;
    MyString w;
} reject_transaction_TCDATA;

int SendTC_reject_transaction(void *p_w)
{
    static mqd_t q = (mqd_t)-2;
    if (((mqd_t)-2) == q) {
        static char QName[1024];
        sprintf(QName, "%d_gui_RI_queue", geteuid());
        open_exchange_queue_for_writing(QName, &q);
    }
    reject_transaction_TCDATA data;
    data.tc_id = (int) i_reject_transaction;
    data.w = * (MyString *) p_w;
    if (((mqd_t)-1) != q) {
        write_message_to_queue(q, sizeof(reject_transaction_TCDATA)-4, &data.w, data.tc_id);
    } else {
        return -1;
    }
    return 0;
}
T_gui_RI_list ii_out_of_service = i_out_of_service;
typedef struct {
    int tc_id;
    MyString w;
} out_of_service_TCDATA;

int SendTC_out_of_service(void *p_w)
{
    static mqd_t q = (mqd_t)-2;
    if (((mqd_t)-2) == q) {
        static char QName[1024];
        sprintf(QName, "%d_gui_RI_queue", geteuid());
        open_exchange_queue_for_writing(QName, &q);
    }
    out_of_service_TCDATA data;
    data.tc_id = (int) i_out_of_service;
    data.w = * (MyString *) p_w;
    if (((mqd_t)-1) != q) {
        write_message_to_queue(q, sizeof(out_of_service_TCDATA)-4, &data.w, data.tc_id);
    } else {
        return -1;
    }
    return 0;
}
T_gui_RI_list ii_abort_out = i_abort_out;
typedef struct {
    int tc_id;
    MyString w;
} abort_out_TCDATA;

int SendTC_abort_out(void *p_w)
{
    static mqd_t q = (mqd_t)-2;
    if (((mqd_t)-2) == q) {
        static char QName[1024];
        sprintf(QName, "%d_gui_RI_queue", geteuid());
        open_exchange_queue_for_writing(QName, &q);
    }
    abort_out_TCDATA data;
    data.tc_id = (int) i_abort_out;
    data.w = * (MyString *) p_w;
    if (((mqd_t)-1) != q) {
        write_message_to_queue(q, sizeof(abort_out_TCDATA)-4, &data.w, data.tc_id);
    } else {
        return -1;
    }
    return 0;
}
T_gui_RI_list ii_amount = i_amount;
typedef struct {
    int tc_id;
    Amount amount;
} amount_TCDATA;

int SendTC_amount(void *p_amount)
{
    static mqd_t q = (mqd_t)-2;
    if (((mqd_t)-2) == q) {
        static char QName[1024];
        sprintf(QName, "%d_gui_RI_queue", geteuid());
        open_exchange_queue_for_writing(QName, &q);
    }
    amount_TCDATA data;
    data.tc_id = (int) i_amount;
    data.amount = * (Amount *) p_amount;
    if (((mqd_t)-1) != q) {
        write_message_to_queue(q, sizeof(amount_TCDATA)-4, &data.amount, data.tc_id);
    } else {
        return -1;
    }
    return 0;
}
T_gui_RI_list ii_other_amount = i_other_amount;
typedef struct {
    int tc_id;
    MyString w;
} other_amount_TCDATA;

int SendTC_other_amount(void *p_w)
{
    static mqd_t q = (mqd_t)-2;
    if (((mqd_t)-2) == q) {
        static char QName[1024];
        sprintf(QName, "%d_gui_RI_queue", geteuid());
        open_exchange_queue_for_writing(QName, &q);
    }
    other_amount_TCDATA data;
    data.tc_id = (int) i_other_amount;
    data.w = * (MyString *) p_w;
    if (((mqd_t)-1) != q) {
        write_message_to_queue(q, sizeof(other_amount_TCDATA)-4, &data.w, data.tc_id);
    } else {
        return -1;
    }
    return 0;
}
T_gui_RI_list ii_digit = i_digit;
typedef struct {
    int tc_id;
    Num num;
} digit_TCDATA;

int SendTC_digit(void *p_num)
{
    static mqd_t q = (mqd_t)-2;
    if (((mqd_t)-2) == q) {
        static char QName[1024];
        sprintf(QName, "%d_gui_RI_queue", geteuid());
        open_exchange_queue_for_writing(QName, &q);
    }
    digit_TCDATA data;
    data.tc_id = (int) i_digit;
    data.num = * (Num *) p_num;
    if (((mqd_t)-1) != q) {
        write_message_to_queue(q, sizeof(digit_TCDATA)-4, &data.num, data.tc_id);
    } else {
        return -1;
    }
    return 0;
}
T_gui_RI_list ii_ok = i_ok;
typedef struct {
    int tc_id;
    MyString w;
} ok_TCDATA;

int SendTC_ok(void *p_w)
{
    static mqd_t q = (mqd_t)-2;
    if (((mqd_t)-2) == q) {
        static char QName[1024];
        sprintf(QName, "%d_gui_RI_queue", geteuid());
        open_exchange_queue_for_writing(QName, &q);
    }
    ok_TCDATA data;
    data.tc_id = (int) i_ok;
    data.w = * (MyString *) p_w;
    if (((mqd_t)-1) != q) {
        write_message_to_queue(q, sizeof(ok_TCDATA)-4, &data.w, data.tc_id);
    } else {
        return -1;
    }
    return 0;
}
T_gui_RI_list ii_transaction_succeseeded = i_transaction_succeseeded;
typedef struct {
    int tc_id;
    MyString w;
} transaction_succeseeded_TCDATA;

int SendTC_transaction_succeseeded(void *p_w)
{
    static mqd_t q = (mqd_t)-2;
    if (((mqd_t)-2) == q) {
        static char QName[1024];
        sprintf(QName, "%d_gui_RI_queue", geteuid());
        open_exchange_queue_for_writing(QName, &q);
    }
    transaction_succeseeded_TCDATA data;
    data.tc_id = (int) i_transaction_succeseeded;
    data.w = * (MyString *) p_w;
    if (((mqd_t)-1) != q) {
        write_message_to_queue(q, sizeof(transaction_succeseeded_TCDATA)-4, &data.w, data.tc_id);
    } else {
        return -1;
    }
    return 0;
}
