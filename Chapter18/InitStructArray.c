#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};

int main(void)
{
	struct person arr[3] = {
		{"홍길동", "010-1234-5678", 20},
		{"이순신", "010-1122-3344", 21},
		{"김유신", "010-5566-7788", 22}
	};

	for (int i = 0; i < 3; i++)
	{
		printf("%s %s %d \n", arr[i].name, arr[i].phoneNum, arr[i].age);
	}
	return 0;
}