#include <stdio.h>

int main(void)
{
	int cnt = 0;
	int num = 2;

	while (cnt < 10)
	{
		char result = 'Y';
		for (int i = 2; i < num; i++)
		{
			if (num % i == 0)
			{
				result = 'N';
				break;
			}
		}
		if (result == 'Y') {
			printf("%d ", num);
			cnt++;
		}
		num++;
	}
	return 0;
} 