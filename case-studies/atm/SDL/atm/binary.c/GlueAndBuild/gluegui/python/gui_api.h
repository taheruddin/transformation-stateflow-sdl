#ifndef __HEADER_gui_H__
#define __HEADER_gui_H__

typedef unsigned char byte;

int OpenMsgQueueForReading(char *queueName);
void CloseMsgQueue(int queue_id);
int GetMsgQueueBufferSize(int queue_id);
int RetrieveMessageFromQueue(int queue_id, int maxSize, byte *pBuf);
int SendTC_accept_card(void *p_account);
int SendTC_reject_transaction(void *p_w);
int SendTC_out_of_service(void *p_w);
int SendTC_abort_out(void *p_w);
int SendTC_amount(void *p_amount);
int SendTC_other_amount(void *p_w);
int SendTC_digit(void *p_num);
int SendTC_ok(void *p_w);
int SendTC_transaction_succeseeded(void *p_w);

#endif
