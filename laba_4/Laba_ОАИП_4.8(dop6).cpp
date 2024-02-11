#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Russian");
	float a, b, c, r, t, s;

	printf("Введите размер коробки: a "); scanf_s("%f", &a);
	printf("Введите размер коробки: b "); scanf_s("%f", &b);
	printf("Введите размер коробки: c "); scanf_s("%f", &c);

	printf("Введите размер упаковки: r "); scanf_s("%f", &r);
	printf("Введите размер упаковки: s "); scanf_s("%f", &s);
	printf("Введите размер упаковки: t "); scanf_s("%f", &t);


	if ((a * b * c) < (r * s * t)) {
		printf("коробка влезет");
	}
	else {
		printf("коробка не влезет");
	}
}