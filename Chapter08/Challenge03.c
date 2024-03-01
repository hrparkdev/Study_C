#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1;
	int num2;
	int gcd;
	printf("두 개의 정수 입력: ");
	scanf("%d %d", &num1, &num2);
	for (int i = 1; i <= num1 && i <= num2; i++)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			gcd = i;
		}
	}
	printf("%d와 %d의 최대공약수: %d", num1, num2, gcd);
	return 0;
}