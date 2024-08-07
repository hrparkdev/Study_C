#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;

typedef struct rectangle
{
	Point ul; // 좌 상단
	Point lr; // 우 하단
} Rectangle;

//직사각형의 넓이 계산해서 출력
void ShowRecArea(Rectangle rec)
{
	printf("넓이: %d \n", (rec.lr.xpos - rec.ul.xpos) * (rec.lr.ypos - rec.ul.ypos));
}

//직사각형을 이루는 네 점의 좌표정보를 출력(두 점의 정보만 존재)
void ShowRecPos(Rectangle rec)
{
	printf("좌 상단: [%d, %d] \n", rec.ul.xpos, rec.lr.ypos);
	printf("좌 하단: [%d, %d] \n", rec.ul.xpos, rec.ul.ypos);
	printf("우 상단: [%d, %d] \n", rec.lr.xpos, rec.lr.ypos);
	printf("우 하단: [%d, %d] \n", rec.lr.xpos, rec.ul.ypos);
}

int main(void)
{
	Rectangle rec1 = { {1, 1}, {4, 4} };
	Rectangle rec2 = { {0, 0}, {7, 5} };
	ShowRecArea(rec1);
	ShowRecPos(rec1);
	ShowRecArea(rec2);
	ShowRecPos(rec2);
	return 0;
}