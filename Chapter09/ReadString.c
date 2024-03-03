#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char str[50];
	int idx = 0;

	printf("문자열 입력: ");
	//문자열을 입력 받아서 배열 str에 저장!
	scanf("%s", str); //str 앞에 & 연산자를 삽입하지 않는다.
	printf("입력 받은 문자열: %s \n", str);

	printf("문자 단위 출력: ");
	while (str[idx] != '\0')
	{
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");
	return 0;
}