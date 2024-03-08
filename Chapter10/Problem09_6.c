#include <stdio.h>

int main(void)
{
	int arr[6] = { 1, 2, 3, 4, 5, 6 };
	int* fptr = arr;
	int* bptr = &arr[5];
	int num = sizeof(arr) / sizeof(int); // 24 / 4 = 6
	for (int i = 0; i <= num / 2; i++)
	{
		int tmp = *fptr;
		*fptr = *bptr;
		*bptr = tmp;

		fptr++;
		bptr--;
	}

	for (int i = 0; i < num; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;



	char* str = "happy";
	str = "Our team"; //str이 가리티는 대상을 문자열 "Our team"으로 변경

}

