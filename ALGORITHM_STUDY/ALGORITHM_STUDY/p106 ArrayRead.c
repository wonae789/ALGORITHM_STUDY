#include<stdio.h>

int main()
{
	int arr[10];
	int readCount = 0;
	int readDate;
	int i;



	while (1)
	{
		printf("자연수 입력 : ");
		scanf("%d", &readDate);
		if (readDate < 1)
			break;

		
		arr[readCount++] = readDate;
	}

	//ㄴㄴㅗㅗㅗㅀㅀ
	for (i = 0; i < readCount; i++)
	{
		printf("%d ", arr[i]);
	}



	return 0;
}