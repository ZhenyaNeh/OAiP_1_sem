#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int thou, hun, ten, one, num;

	//Разбиваем числа
	cin >> num;
	one = num % 10;
	ten = (num % 100) / 10;
	hun = (num % 1000) / 100;
	thou = num / 1000;
	
	//Определяем повторы (двойные)
	if (one == ten && one != hun && one != thou && hun != thou) {
		cout << "Нет, еденичные и десятичные повторяются";
	}
	else if (one == hun && one != ten && one  && ten!= thou) {
		cout << "Нет, еденичные и сотые повторяются";
	}
	else if (one == thou && one != hun && one != ten && hun !=ten) {
		cout << "Нет, еденичные и тысячные повторяются";
	}
	else if (ten == hun && one != ten && ten != thou && one != thou) {
		cout << "Нет, десятичные и сотые повторяются";
	}
	else if (ten == thou && ten != hun && one != ten && hun != one) {
		cout << "Нет, десятичные и тысячные повторяются";
	}
	else if (hun == thou && hun!=ten && hun != one && ten != one) {
		cout << "Нет, сотые и тысячные повторяются";
	}
	//Тройные повторы
	else if (one == ten && one== hun && ten != thou) {
		cout << "Нет, еденичные, десятичные и сотые повторяются";
	}
	else if (ten == hun && ten == thou && hun != one) {
		cout << "Нет, десятичные, сотые и тысячные повторяются";
	}
	else if (hun == thou && hun == one && hun != ten) {
		cout << "Нет,сотые, тысячные и еденичные повторяются";
	}
	else if (thou == one && thou == ten && thou != hun) {
		cout << "Нет, тысячные, еденичные и десятичные повторяются";
	}
	//Два двойных повтора
	else if (one == ten && hun == thou && one != hun) {
		cout << "Нет, еденичные равны десятичным и сотые равны тысячным";
	}
	else if (one == thou && ten == hun && one != hun) {
		cout << "Нет, еденичные равны тысячным и сотые равны десятичным";
	}
	else if (one == hun && thou == ten && one != ten) {
		cout << "Нет, еденичные равны сотым и десятичные равны тысячным";
	}
	//Либо есть повторы, или нет 
	else if (one == ten == hun == thou) {
		cout << "Нет, все равны";
	}
	else {
		cout << "Да, все числа различны";
	}
	return 0;
}