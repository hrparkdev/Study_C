#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int sum = 0;
	int num = 0;
	int i = 0;
	while (i < 5)
	{
		printf("정수 입력: ");
		scanf("%d", &num);
		while(num <= 0) 
		{
			printf("0보다 큰 수를 입력: ");
			scanf("%d", &num);
		}
		sum += num;
		num = 0;
		i++;
	}
	printf("총 합: %d", sum);
	return 0;
}