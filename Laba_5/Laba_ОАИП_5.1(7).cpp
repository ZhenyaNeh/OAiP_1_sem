#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "Rus");
	float z, q, x, y, t, i;
	x = 0.9;
	y = 2;
	t = (6.96 * pow(10, -5));
	for (int n = 1; n <= 3; n++)
	{
		printf("Введите i ");
		scanf_s("%f", &i);
		z = (t * (y * y)) - (sqrt(abs(i+x)) * tan(y));
		q = (sqrt((z * z) + 5 * z)) * (log(y));
		printf("x = %5.2f\t", z);
		printf("q = %5.2f\n", q);
	}
}