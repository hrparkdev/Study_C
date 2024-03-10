#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int SquareByValue(int num)
{
	return num * num;
}

void SquareByReference(int* ptr)
{
	int num = *ptr;
	*ptr = num * num;
}

int main(void)
{
	int num;
	printf("정수를 입력: ");
	scanf("%d", &num);

	printf("제곱 결과: %d \n", SquareByValue(num));
	SquareByReference(&num);
	printf("제곱 결과: %d \n", num);

	return 0;
}