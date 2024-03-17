#include <stdio.h>

int main(void)
{
	int num = 100;
	int* ptr = &num;
	int** dptr = &ptr;
	int*** tpre = &dptr;

	printf("%d %d \n", **dptr, ***tpre);
	return 0;
}