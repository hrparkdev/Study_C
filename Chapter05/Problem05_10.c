#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int start;
	int end;
	int result;

	printf("시작과 끝 입력: ");
	scanf("%d %d", &start, &end);
	for (result = 0; start <= end; start++)
	{
		result += start;
	}
	printf("합계: %d", result);
	return 0;
}