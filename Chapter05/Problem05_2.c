#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	int i = 1;
	printf("배수의 갯수: ");
	scanf("%d", &num);
	while (i <= num)
	{
		printf("%d ", 3 * i);
		i++;
	}
	return 0;
}