#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int result;
	for (int A = 0; A < 10; A++) { // 0 ~ 9
		for (int Z = 0; Z < 10; Z++) { // 0 ~ 9
			if (A == Z)
				continue;

			result = (A * 10 + Z) + (Z * 10 + A);

			if (result == 99)
				printf("%d%d+%d%d=%d \n", A, Z, Z, A, result);
		}
	}
	return 0;
}

/*
   A Z
 + Z A
 ------
   9 9
*/

/*
09+90=99
18+81=99
27+72=99
36+63=99
45+54=99
54+45=99
63+36=99
72+27=99
81+18=99
90+09=99
*/