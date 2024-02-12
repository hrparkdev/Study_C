#include <stdio.h>

int main(void)
{
	int num1 = 2;
	int num2 = 4;
	int num3 = 6;

	num1 += 3; //5
	num2 *= 4; //16
	num3 %= 5; //1
	printf("Result: %d, %d, %d\n", num1, num2, num3);
	return 0;
}