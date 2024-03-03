#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[5];
	int maxNum;
	int minNum;
	int sum;

	printf("5개의 정수를 입력: ");
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}

	maxNum = arr[0];
	minNum = arr[0];
	sum = arr[0];
	for (int i = 1; i < 5; i++)
	{
		if (maxNum < arr[i])
		{
			maxNum = arr[i];
		}

		if (minNum > arr[i])
		{
			minNum = arr[i];
		}

		sum += arr[i];
	}

	printf("입력된 정수 중에서 최댓값: %d \n", maxNum);
	printf("입력된 정수 중에서 최솟값: %d \n", minNum);
	printf("입력된 정수의 총 합: %d \n", sum);
	return 0;
}