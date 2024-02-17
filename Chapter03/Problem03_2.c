#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double dNum1;
	double dNum2;

	printf("두 개의 실수 입력: ");
	scanf("%lf %lf", &dNum1, &dNum2);

	printf("%f + %f = %f \n", dNum1, dNum2, dNum1 + dNum2);
	printf("%f - %f = %f \n", dNum1, dNum2, dNum1 - dNum2);
	printf("%f x %f = %f \n", dNum1, dNum2, dNum1 * dNum2);
	printf("%f \/ %f = %f \n", dNum1, dNum2, dNum1 / dNum2);

	return 0;
}