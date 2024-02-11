#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
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
	while (x < (b-h)) {
		s = s + (h*( ((exp(x) + 2) + (exp(x + h) + 2)) / 2));
		x = x + h;
		cout << "s = " << s << endl;
	}
	cout << "S конечное = " << s;
}
//e^x+2   59738.9