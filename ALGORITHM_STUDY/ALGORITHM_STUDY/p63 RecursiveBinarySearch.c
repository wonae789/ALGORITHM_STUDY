#include<stdio.h> // 피보나치 함수


int BSearchRecur(int ar[], int first, int last, int target)
{
	int mid;
	if (first > last) // 첫인덱스가 마지막 인덱스보다 커지면 실패
		return -1; 
	mid = (first + last) / 2; // 중간 mid 인덱스 설정
	if (ar[mid] == target) // 타겟 찾으면 해당 인덱스 반환
		return mid;
	else if(target<ar[mid])
		return BSearchRecur(ar, first, mid-1, target);
	else
		return BSearchRecur(ar, mid+1, last, target);


}

int main(void)
{
	int arr[] = { 1,3,5,7,9 };
	int idx;

	idx = BSearchRecur(arr, 0,sizeof(arr) / sizeof(int)-1, 7);
	if (idx == -1)
		printf("탐색실패\n");
	else
		printf("타겟 저장 인덱스 : %d\n", idx);

	idx = BSearchRecur(arr, 0,sizeof(arr) / sizeof(int)-1, 4);
	if (idx == -1)
		printf("탐색실패\n");
	else
		printf("타겟 저장 인덱스 : %d\n", idx);
}