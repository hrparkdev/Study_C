#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int villa[4][2];

	/* 가구별 거주인원 입력 받기 */
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d층 %d호 인구수: ", i + 1, j + 1);
			scanf("%d", &villa[i][j]);
		}
	}

	/* 빌라의 층별 인구수 출력하기*/
	for (int i = 0; i < 4; i++)
	{
		int num = 0;
		for (int j = 0; j < 2; j++)
		{
			num += villa[i][j];
		}

		printf("%d층 인구수: %d명 \n", i + 1, num);
	}

	return 0;
}

ㅇ