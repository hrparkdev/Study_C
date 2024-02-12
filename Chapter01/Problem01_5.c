#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1;
	int num2;
	int num3;
	int result;

	printf("세 개의 정수 입력: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	result = (num1 - num2) * (num2 + num3) * (num3 % num1);

	printf("(num1 - num2) x (num2 + num3) x (num3 %% num1) = %d", result);

	return 0;
}
