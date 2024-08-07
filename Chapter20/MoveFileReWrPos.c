#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	/* 파일생성 */
	FILE* fp = fopen("text.txt", "wt");
	fputs("123456789", fp);
	fclose(fp);

	/* 파일개방 */
	fp = fopen("text.txt", "rt");

	/* SEEK_END test */
	fseek(fp, -2, SEEK_END);
	putchar(fgetc(fp));

	/* SEEK_SET test */
	fseek(fp, 2, SEEK_SET);
	putchar(fgetc(fp));

	/* SEEK_CUR test */
	fseek(fp, 2, SEEK_CUR);
	putchar(fgetc(fp));

	fclose(fp);
	return 0;
}