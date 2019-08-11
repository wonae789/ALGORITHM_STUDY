#include<stdio.h>

int BSearch(int ar[], int len, int target) // 이진 탐색 알고리즘 적용된 함수
{
	int first = 0;
	int last = len - 1;
	int min;

	while (first <= last)
	{
		min = (first + last) / 2;
		if (target == ar[min])
		{
			return min;
		}

		else
		{
			if (target < ar[min])
				last = min - 1;
			else
				first = min + 1;



		}
	}
	return -1;
}

int main(void)
{
	int arr[] = { 1,3,5,7,9 };
	int idx;

	idx = BSearch(arr, sizeof(arr) / sizeof(int), 7);
	if (idx == -1)
		printf("탐색실패\n");
	else
		printf("타겟 저장 인덱스 : %d\n", idx);

	idx = BSearch(arr, sizeof(arr) / sizeof(int), 4);
	if (idx == -1)
		printf("탐색실패\n");
	else
		printf("타겟 저장 인덱스 : %d\n", idx);


	return 0;
}