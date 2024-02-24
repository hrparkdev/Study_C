#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	for (int i = 1; i < 10; i++)
	{
		if (i % 2 != 0) {
			continue;
		}

		for (int j = 1; j < 10; j++)
		{
			if (i < j) {
				break;
			}
			printf("%d x %d = %d \n", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}