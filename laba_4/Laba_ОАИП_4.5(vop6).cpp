#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int k;
	puts("Какая сегодня погода? (1-хорошая, 2-плохая)");
	cin >> k;
	switch (k)
	{
	case 1: { puts("А какой сегодня день недели? (1- пятница, 2-зачем тебе?)");
		cin >> k;
		switch (k)
		{
		case 1: puts("Спасибо"); break;
		case 2: puts(" Всё понятно, досвиданья"); 
			cin >> k;
			
		}
		break;
	}
	case 2: puts("Плооохо :("); break;
	default: puts("Некорректный вариант"); break;
	}
	return 0;
}