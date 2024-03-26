#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct employee
{
	char name[20];
	char pid[20];
	int salary;
};

int main(void)
{
	struct employee arr[3];

	for (int i = 0; i < 3; i++)
	{
		printf("이름, 주민번호, 급여 입력: ");
		scanf("%s %s %d", arr[i].name, arr[i].pid, &arr[i].salary);
	}

	for (int i = 0; i < 3; i++)
	{
		printf("이름: %s, 주민번호: %s, 급여: %d \n", arr[i].name, arr[i].pid, arr[i].salary);
	}

	return 0;
}