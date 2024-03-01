#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	int calResult = 2;
	int k = 0;

	printf("상수 n 입력: ");
	scanf("%d", &n);

	while (calResult <= n)
	{
		calResult *= 2;
		k++;
	}
	printf("공식을 만족하는 k의 최댓값은 %d", k);
	return 0;
} 