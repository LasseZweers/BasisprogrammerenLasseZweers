#include <stdio.h> 


int main(void) {
	int a;
	int b;
	int c;

	a = 10;

	printf("Voer een geheel getal in..");
	scanf_s("%d", &b);


	if (b > 9)

		printf("het ingevoerde getall is groter dan 9\n");

	c = a * b;
	printf("Programmeren is %d leuk %d\n", a, b);
	printf("A keer B is %d", c);
	return 0;
} 