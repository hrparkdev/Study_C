#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int money;
	int breadPrice = 500;
	int snackPrice = 700;
	int cokePrice = 400;
	printf("현재 당신이 소유하고 있는 금액: ");
	scanf("%d", &money);

	for (int i = 1; i < money / breadPrice; i++) // 5000/500 = 10
	{
		for (int j = 1; j < money / snackPrice; j++) // 5000/700 = 7
		{
			for (int k = 1; k < money / cokePrice; k++) // 5000/400 = 12
			{
				if (money == (breadPrice * i) + (snackPrice * j) + (cokePrice * k)) {
					printf("크림빵 %d개, ", i);
					printf("새우깡 %d개, ", j);
					printf("콜  라 %d개, \n", k);
				}
			}
		}
	}

	printf("어떻게 구입하시겠습니까?");
	return 0;
}