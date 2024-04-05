#include <stdio.h>
extern int num;
extern void Increment(void);
extern int GetNum(void);

int main(void)
{
	printf("num: %d \n", GetNum());
	Increment();
	printf("num: %d \n", GetNum());
	Increment();
	printf("num: %d \n", GetNum());
	return 0;
}