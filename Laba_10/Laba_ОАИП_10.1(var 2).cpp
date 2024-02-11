#include <iostream>
using namespace std;

void main()
{
	//Задание первое
	setlocale(LC_CTYPE, "Russian");
	char tmp[33];
	int A, B, maskA = 68;
	int maskB = ~maskA << 1;

	cout << "Первое число А="; cin >> A;
	cout << "Второе число В="; cin >> B;

	_itoa_s(A, tmp, 2);
	cout << "A=" << tmp << endl;

	_itoa_s(maskA, tmp, 2);
	cout << "Маска для А: " << tmp << endl;

	_itoa_s((A & maskA) << 1, tmp, 2);
	cout << "Выделенные биты А: " << tmp << endl;
	
	_itoa_s(B, tmp, 2);
	cout << "B=" << tmp << endl;

	_itoa_s(maskB, tmp, 2);
	cout << "Маска для В: " << tmp << endl;

	_itoa_s(B & maskB, tmp, 2);
	cout << " Очищены биты в B: " << tmp << endl;

	_itoa_s(((B & maskB) | ((A & maskA) << 1)), tmp, 2);
	cout << " Результат B=" << tmp << endl;

	int A2, maskA2{ 48 }, position, p, n;
	int maskB2 = ~maskA2;
	cout << "Первое число= "; cin >> A2;

	//Задание второе
	cout << "Введите начальную позицию p (от 8 до 1)  = ";
	const int SIZE = 8;
	int arrp[SIZE] = { 255, 254, 252, 248, 240, 224, 192, 128 };
	cin >> p;
	cout << "Введите n битов (от 1 до 8)  = ";
	cin >> n;
	position = p-n;
	maskA2 = arrp[p-1] - arrp[position];

	_itoa_s(A2, tmp, 2); cout << "A=" << tmp << endl;

	_itoa_s(maskA2, tmp, 2);
	cout << "Маска для А: " << tmp << endl;

	_itoa_s((A2 | maskA2), tmp, 2);
	cout << " Результат A=" << tmp << endl;
}
