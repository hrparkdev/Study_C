#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1;
	int num2;

	printf("두 개의 정수 입력: ");
	scanf("%d %d", &num1, &num2);

	printf("num1 나누기 num2의 몫 = %d\n", num1 / num2);
	printf("num1 나누기 num2의 나머지 = %d", num1 % num2);

	return 0;
}