#include <iostream> 
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	
	//Задание первое
	char tmp[33];
	
	int A, B, maskA = 240;

	cout << "Первое число= "; cin >> A;
	cout << "Второе число= "; cin >> B;

	_itoa_s(A, tmp, 2); cout << "A=" << tmp << endl;
	_itoa_s(B, tmp, 2); cout << "B=" << tmp << endl;

	_itoa_s(maskA, tmp, 2);
	cout << "Маска для А: " << tmp << endl;

	_itoa_s((A & maskA)>>4, tmp, 2);
	cout << "Выделенные биты А: " << tmp << endl;

	

	_itoa_s( B | ((A & maskA)>>4), tmp, 2);
	cout << " Результат B=" << tmp << endl;
	

	////Задание второе
	int A2, B2, p, q, n, m, maskA2, maskB2, position, mask;			
	
	cout << "Введите начальную позицию p (от 1 до 8)  = ";
	const int SIZE = 8;
	int arrp[SIZE] = { 255, 254, 252, 248, 240, 224, 192, 128 };
	cin >> p;
	cout << "Введите n битов (от 1 до 8)  = ";
	cin >> n;
	position = p+n;
	maskA2 = arrp[p-1] - arrp[position-1];
	
	cout << "Введите начальную позицию q (от 1 до 8) = ";
	cin >> q;
	position = q + n;
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


	_itoa_s((A2 & maskA2) >>(p-1), tmp, 2);
	cout << "Выделенные биты А: " << tmp << endl;
	
	_itoa_s(maskB2, tmp, 2);
	cout << "Маска для B: " << tmp << endl;

	_itoa_s((B2 & maskB2), tmp, 2);
	cout << "Выделенные биты B: " << tmp << endl;

	_itoa_s(((B2 & maskB2)  | ((A2 & maskA2) >>(p-1) )<< (q-1)), tmp, 2);
	cout << " Результат B=" << tmp << endl;
}

