#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char str[50] = "I like C programming";
	printf("string: %s \n", str); // I like C programming

	str[8] = '\0';
	printf("string: %s \n", str); // I like C

	str[6] = '\0';
	printf("string: %s \n", str); // I like

	str[1] = '\0';
	printf("string: %s \n", str); // I

	return 0;
}