#include <stdio.h>

int main(void)
{
	int num1 = 9;
	int num2 = 2;
	printf("%d+%d=%d \n", num1, num2, num1 + num2);
	printf("%d-%d=%d \n", num1, num2, num1 - num2);
	printf("%dx%d=%d \n", num1, num2, num1 * num2);
	printf("%d나누기%d의 몫=%d \n", num1, num2, num1/num2);
	printf("%d나누기%d의 나머지=%d \n", num1, num2, num1%num2);

	return 0;
}