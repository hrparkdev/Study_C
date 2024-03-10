#include <stdio.h>

void Swap3(int* num1, int* num2, int* num3)
{
	int tmp = *num3;
	*num3 = *num2;
	*num2 = *num1;
	*num1 = tmp;
}

int main(void)
{
	int num1 = 10;
	int num2 = 20;
	int num3 = 30;
	Swap3(&num1, &num2, &num3);
	printf("num1 num2 num3: %d %d %d \n", num1, num2, num3);

	return 0;
} 

int num1 = 20;
int num2 = 30;
int* const ptr = &num1;
*ptr = 40;