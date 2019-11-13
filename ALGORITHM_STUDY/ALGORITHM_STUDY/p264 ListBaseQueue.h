#ifndef __LB_QUEUE_H__
#define __LB_QUEUE_H__

#define TRUE	1
#define FALSE	0

typedef int Data;

typedef struct _node
{
	Data data;
	struct _node* next;
} Node;

typedef struct _lQueue
{
	Node* front; //F 삭제 담당
	Node* rear; // R 삽입 담당
} LQueue; // typedef 시 첫스펠링은 대문자 표기가 약속.


typedef LQueue Queue;

void QueueInit(Queue* pq);
int QIsEmpty(Queue* pq);

void Enqueue(Queue* pq, Data data);
Data Dequeue(Queue* pq);
Data QPeek(Queue* pq);

#endif

