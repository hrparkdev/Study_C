#include <stdio.h>

int main(void)
{
	int arr[3] = { 11, 22, 33 };
	int* ptr = arr; //int* ptr = &arr[0]; 과 같은 문장
	printf("%d %d %d \n", *ptr, *(ptr + 1), *(ptr + 2)); //11, 22, 33

	printf("%d ", *ptr); //11
	ptr++;
	printf("%d ", *ptr); //22
	ptr++;
	printf("%d ", *ptr); //33
	ptr--;
	printf("%d ", *ptr); //22
	ptr--;
	printf("%d ", *ptr); //11
	printf("\n");
	return 0;
}.