#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	float C1, C2, n;
	n = 1;
	printf(" Введите C1: ");
	scanf_s("%f\n", &C1);
	printf(" Введите C2: ");
	scanf_s("%f\n", &C2);
	while (n <= 4) {
		C1 = C1 / 2;
		C2 = C2 + C1;
		C2 = C2 / 2;
		C1 = C1 + C2;
		printf("C1 = %f", C1);
		printf("     C2 = %f", C2);
		printf("     n = %1.0f\n", n);
		n++;
	}
}