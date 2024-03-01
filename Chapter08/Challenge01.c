#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	printf("10진수 정수 입력: ");
	scanf("%d", &num);
	printf("10진수 -> 16진수 정수 %#x \n", num);
	return 0;
} 