#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// #define ADD 1
#define MIN 0

int main(void)
{
	int num1;
	int num2;
	printf("두 개의 정수 입력: ");
	scanf("%d %d", &num1, &num2);

#ifndef ADD
	printf("%d + %d = %d \n", num1, num2, num1 + num2);
#endif

#ifdef MIN
	printf("%d - %d = %d \n", num1, num2, num1 - num2);
#endif

	return 0;
}