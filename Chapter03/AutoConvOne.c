#include <stdio.h>

int main(void)
{
	double num1 = 245; //245.000000
	int num2 = 3.1415; //3
	int num3 = 129; 
	char ch = num3; //-127

	printf("정수 245를 실수로: %f \n", num1);
	printf("실수 3.1415를 정수로: %d \n", num2);
	printf("큰 정수 129를 작은 정수로: %d \n", ch);

	return 0;
}