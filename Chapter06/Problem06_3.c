#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int kor;
	int eng;
	int math;
	double average;
	char result;

	printf("국어, 영어, 수학 점수를 입력하세요: ");
	scanf("%d %d %d", &kor, &eng, &math);
	average = (kor + eng + math) / 3.0;
	if (average >= 90.0) {
		result = 'A';
	}
	else if (average >= 80.0) {
		result = 'B';
	}
	else if (average >= 70.0) {
		result = 'C';
	}
	else if (average >= 50.0) {
		result = 'D';
	}
	else {
		result = 'F';
	}
	printf("학점: %c", result);
	return 0;
}