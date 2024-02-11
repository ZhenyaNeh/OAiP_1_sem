#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int mes;
	printf("Введите число месяца "); scanf_s("%d", &mes);

	if (mes == 1 || mes == 2 || mes == 12) {
		printf("Зима");
	}
	else if (mes == 3 || mes == 4 || mes == 5) {
		printf("Весна");
	}
	else if (mes == 6 || mes == 7 || mes == 8) {
		printf("Лето");
	}
	else if (mes == 9 || mes == 10 || mes == 11) {
		printf("Осень");
	}
	else {
		printf("Такого месяца не существует");
	}
}