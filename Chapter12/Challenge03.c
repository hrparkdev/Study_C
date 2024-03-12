#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[10] = { 0 };
	int rArr[10] = { 0 };
	int startIndex = 0;
	int endIndex = 9;
	printf("총 10개의 숫자 입력 \n");
	for (int i = 0; i < 10; i++)
	{
		printf("입력: ");
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] % 2 != 0)
		{
			rArr[startIndex] = arr[i];
			startIndex++;
		}
		else
		{
			rArr[endIndex] = arr[i];
			endIndex--;
		}
	}
	printf("배열 요소의 출력 : ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", rArr[i]);
	}
	return 0;
}