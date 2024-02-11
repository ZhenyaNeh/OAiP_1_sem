#include<iostream>
#include<cstring>
#include<Windows.h>
using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char text[100], word[10], probel = ' ', m{};
	int limit{}, check{};
	string words[20];
	cout << "Enter the text:";
	gets_s(text);
	limit = strlen(text);
	text[limit] = ' ';
	text[limit + 1] = '\0';
	limit++;
	for (int i = 0, t = 0; i < limit; i++)
	{
		if (text[i] != probel)
		{
			word[t] = text[i];
			t++;
		}
		else
		{
			word[t] = '\0';
			words[check] = word;
			check++;
			t = 0;
			for (int j = 0; j < 10; j++)
				word[j] = NULL;
		}
	}
	cout << endl;
	for (int i = 0; i < check; i++)
	{
		words[i] = m;
		cout << int(m) << "\t";
	}
}


//3.	Из заданного предложения удалить те слова, которые уже встречались в предложении раньше. i like to walk and i like to sleep  