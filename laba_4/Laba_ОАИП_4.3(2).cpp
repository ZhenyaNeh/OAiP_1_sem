#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Russian");
	int x, y, z;
	printf("Введите x "); scanf_s("%d", &x);
	printf("Введите y "); scanf_s("%d", &y);
	printf("Введите z "); scanf_s("%d", &z);
	if (x == y && x != z) {
		printf(" x = y \n");
	}
	else if (x == z && x != y) {
		printf(" x = z \n");
	}
	else if (y == z && y != x) {
		printf(" y = z \n");
	}
	else if (x == y == z) {
		printf(" x = y = z \n");
	}
	else {
		printf(" Нет равных чисел \n");
	}
}