#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	float z, q, x, y, t, i ;
	y = 2;
	
	for (i = 1; i <= 3; i++)
	{
		printf("Введите число: ");
		scanf_s("%f", &x);
		t = 2;
		while (t <= 3) {

			z = (t * (y * y)) - (sqrt(abs(i + x)) * tan(y));
			q = (sqrt((z * z) + 5 * z)) * (log(y));
			printf("x = %5.2f\t", z);
			printf("q = %5.2f\n", q);
			t += 0.2;
		}
	} 
}