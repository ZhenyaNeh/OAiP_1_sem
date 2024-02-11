#include<stdio.h>
#include<iostream>

int main()
{
	setlocale(LC_ALL, "ru");
	float c, a, b, d;
	int n = 6;
	d = 0;
	for (int i = 1; i <= n; i++) {
		printf("введите a: \n");
		scanf_s("%f", &a);
		printf("введите b: \n");
		scanf_s("%f", &b);
		c = sqrt(a + b);
		d += (c/i);
		printf("Сумма равна: %5.2f\n", d);
	}
}
	
	
