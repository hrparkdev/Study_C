#include <stdio.h>

int main(void)
{
	int arr[3] = { 15, 25, 35 };
	int* ptr = &arr[0]; // int* ptr = arr; 과 동일한 문장

	printf("%d %d \n", ptr[0], arr[0]); // 15 15
	printf("%d %d \n", ptr[1], arr[1]); // 25 25
	printf("%d %d \n", ptr[2], arr[2]); // 35 35
	printf("%d %d \n", *ptr, *arr); // 15 15

	return 0;
}
