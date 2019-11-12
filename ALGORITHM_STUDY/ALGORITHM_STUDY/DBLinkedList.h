#ifndef __DB_LINKED_LIST_H__
#define __DB_LINKED_LIST_H__

#define TRUE	1
#define FALSE	0

typedef int Data;

typedef struct _node
{
	Data data;
	struct _node * next; // 오른쪽 노드 참조
	struct _node * prev; // 왼쪽노드 참조
} Node;

typedef struct _dbLinkedList
{
	Node * head; 
	Node * tail;
	Node * cur; // 진행중인 참조를 확인할수 있음.
	int numOfData;
} DBLinkedList;

typedef DBLinkedList List;

void ListInit(List * plist);
void LInsert(List * plist, Data data);

int LFirst(List * plist, Data * pdata);
int LNext(List * plist, Data * pdata);

//int LPrevious(List * plist, Data * pdata);

Data LRemove(List* plist); //추가
int LCount(List * plist);

#endif