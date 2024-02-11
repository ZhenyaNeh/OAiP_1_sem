#include<iostream>
#include<cstring>
#include<windows.h>
using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char text[100], probel = ' ';
	int limit{}, check{ 1 };
	gets_s(text);
	limit = strlen(text);
	text[limit] = probel;
	limit++;
	text[limit] = '\0';
	for (int i = 0; i < limit; i++)
	{
		if (text[i] == probel)
			check++;
		if (text[i] == probel && check % 2 == 1 && check != 1)
		{
			for (int j = i - 1;; j--)
			{
				cout << text[j];
				if (text[j] == probel)
					break;
			}
			cout << probel;
			i++;
		}
	}
}

/* 4.	Отредактировать заданное предложение,
удаляя из него все слова с нечетными номерами и переворачивая
слова с четными номерами. Пример: HOW DO YOU DO преобразовать в OD OD.*/