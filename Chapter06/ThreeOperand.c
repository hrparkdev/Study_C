#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	int abs;
	printf("정수 입력: ");
	scanf("%d", &num);

	abs = num > 0 ? num : num * (-1);
	printf("절댓값: %d \n", abs);
	return 0;
}