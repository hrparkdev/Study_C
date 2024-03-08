#include <stdio.h>

int main(void)
{
	int num1 = 10;
	int num2 = 20;
	int num3 = 30;
	int* arr[3] = {&num1, &num2, &num3};

	printf("%d \n", *arr[0]);
	printf("%d \n", *arr[1]);
	printf("%d \n", *arr[2]);

	return 0;
}
