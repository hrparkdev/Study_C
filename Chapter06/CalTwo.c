#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int opt;
	double num1;
	double num2;
	double result;
	printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈 \n");
	printf("선택? ");
	scanf("%d", &opt);
	printf("두 개의 실수 입력: ");
	scanf("%lf %lf", &num1, &num2);

	if (opt == 1)
		result = num1 + num2;
	else if (opt == 2)
		result = num1 - num2;
	else if (opt == 3)
		result = num1 * num2;
	else
		result = num1 / num2;

	printf("결과: %f \n", result);
	return 0;
}