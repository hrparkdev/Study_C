#include <stdio.h>

int main(void)
{
	int ch;

	while (1)
	{
		ch = getchar();
		if (ch == EOF)
		{
			break;
		}
		putchar(ch);
	}
	return 0;
}

int getchar(void);
int fgetc(FILE* stream);

반환되는 것은 1바이트 크기의 문자인데, 반환형이 int이다.