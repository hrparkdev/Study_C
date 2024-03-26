#include <stdio.h>

//구조체 변수의 주소 값은 구조체 변수의 첫 번째 멤버의 주소 값과 동일하다.

struct point
{
	int xpos;
	int ypos;
};

struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};

int main(void)
{
	struct point pos = { 10, 20 };
	struct person man = {"홍길동", "010-1122-3344", 21};

	printf("%p %p \n", &pos, &pos.xpos);
	printf("%p %p \n", &man, man.name);

	return 0;
}