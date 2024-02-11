#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");					//Задание 1 вариант 1
	float h, s, a, b, n, x;
	cout << "Введите a: ";
	cin >> a;
	cout << "Введите b: ";
	cin >> b;
	cout << "Введите n: ";
	cin >> n;
	h = (b - a) / n;
	x = a;
	s = 0;
	while (x < (b - h)) {
		s = s + ((h * ((x * x * x - 3) + ((x + h) * (x + h) * (x + h) - 3))) / 2);
		x = x + h;
	}
	cout << "Задание 1. s = " << s << endl;

	// x^3 – 3  a=1 b=3   14.0002

	setlocale(LC_ALL, "ru");			//Задание 2 вариант 1
	float h1, s1, s2, x1, i, S;

	h1 = (b - a) / (2 * n);
	x1 = a + 2 * h1;
	s1 = 0;
	s2 = 0;
	i = 1;
	while (i < n) {
		s2 += (x1 * x1 * x1 - 3);
		x1 += h1;
		s1 += (x1 * x1 * x1 - 3);
		x1 += h1;
		i++;
	}
	S = (h1 / 3) * ((a * a * a - 3) + 4 * ((a + h1) * (a + h1) * (a + h1) -3 ) + (4 * s1) + (2 * s2) + (b * b * b - 3));
	cout << "Задание 2. S= " << S << endl;

	// x^3 – 3  a=1 b=3   14.0002


	double a2, b2, e, x2;						//Задание 3 вариант 1
	a2 = 10;
	b2 = -10;
	e = 0.0001;
	while (abs(a2 - b2) > e * 2) {
		x2 = (a2 + b2) / 2;
		if ((((x2 * x2 * x2) + (x2) - 3) * ((a2 * a2 * a2) + (a2) - 3)) <= 0) {
			b2 = x2;
		}
		else {
			a2 = x2;
		}
	}
	cout << "Задание 3. x = " << x2 << endl;
}
// x^3 + x – 3   1.21353