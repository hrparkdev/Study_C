#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char voca[100];
	int len = 0;
	int startIdx = 0;
	int endIdx = 0;
	char tmp;

	printf("영단어 입력: ");
	scanf("%s", voca);

	while (voca[len] != '\0')
	{
		len++;
	}

	endIdx = len - 1;
	for (int i = 0; i < len / 2; i++)
	{
		tmp = voca[endIdx];
		voca[endIdx] = voca[startIdx];
		voca[startIdx] = tmp;
		startIdx++;
		endIdx--;
	}
	printf("뒤집힌 영단어: %s", voca);
	return 0;
}