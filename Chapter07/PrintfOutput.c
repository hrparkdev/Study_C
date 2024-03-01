#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1;
	int num2;
	num1 = printf("12345\n");
	num2 = printf("I love my home\n");
	printf("%d %d \n", num1, num2); // 6 15
	return 0;
}

// printf 함수는 \n 문자를 포함하여 모니터에 출력한 문자열의 길이를 반환한다.