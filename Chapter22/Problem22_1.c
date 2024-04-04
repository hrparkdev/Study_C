#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ADD(X, Y, Z) ((X)+(Y)+(Z))
#define MUL(X, Y, Z) ((X)*(Y)*(Z))

int main(void)
{
	int num1;
	int num2;
	int num3;
	printf("세 개의 정수 입력: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("세 정수의 덧셈 결과: %d \n", ADD(num1, num2, num3));
	printf("세 정수의 곱셈 결과: %d \n", MUL(num1, num2, num3));
	return 0;
}