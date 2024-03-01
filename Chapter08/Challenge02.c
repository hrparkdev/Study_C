#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Gugudan(int startDan, int endDan) {
	for (int i = startDan; i <= endDan; i++)
	{
		for (int j = 1; j < 10; j++) {
			printf("%d x %d = %d \n", i, j, i * j);
		}
		printf("\n");
	}
}

int main(void)
{
	int startDan;
	int endDan;
	int tmp;
	printf("시작단과 끝단을 입력: ");
	scanf("%d %d", &startDan, &endDan);
	if (startDan > endDan) {
		tmp = startDan;
		startDan = endDan;
		endDan = tmp;
	}
	Gugudan(startDan, endDan);
	return 0;
} 