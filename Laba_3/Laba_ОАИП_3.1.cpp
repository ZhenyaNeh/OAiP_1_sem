#include <iomanip>
#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	char c, probel; probel = ' ';
	cout << "Введите символ "; cin >> c;
	cout << setw(42) << setfill(probel) << probel;
	cout << setw(6) << setfill(c) << c << endl;
	cout << setw(41) << setfill(probel) <<  probel;
	cout << setw(8) << setfill(c) << c <<endl;
	cout << setw(40) << setfill(probel) << probel;
	cout << setw(10) << setfill(c) << c << endl;
	
}
