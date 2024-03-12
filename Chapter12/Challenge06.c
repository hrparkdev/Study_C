#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int DesSort(int arr[], int len)
{
	for(int i = len - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main(void)
{
	int arr[7] = { 0 };
	int len = sizeof(arr) / sizeof(int);
	for (int i = 0; i < len; i++)
	{
		printf("입력: ");
		scanf("%d", &arr[i]);
	}
	DesSort(arr, len);
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}