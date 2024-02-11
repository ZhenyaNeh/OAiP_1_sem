#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, c;
	printf("Введите размер коробки: a "); scanf_s("%d", &a);
	printf("Введите размер коробки: b "); scanf_s("%d", &b);
	printf("Введите размер коробки: c "); scanf_s("%d", &c);

	if (a < b && b < c) {
	
		cout << "a = " << c <<endl;
		cout << "b = " << c << endl;
		cout << "c = " << c << endl;
	}
	else  if (a > b && b > c) {
		cout << "a = a =" << a << endl;
		cout << "b = b =" << b << endl;
		cout << "c = c =" << c << endl;
	}
	else {
		cout << "a = a^2 =" << pow(a, 2) << endl;
		cout << "b = b^2 =" << pow(b, 2) << endl;
		cout << "c = c^2 =" << pow(c, 2) << endl;
	}
}