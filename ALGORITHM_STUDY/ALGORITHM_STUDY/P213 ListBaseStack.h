#ifndef __AB_STACK_H__
#define __AB_STACK_H__

#define TRUE 1
#define FALSE 0
#define STACK_LEN 100

typedef int Data;

typedef struct _node
{
	Data data;
	struct _node* next;
}Node;

typedef struct _ListStack
{
	Node* head;
}ListStack;

typedef ListStack Stack;

void StackInit(Stack* pstack);
int SIsEmpty(Stack* pstack);

void Spush(Stack* pstack, Data data);
Data SPop(Stack* pstack);
Data SPeek(Stack* pstack);


#endif // !__AB_STACK_H__
