#include <stdio.h>
void Add(int val);
int num; // 전역변수는 기본 0으로 초기화됨

int main(void)
{
	printf("num: %d \n", num); //0
	Add(3);
	printf("num: %d \n", num); //3
	num++; //전역변수 num의 값 1 증가
	printf("num: %d \n", num); //4
	return 0;
}

void Add(int val)
{
	num += val; //전역변수 num의 값 val만큼 증가
}

