#ifndef __HEADER_gui_H__
#define __HEADER_gui_H__

typedef unsigned char byte;

int OpenMsgQueueForReading(char *queueName);
void CloseMsgQueue(int queue_id);
int GetMsgQueueBufferSize(int queue_id);
int RetrieveMessageFromQueue(int queue_id, int maxSize, byte *pBuf);
int SendTC_push(void *p_w);
int SendTC_tap(void *p_w);

#endif
