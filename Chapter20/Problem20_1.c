#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE* fp = fopen("mystory.txt", "wt");
	if (fp == NULL)
	{
		puts("파일오픈 실패");
		return -1;
	}
	fputs("#이름: 홍길동 \n", fp);
	fputs("#전화번호: 010-1111-2222 \n", fp);

	fclose(fp);
	return 0;
}

