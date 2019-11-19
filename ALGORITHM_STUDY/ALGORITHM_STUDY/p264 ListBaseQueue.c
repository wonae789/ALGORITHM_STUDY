#include<stdio.h>
#include<stdlib.h>
#include "p264 ListBaseQueue.h"

void QueueInit(Queue* pq)
{
	pq->front = NULL;
	pq->rear = NULL;

}

int QIsEmpty(Queue* pq)
{
	if (pq->front == NULL) 
		return TRUE;
	else 
		return FALSE;
}

void Enqueue(Queue* pq, Data data)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->next = NULL;
	newNode->data = data;

	if (QIsEmpty(pq))
	{
		pq->front = newNode;
		pq->rear = newNode;
	}
	else //enqueue 의 과정이 첫번째 노드와 두번째 노드일때 구분되는 불편함이 있다.
		 //2번째 Enqueue 부터는 else를 읽게된다.
	{
		pq->rear->next = newNode;
		pq->rear = newNode;
	}
}

Data Dequeue(Queue* pq)
{
	Node* delNode; // 삭제를 위한 백업용 노드
	Data retData; // 백업용 데이터
	if (QIsEmpty(pq))
	{
		printf("memory error!");
		exit(-1);
	}

	delNode = pq->front;// 주소 백업
	retData = delNode->data; // 데이터 백업
	pq->front = pq->front->next;//f가 다음 노드를 가르키게함.
	free(delNode);
	return retData; // 출력용으로.
}

Data QPeek(Queue* pq)
{
	if (QIsEmpty(pq))
	{
		printf("memory error!");
		exit(-1);
	}
	return pq->front->data;
}