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
		int row{}, column{}, d{};
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
			cin.ignore();
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
	int limit{}, sum{0};
	char probel = ' ', m{};
	limit = strlen(text);
	*(text + limit) = ' ';
	*(text + limit + 1) = '\0';
	limit++;
	for (int i = 0; i < limit; i++)
	{
		if (*(text + i) == probel) {
			sum++;
		}
	}
	cout << "Number of words: " << sum << "\n\n";
	return;
}

//2. Написать программу, которая вводит несколько слов текста и определяет общее количество слов. Слова разделены пробелами.example like to sleep



int matrix(int row, int column)
{
	srand(time(NULL));
	using namespace std;
	int  searchRow{ 0 }, check{ 0 }, greaterThanZero{0}, lessThanZero{0}, equalToZero{0};
	int** randomArray = new int* [row];

	for (int i = 0; i < row; i++) //Заполняем масссив случайными числами
	{
		randomArray[i] = new int[column];
		cout << "\t";
		for (int j = 0; j < column; j++){
			cout << (randomArray[i][j] = rand() % 10-5) << "\t";
			if (randomArray[i][j] > 0)
				greaterThanZero++;
			if (randomArray[i][j] < 0)
				lessThanZero++;
			if (randomArray[i][j] == 0)
				equalToZero++;
		}
		cout << "\n";
	}
	cout << "Number of elements greater than zero: " << greaterThanZero << "\n";
	cout << "Number of elements less than zero: " << lessThanZero << "\n";
	cout << "Number of elements equal to zero: " << equalToZero << "\n";
	return 0;
}

//1. Дан двумерный массив, состоящий из N строк и М столбцов. Найти количество отрицательных, положительных и нулевых элементов массива.  