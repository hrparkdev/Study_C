#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char asc; 
	printf("숫자 입력: ");
	scanf("%d", &asc);
	printf("아스키 문자: %c", asc);
	return 0;
}