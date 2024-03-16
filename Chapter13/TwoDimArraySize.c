#include <stdio.h>

int main(void)
{
	int arr1[3][4];
	int arr2[7][9];
	printf("행3, 열4: %d \n", sizeof(arr1));
	printf("행7, 열9: %d \n", sizeof(arr2));
	return 0;
}