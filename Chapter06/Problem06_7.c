#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	printf("0이상의 정수 입력: ");
	scanf("%d", &n);

	switch (n / 10)
	{
	case 0:
		printf("0 이상 10 미만 \n");
		break;
	case 1:
		printf("10 이상 20 미만 \n");
		break;
	case 2:
		printf("20 이상 30 미만 \n");
		break;
	default:
		printf("30 이상 \n");
	}
	return 0;
}