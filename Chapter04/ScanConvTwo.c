#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float num1;
	double num2;
	long double num3;

	printf("실수 입력1(e 표기법으로): ");
	scanf("%f", &num1);
	printf("입력된 실수 %f \n", num1);

	printf("실수 입력2(e 표기법으로): ");
	scanf("%lf", &num2);
	printf("입력된 실수 %f \n", num1);

	printf("실수 입력3(e 표기법으로): ");
	scanf("%Lf", &num3);
	printf("입력된 실수 %Lf \n", num1);

	return 0;
}