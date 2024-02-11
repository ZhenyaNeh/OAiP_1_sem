#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	double a, b, e, x;
	a = -1;
	b = 1;
	e = 0.0001;
	while (abs(a-b) > e*2) {
		x = (a + b) / 2;
		if ((((x * x * x) + (3 * x) - 1) * ((a * a * a )+( 3 * a )- 1)) <= 0) {
			b = x;
		}
		else {
		 a = x;
		}
		cout << "x = " << x;
	}
	cout << "x = " << x;
}
//x^3+3x-1