#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char voca[100];
	int len = 0;
	char max = 0;
	printf("영단어 입력: ");
	scanf("%s", voca);
	while (voca[len] != '\0')
	{
		len++;
	}
	for (int i = 0; i < len; i++)
	{
		if (max < voca[i])
		{
			max = voca[i];
		}
	}
	printf("아스키 코드 값이 가장 큰 문자: %c", max);
	return 0;
}