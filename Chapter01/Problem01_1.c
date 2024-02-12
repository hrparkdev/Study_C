#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1;
	int num2;

	printf("두 개의 정수 입력: ");
	scanf("%d %d", &num1, &num2);

	printf("num1 - num2 = %d \n", num1 - num2);
	printf("num1 x num2 = %d \n", num1 * num2);

	return 0;
}