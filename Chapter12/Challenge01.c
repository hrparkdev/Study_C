#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ShowOddNum(int* arr, int len)
{
	int oddNumArr[5] = { 0 };
	int index = 0;
	for (int i = 0; i < len; i++)
	{
		if (arr[i] % 2 != 0)
		{
			oddNumArr[index] = arr[i];
			index++;
		}
	}
	
	printf("홀수 출력: ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d", oddNumArr[i]);
		if (i != (5 - 1))
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
	}
}

void ShowEvenNum(int* arr, int len)
{
	int evenNum[5] = { 0 };
	int index = 0;
	for (int i = 0; i < len; i++)
	{
		if (arr[i] % 2 == 0)
		{
			evenNum[index] = arr[i];
			index++;
		}
	}
	printf("짝수 출력: ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d", evenNum[i]);
		if (i != (5 - 1))
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
	}
}

int main(void)
{
	int arr[10];
	int len = sizeof(arr) / sizeof(int);
	printf("총 %d개의 숫자 입력 \n", len);
	for (int i = 0; i < len; i++)
	{
		printf("입력: ");
		scanf("%d", &arr[i]);
	}
	ShowOddNum(arr, len);
	ShowEvenNum(arr, len);
	return 0;
}