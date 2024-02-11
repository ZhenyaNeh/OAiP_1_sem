#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	float h, s1, s2, a, b, n, x, i, S;
	cout << "Введите a: ";
	cin >> a;
	cout << "Введите b: ";
	cin >> b;
	cout << "Введите n: ";
	cin >> n;
	h = (b - a) / (2 * n);
	x = a + 2 * h;
	s1 = 0;
	s2 = 0;
	i = 1;
	while (i < n) {
		s2 += (exp(x) + 2);
		x += h;
		s1 += (exp(x) + 2);
		x += h;
		i++;
	}
	S = (h / 3) * ((exp(a) + 2) + (4 * (exp(a + h) + 2)) + (4 * s1) + (2 * s2) + (exp(b) + 2));
	cout << "S= " << S;
}
//e^x+2   (h * (((exp(x) + 2) + (exp(x + h) + 2)) / 2))