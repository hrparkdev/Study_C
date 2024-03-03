#include <stdio.h>

int main(void)
{
	char str[10] = { 'G', 'o', 'o', 'd', ' ', 't', 'i', 'm', 'e', '\0' };
	int arrLen = sizeof(str) / sizeof(char);
	for (int i = 0; i < arrLen; i++)
	{
		printf("%c ", str[i]);
	}
	return 0;
}