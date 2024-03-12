#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int StringLen(char* str)
{
	int len = strlen(str);
	return len;
}

void IsPalindrome(char* str)
{
	int startIndex = 0;
	int endIndex = 0;
	char result = 'Y';
	int len = StringLen(str);
	endIndex = len - 1;

	for (int i = 0; i < len / 2; i++)
	{
		if (str[startIndex] != str[endIndex])
		{
			result = 'N';
			break;
		}
		startIndex++;
		endIndex--;
	}

	if (result == 'Y')
	{
		printf("화문 입니다.");
	}
	else
	{
		printf("화문이 아닙니다.");
	}
}

int main(void) {
	char str[10];
	printf("문자열 입력: ");
	scanf("%s", str);
	IsPalindrome(str);
	return 0;
}