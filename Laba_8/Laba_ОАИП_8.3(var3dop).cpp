#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");					//Задание 1 вариант 3
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
		s = s + ((h * ((1 + x * x * x) + (1 + (x + h) * (x + h) * (x + h)))) / 2);
		x = x + h;
	}
	cout << "Задание 1. s = " << s << endl;

	// 1+x^3 a=1 b=6   323.366

	setlocale(LC_ALL, "ru");			//Задание 2 вариант 3
	float h1, s1, s2, x1, i, S;

	h1 = (b - a) / (2 * n);
	x1 = a + 2 * h1;
	s1 = 0;
	s2 = 0;
	i = 1;
	while (i < n) {
		s2 += (1 + x1 * x1 * x1);
		x1 += h1;
		s1 += (1 + x1 * x1 * x1);
		x1 += h1;
		i++;
	}
	S = (h1 / 3) * ((1 + a * a * a) + 4 * (1 + (a + h1) * (a + h1) * (a + h1)) + (4 * s1) + (2 * s2) + (1 + b * b * b));
	cout << "Задание 2. S= " << S << endl;

	// 1+x^3 a=1 b=6   328.75


	double a2, b2, e, x2;						//Задание 3 вариант 3
	a2 = -10;
	b2 = 10;
	e = 0.0001;
	while (abs(a2 - b2) > e * 2) {
		x2 = (a2 + b2) / 2;
		if ((((x2 * x2 * x2) + (2 * x2) - 1) * ((a2 * a2 * a2) + (2 * a2) - 1)) <= 0) {
			b2 = x2;
		}
		else {
			a2 = x2;
		}
	}
	cout << "Задание 3. x = " << x2 << endl;
}
// x^3 + 2x – 1    0.198517