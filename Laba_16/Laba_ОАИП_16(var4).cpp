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
	int** randomArray, row, column, val;
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
				for (int j = 0; j < column; j++)
					randomArray[i][j] = rand() % 10 - 10;
			}
			randomArray[rand() % row][rand() % column] = rand() % 10 - 3;

			for (int i = 0; i < row; i++) //выводим случайный массив
			{
				cout << "\t";
				for (int j = 0; j < column; j++)
					cout << randomArray[i][j] << "\t";
				cout << "\n";
			}
			cout << "\n\n";

			matrix(randomArray, column, row);

			cout << "New matrix: " << "\n\n";
			for (int i = 0; i < row; i++) {
				cout << "\t";
				for (int j = 0; j < column; j++)
					cout << randomArray[i][j] << "\t";
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
			cout << "Sum of odd elements: " << val << "\n\n";
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
	int num{ 0 }, check{ 0 };
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++) {
			if (*(*(randomArray + i) + j) > 0) {
				check = 1;
				num = i;
				goto end;
			}
		}
	}
	end:if( check !=0)
		cout << "String cintaining a positive element: " << num+1 << "\n";

	if (check == 1 && num != 0) {
		for (int j = 0; j < column; j++) {
			*(*(randomArray + num - 1) + j) = *(*(randomArray + num - 1) + j) * (-1);
		}
	}
	if (check == 1 && num == 0) {
		for (int j = 0; j < column; j++) {
			*(*(randomArray + row - 1) + j) = *(*(randomArray + row - 1) + j) * (-1);
		}
	}
	if (check == 0) {
		cout << "no such number" << "\n";
	}
	return 0;
	}
/*2. Проверить, есть ли в матрице хотя бы одна строка, содержащая положительный элемент
и найти ее номер. Знаки элементов предыдущей строки изменить на противоположные.
*/

int massiv(int* myArray)
{
	int value{ 0 };
	for (int i = 0; i < 15; i++)
		if (*(myArray + i) % 2 != 0) 
			value += *(myArray + i);

	return value;
}

/*1. Создать одномерный массив, содержащий 15 элементов, наполнить его случайными значениями в интервале от 1 до 200. Определить сумму всех нечетных элементов массива.*/