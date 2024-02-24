#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1;
	int num2;
	int result;
	printf("두 개의 정수 입력: ");
	scanf("%d %d", &num1, &num2);

	if (num1 < num2) {
		result = num2 - num1;
	}
	else {
		result = num1 - num2;
	}
	printf("뺄셈 결과: %d", result);
	return 0;
}