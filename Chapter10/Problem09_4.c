#include <stdio.h>

int main(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* ptr = arr;
	for (int i = 0; i < 5; i++)
	{
		*(ptr + i) += 2;
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]); //3 4 5 6 7
	}
	return 0;
}