#include<stdio.h>

int main()
{
	int arr[10];
	int readCount = 0;
	int readDate;
	int i;



	while (1)
	{
		printf("�ڿ��� �Է� : ");
		scanf("%d", &readDate);
		if (readDate < 1)
			break;

		
		arr[readCount++] = readDate;
	}

	//�����ǤǤǤ���
	for (i = 0; i < readCount; i++)
	{
		printf("%d ", arr[i]);
	}



	return 0;
}