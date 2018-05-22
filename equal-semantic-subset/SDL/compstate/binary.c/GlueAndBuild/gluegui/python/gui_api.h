#ifndef __HEADER_gui_H__
#define __HEADER_gui_H__

typedef unsigned char byte;

int OpenMsgQueueForReading(char *queueName);
void CloseMsgQueue(int queue_id);
int GetMsgQueueBufferSize(int queue_id);
int RetrieveMessageFromQueue(int queue_id, int maxSize, byte *pBuf);
int SendTC_switch_on(void *p_w);
int SendTC_switch_off(void *p_w);
int SendTC_restart(void *p_w);
int SendTC_start_recording(void *p_w);
int SendTC_pause(void *p_w);
int SendTC_resume(void *p_w);
int SendTC_fail(void *p_w);
int SendTC_stop_recording(void *p_w);

#endif
