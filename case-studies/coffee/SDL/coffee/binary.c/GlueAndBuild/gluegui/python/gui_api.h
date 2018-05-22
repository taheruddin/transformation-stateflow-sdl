#ifndef __HEADER_gui_H__
#define __HEADER_gui_H__

typedef unsigned char byte;

int OpenMsgQueueForReading(char *queueName);
void CloseMsgQueue(int queue_id);
int GetMsgQueueBufferSize(int queue_id);
int RetrieveMessageFromQueue(int queue_id, int maxSize, byte *pBuf);
int SendTC_get_init_tmpr(void *p_init_tmpr);
int SendTC_get_init_water(void *p_init_water);
int SendTC_for_water(void *p_w);
int SendTC_for_water_tmpr(void *p_w);
int SendTC_for_coffee(void *p_w);
int SendTC_for_ticking(void *p_w);

#endif
