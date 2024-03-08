#include <stdio.h>

int main(void)
{
	int num1 = 10;
	int num2 = 20;
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* tmp;

	(*ptr1) += 10;
	(*ptr2) -= 10;

	tmp = ptr1;
	ptr1 = ptr2;
	ptr2 = tmp;

	printf("ptr1이 가리키는 변수에 저장된 값: %d \n", *ptr1);
	printf("ptr2가 가리키는 변수에 저장된 값: %d \n", *ptr2);

	return 0;
}