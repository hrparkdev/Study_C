#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	int arr[20] = { 0 };
	int index = 0;
	printf("10진수 정수 입력: ");
	scanf("%d", &num);

	while (1)
	{
		if (num != 0)
		{
			arr[index] = num % 2;
			num = num / 2;
			index++;
		}
		else {
			break;
		}
	}

	for (int i = index - 1; i >= 0; i--)
	{
		printf("%d", arr[i]);
	}
	return 0;
}