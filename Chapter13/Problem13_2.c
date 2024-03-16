#include <stdio.h>

int main(void)
{
	int arrA[2][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8}
	};
	int arrB[4][2] = {
		{arrA[0][0], arrA[1][0]},
		{arrA[0][1], arrA[1][1]},
		{arrA[0][2], arrA[1][2]},
		{arrA[0][3], arrA[1][3]}
	};

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			arrB[i][j] = arrA[j][i];
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%2d ", arrB[i][j]);
		}
		printf("\n");
	}

	return 0;
}