#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	int i = 0;

	printf("양의 정수 입력: ");
	scanf("%d", &num);
	while (i < num)
	{
		printf("Hello world! \n");
		i++;
	}
	return 0;
}