#include<stdio.h>
#include "P213 ListBaseStack.h"

int main()
{
	Stack stack;
	StackInit(&stack);


	Spush(&stack, 1);
	Spush(&stack, 2);
	Spush(&stack, 3);
	Spush(&stack, 4);
	Spush(&stack, 5);

	while (!SIsEmpty(&stack))
		printf("%d ", SPop(&stack));





}