#ifndef __C_QUEUE_H__
#define __C_QUEUE_H__

#define TRUE 1
#define FALSE 0

#define QUE_LEN 100

typedef int Data;

typedef struct _CQueue
{
	int front; //F
	int rear; //R
	Data queArr[QUE_LEN];
}CQueue;

typedef CQueue Queue;

int NextPosIdx(int pos);

void QueueInit(Queue* pq);
int QIsEmpty(Queue* pq);


void Enqueue(Queue* pq, Data data);
Data Dequeue(Queue* pq);
Data QPeek(Queue* pq);




#endif