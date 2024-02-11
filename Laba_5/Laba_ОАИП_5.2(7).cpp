#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	float z, q, x, y, t, i=1;
	x = 0.9;
	y = 2;
	t = (6.96 * pow(10, -5));
	while(i<=2)
	{
		z = (t * (y * y)) - (sqrt(abs(i + x)) * tan(y));
		q = (sqrt((z * z) + 5 * z)) * (log(y));
		printf("x = %5.2f\t", z);
		printf("q = %5.2f\n", q);
		i += 0.2;
	}
}