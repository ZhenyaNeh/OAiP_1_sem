#include <iostream>
#include<Windows.h>
#include<cstring>
#include<ctime>
using namespace std;

int matrix(int row, int column);
void myArray(char* text);

int main(void)
{
	setlocale(LC_CTYPE, "Russian");
	int choice;
	do
	{
		cout << "Choice option: " << endl;
		cout << "1 - Matrix: " << endl;
		cout << "2 - Array: " << endl;
		cout << "3 - Exit: " << "\n\n";
		cout << "Enter you choice: ";
		cin >> choice;
		char text[100], probel = ' ', m{};
		int limit{}, sum{};
		int row{}, column{};
		switch (choice)
		{

		case 1:

			cout << "Enter num of rows : "; cin >> row;
			cout << "Enter num of cols : "; cin >> column;
			matrix(row, column);
			system("pause");
			system("cls");
			break;

		case 2:
			cout << "Enter the text:";
			gets_s(text);
			gets_s(text);
			myArray(text);
			system("pause");
			system("cls");
			break;

		case 3:
			cout << "\nExit complete...";
			break;
		}
	} while (choice != 3);
}

void myArray(char* text)
{	
	string words[20], letter;
	int limit{}, check{}, firstLetter{}, secondLetter{};
	char word[10], probel = ' ';
	limit = strlen(text);
	*(text + limit-1) = ' ';
	*(text + limit) = '\0';
	for (int i = 0, t = 0; i < limit; i++)
	{
		if (*(text+i) != probel)
		{
			word[t] = *(text + i);
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
	if (check % 2 == 0) {
		firstLetter = check / 2;
		letter = words[firstLetter - 1];
		words[firstLetter - 1] = words[firstLetter];
		words[firstLetter] = letter;
	}
	else {
		cout << "Odd number of words " << "\n";
	}
	for (int i = 0; i < check; i++)
		cout << " " << words[i];
	cout << ".";
	cout << "\n\n";
	return;
}

//2. Дана строка слов, разделенных пробелами, в конце строки точка. Поменять местами два центральных слова, если их количество четно.



int matrix(int row, int column)
{
	srand(time(NULL));
	using namespace std;
	int  searchRow{ 0 }, check{ 0 }, k{};
	int** randomArray = new int* [row];

	for (int i = 0; i < row; i++) //Заполняем масссив случайными числами
	{
		randomArray[i] = new int[column];
		cout << "\t";
		for (int j = 0; j < column; j++)
			cout << (randomArray[i][j] = rand() % 100) << "\t";
		cout << "\n";
	}
	cout << "Enter num (k): "; cin >> k;
	for (int i = 0; i < row; i++)
		for (int j = 0; j < column; j++) 
			if (randomArray[i][j] == k)
				cout << "Search string: " << j+1 << "\n";
	return 0;
}

//1. Дан двумерный массив, состоящий из N строк и М столбцов, а также число k. Найти столбец, содержащий это число. 