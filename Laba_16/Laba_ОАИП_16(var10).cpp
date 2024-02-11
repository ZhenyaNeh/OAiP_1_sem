#include <iostream>
#include<ctime>
#include<Windows.h>
#include<conio.h>
using namespace std;

float matrix(int** randomArray, int, int); //прототип
int massiv(int* arr, int);

int main(void)
{
	setlocale(LC_CTYPE, "Russian");
	srand((unsigned)time(NULL));
	int choice;
	int** randomArray,*arr, SIZE, row, column, val, counter{ 0 };
	float av;
	do
	{
		cout << "Choice option: " << endl;
		cout << "1 - Matrix: " << endl;
		cout << "2 - Array: " << endl;
		cout << "3 - Exit: " << "\n\n";
		cout << "Enter you choice: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "Enter num of rows : "; cin >> row;
			cout << "Enter num of cols : "; cin >> column;

			randomArray = new int* [row];
			for (int i = 0; i < row; i++) //Заполняем масссив случайными числами
			{
				randomArray[i] = new int[column];
			}

			val=matrix(randomArray, column, row);

			cout << "Max number: " << val << "\n";
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < column; j++)
				{
					if (randomArray[i][j] == val) {
						counter++;
						cout << "\n" << counter << " max number - " << i + 1 << " - " << j + 1;
					}
				}
			}
			cout << "\n\n";
			system("pause");
			system("cls");
			break;
		case 2:
			cout << "Enter size of array : "; cin >> SIZE;
			 arr = new int[SIZE];
			massiv(arr, SIZE);
			for (int i = 0; i < SIZE; i++) {
				if (*(arr + i) % 2 == 0 && i % 2 == 0 && *(arr + i) > 0) {
					cout << "\nEven numbers with odd order: " << *(arr + i);
				}
			}
			cout<<"\n";
			system("pause");
			system("cls");
			break;
		case 3:
			cout << "\nExit complete...";
			break;
		}
	} while (choice != 3);
}
float matrix(int** randomArray, int column, int row)
{
	int max = 0;
	for (int i = 0; i < row; i++) //Заполняем масссив случайными числами
	{
		randomArray[i] = new int[column];
		cout << "\t";
		for (int j = 0; j < column; j++){
			cout << (randomArray[i][j] = rand() % 10) << "\t";
			if (randomArray[i][j] > max) {
				max = randomArray[i][j];
			}
		}
		cout << "\n";
	}
	cout << "\n\n";

	return max;
}
/*2. Дана целочисленная прямоугольная матрица. Если максимальное число встречается в матрице более одного раза, то вывести его значение и индексы, а также количество повторений.*/

int massiv(int*arr, int SIZE)
{
	cout << "\nArray:\n";
	for (int i = 0; i < SIZE; i++)
	{
		*(arr + i) = rand() % 10;
		cout << *(arr + i) << " ";
	}
	return 0;
}

/*1. Найти номера четных элементов, стоящих на нечетных местах в одномерном массиве.*/