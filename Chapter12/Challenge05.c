#include <stdio.h>

//버블정렬 함수
int BubbleSort(int arr[], int len)
{
	for (int i = len - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[j] > arr[j + 1])
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
	int arr[4] = { 3, 2, 4, 1 };
	int len = sizeof(arr) / sizeof(int);
	BubbleSort(arr, len);
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}