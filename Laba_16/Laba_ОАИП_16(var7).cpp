#include <iostream>
#include<ctime>
#include<Windows.h>
#include<conio.h>
using namespace std;

float matrix(int** randomArray, int, int); //прототипы
int massiv(int* myArray);

int main(void)
{
	setlocale(LC_CTYPE, "Russian");
	int choice;
	int** randomArray, row, column;
	float av;
	long long val;
	const int SIZE = 15;
	int myArray[SIZE];
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
				cout << "\t";
				for (int j = 0; j < column; j++)
					cout << (randomArray[i][j] = rand() % 10 - 4) << "\t";
				cout << "\n";
			}
			cout << "\n\n";

			av = matrix(randomArray, column, row);

			cout << "New matrix: " << "\n\n";
			for (int i = 0; i < row; i++) {
				cout << "\t";
				for (int j = 0; j < column; j++)
					cout << randomArray[i][j] - av << "\t";
				cout << "\n";
			}
			cout << "\n\n";
			system("pause");
			system("cls");
			break;
		case 2:
			for (int i = 0; i < SIZE; i++)
				cout << (myArray[i] = rand() % 200 + 1) << "\t";
			cout << "\n\n";
			val = massiv(myArray);
			cout << "Product of array elements with indices from 2 to 7: " << val << "\n\n";
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
	float num{ 0 }, check{ 0 }, average{ 0 };
	for (int i = 0; i < column; i++)
	{
		num = 0;
		check = 0;
		for (int j = 0; j < row; j++) {
			if (*(*(randomArray + j) + i) < 0) {
				check++;
				num += *(*(randomArray + j) + i);
			}
			if (check == row) {
				average = num / row;
				goto end;
			}
		}
	}
	
end:cout << "Average: " << average << "\n\n";
	return average;
}
/*2. Если есть в матрице столбец, все элементы которого отрицательны, то найти среднее арифметическое
этих элементов. Вычесть полученное значение из всех элементов матрицы.*/

int massiv(int* myArray)
{
	long long value{ 1 };
	for (int i = 1; i < 7; i++)
		value = value * (*(myArray + i));
	return value;
}

/*1. Создать одномерный массив, содержащий 15 элементов, наполнить его случайными значениями в
интервале от 1 до 200. Определить произведение элементов массива с индексами от 2 до 7.*/