#include <stdio.h>

int main(void)
{
	int cur;
	int is;

	for (cur = 2; cur < 10; cur++)
	{
		for (is = 1; is < 10; is++)
		{
			printf("%d x %d = %d \n", cur, is, cur * is);
		}
		printf("\n");
	}
	return 0;
}