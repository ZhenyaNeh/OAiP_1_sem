#include <iostream>
using namespace std;

void main() 
{
	setlocale(LC_CTYPE, "Russian");
	int god;
	printf("Введите год: "); scanf_s("%d", &god);
	
	if (god%4==0 && god%100 !=0 || god%400==0) {
		cout << "Год: " << god << " високосный";
	}
	else{
		cout << "Год: " << god << " не високосный";
	}
}