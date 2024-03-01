#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int input;
	int hour = 0;
	int minute = 0;
	int second = 0;

	printf("초 입력: ");
	scanf("%d", &input);

	hour = input / 3600;
	minute = (input % 3600) / 60;
	second = (input % 3600) % 60;
	printf("%d초 -> %d시간 %d분 %d초", input, hour, minute, second);
	return 0;
} 