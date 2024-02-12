#include <stdio.h>

int main(void)
{
	int num1 = 0xA7; //16진수
	int num2 = 0x43;
	int num3 = 032; //8진수
	int num4 = 024;
	
	printf("0xA7의 10진수 정수 값: %d \n", num1); //167
	printf("0x43의 10진수 정수 값: %d \n", num2); //67
	printf(" 032의 10진수 정수 값: %d \n", num3); //26
	printf(" 024의 10진수 정수 값: %d \n", num4); //20

	printf("%d - %d = %d \n", num1, num2, num1 - num2); //100
	printf("%d + %d = %d \n", num3, num4, num3 + num4); //46
	return 0;
}