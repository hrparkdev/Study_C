#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Recursive(int num)
{
	if (num == 0)
	{
		return 1;
	}
	else
	{
		return 2 * Recursive(num - 1);
	}
}

int main(void)
{
	int num;
	int result;
	printf("정수 입력: ");
	scanf("%d", &num);
	result = Recursive(num);
	printf("2의 %d승은 %d", num, result);
	return 0;

} 