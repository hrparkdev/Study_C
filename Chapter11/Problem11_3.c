#include <stdio.h>

void ShowData(const int* ptr)
{
	const int* rptr = ptr;
	printf("%d \n", *rptr);
}

int main(void)
{
	int num = 10;
	int* ptr = &num;
	ShowData(ptr);
	return 0;
}
