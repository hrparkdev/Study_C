#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	int result = 1;
	printf("정수 입력: ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		result *= i;
	}

	printf("%d! = %d \n", num, result);
	return 0;
}