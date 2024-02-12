#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;

	printf("하나의 정수 입력: ");
	scanf("%d", &num);

	printf("%d의 제곱의 결과: %d", num, num * num);

	return 0;
}