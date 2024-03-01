#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ShowFiboSeries(int num)
{
		int f1 = 0;
		int f2 = 1;
		int f3;
		
		if (num == 1)
			printf("%d", f1);
		else
			printf("%d %d ", f1, f2);
		

		for (int i = 0; i < num - 2; i++)
		{
			f3 = f1 + f2;
			printf("%d ", f3);
			f1 = f2;
			f2 = f3;
		}
}

int main(void)
{
	int n;
	printf("출력하고자 하는 피보나치 수열의 갯수 : ");
	scanf("%d", &n);
	if (n < 1)
	{
		printf("1이상의 값을 입력하세요. \n");
		return -1;
	}
	ShowFiboSeries(n);

	return 0;
}