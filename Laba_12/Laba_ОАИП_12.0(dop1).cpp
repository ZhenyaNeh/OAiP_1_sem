#include<iostream>
#include<cstring>
#include<Windows.h>
using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char text[100], word[10], mask[10], probel = ' ';
	int limit{}, check{}, lim{},checkNumber{0};
	string words[20];
	cout << "Enter the text:";
	gets_s(text);
	limit = strlen(text);
	text[limit] = ' ';
	text[limit + 1] = '\0';
	limit++;

	cout << "Enter the ending:";
	gets_s(mask);
	lim = strlen(mask);
	

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
			
			
			for (int j = t , m = 0; j > lim; j--) {
				if (word[j] == mask[m]) {
					checkNumber++;
				}
			}
			if (checkNumber == lim) {
				checkNumber = 0;
				words[check] = word;
			}


			check++;
			t = 0;
			for (int j = 0; j < 10; j++)
				word[j] = NULL;
		}
	}


	for (int i = 0; i < check; i++){
		cout << words[i] << " ";
	}
	
	
}

//1.	В заданной последовательности слов найти все слова, имеющие заданное окончание.
// i like to drink