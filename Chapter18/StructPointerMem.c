#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct point
{
	int xpos;
	int ypos;
};

struct circle
{
	double radius;
	struct point* center; //포인터 변수도 구조체의 멤버가 될 수 있다
};

int main(void)
{
	struct point cen = { 2, 7 };
	double rad = 5.5;

	struct circle ring = { rad, &cen };
	printf("원의 반지름: %g \n", ring.radius);
	printf("원의 지름: [%d, %d] \n", (ring.center)->xpos, (ring.center)->ypos);

	return 0;
}