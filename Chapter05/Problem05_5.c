#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int total = 0;
	int i = 0;
	int num; //입력 갯수
	int input;
	printf("입력할 정수의 수는? ");
	scanf("%d", &num);
	while (i < num)
	{
		printf("정수 입력: ");
		scanf("%d", &input);
		total += input;
		i++;
	}
	printf("입력의 평균: %f", (double)total / num);
	return 0;
}