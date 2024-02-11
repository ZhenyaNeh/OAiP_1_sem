#include <iostream> 
using namespace std;
void main()
{
	//Задание первое
	char tmp[33];
	setlocale(LC_CTYPE, "Russian");
	int A = 150; 
	_itoa_s(A, tmp, 2);
	cout << " Число А: " << tmp << endl;
	_itoa_s(219, tmp, 2);
	cout << " Маска для А: " << tmp << endl;
	_itoa_s(A & 219, tmp, 2);
	cout << " Результат: " << tmp << endl << endl;


	//Задание  второе
	int A2, B2, p, q,  maskA2, maskB2, position, mask;
	cout << "Введите начальную позицию p (от 1 до 8)  = ";
	const int SIZE = 8;
	int arrp[SIZE] = { 255, 254, 252, 248, 240, 224, 192, 128 };
	cin >> p;
	
	position = p + 3;
	maskA2 = arrp[p - 1] - arrp[position - 1];

	cout << "Введите начальную позицию q (от 1 до 8) = ";
	cin >> q;
	position = q + 3;
	mask = arrp[q - 1] - arrp[position - 1];
	maskB2 = ~mask;
	cout << "Первое число= "; cin >> A2;
	cout << "Второе число= "; cin >> B2;

	_itoa_s(A2, tmp, 2);
	cout << " А: " << tmp << endl;

	_itoa_s(maskA2, tmp, 2);
	cout << "Маска для А: " << tmp << endl;

	_itoa_s((A2 | maskA2), tmp, 2);
	cout << "Замена битов на 1 в А: " << tmp << endl;


	_itoa_s((A2 & maskA2) >> (p - 1), tmp, 2);
	cout << "Выделенные биты А: " << tmp << endl;

	_itoa_s(maskB2, tmp, 2);
	cout << "Маска для B: " << tmp << endl;

	_itoa_s((B2 & maskB2), tmp, 2);
	cout << "Выделенные биты B: " << tmp << endl;

	_itoa_s(((B2 & maskB2) | ((A2 & maskA2) >> (p - 1)) << (q - 1)), tmp, 2);
	cout << " Результат B=" << tmp << endl;
}
