#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int MaxAndMin(int** dMaxPtr, int** dMinPtr, int arr[], int len)
{
	int* maxPtr = &arr[0];
	int* minPtr = &arr[0];

	for (int i = 1; i < len; i++)
	{
		if (*maxPtr < arr[i])
		{
			maxPtr = &arr[i];
		}

		if (*minPtr > arr[i])
		{
			minPtr = &arr[i];
		}
	}

	*dMaxPtr = maxPtr;
	*dMinPtr = minPtr;

	return 0;
}

int main(void)
{
	int* maxPtr;
	int* minPtr;
	int arr[5];

	for (int i = 0; i < 5; i++)
	{
		printf("정수 입력%d: ", i + 1);
		scanf("%d", &arr[i]);
	}

	MaxAndMin(&maxPtr, &minPtr, arr, sizeof(arr) / sizeof(int));
	printf("최대값: %d, 최소값: %d \n", *maxPtr, *minPtr);

	return 0;
}