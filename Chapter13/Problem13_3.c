#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int score[5][5];
	char* student[4] = { "철희", "철수", "영희", "영수" };
	char* subject[4] = { "국어", "영어", "수학", "국사" };
	for (int i = 0; i < 4; i++)
	{
		int sum = 0;
		for (int j = 0; j < 4; j++)
		{
			printf("%s의 %s 점수는? ", student[i], subject[j]);
			scanf("%d", &score[i][j]);
			sum += score[i][j];
		}
		score[i][4] = sum;
	}

	for (int i = 0; i < 5; i++)
	{
		int sum = 0;
		for (int j = 0; j < 4; j++)
		{
			sum += score[j][i];
		}
		score[4][i] = sum;
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%4d ", score[i][j]);
		}
		printf("\n");
	}

	return 0;
}
