#include <stdio.h>

int main(void)
{
	int num1 = 3;
	int num2 = 4;
	double divResult;
	divResult = (double)num1 / (double)num2; // 3.0/num2 -> 3.0/4.0
	printf("나눗셈 결과: %f \n", divResult);
	return 0;
}