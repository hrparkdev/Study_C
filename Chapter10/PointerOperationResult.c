#include <stdio.h>

int main(void)
{
	int* ptr1 = 0x0010;
	double* ptr2 = 0x0010;

	printf("%p %p \n", ptr1 + 1, ptr1 + 2); //00000014, 00000018
	printf("%p %p \n", ptr2 + 1, ptr2 + 2); //00000018, 00000020

	printf("%p %p \n", ptr1, ptr2); //00000010, 00000010
	ptr1++;
	ptr2++;
	printf("%p %p \n", ptr1, ptr2); //00000014, 00000018
	return 0;
}