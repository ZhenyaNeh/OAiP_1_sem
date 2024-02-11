#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int n, square, k1, k2, k3;
	n = 10;
	while (n < 30) {
		
		square = n * n;
		k3 = square / 100;
		k2 = (square % 100) / 10;
		k1 = square % 10;

		if (k3 < k2 && k2 < k1) {
			cout << n << endl;
			printf("Квадрат числа = %d\n", square);
		}
		n++;
	}
}
