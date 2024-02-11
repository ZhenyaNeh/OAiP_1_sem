#include <iostream>
#include<ctime>
#include<Windows.h>
#include<conio.h>
using namespace std;

float matrix(int** randomArray, int, int); //прототипы
int massiv(int* myArray, int);

int main(void)
{
	setlocale(LC_CTYPE, "Russian");
	int choice;
	int** randomArray,*myArray, row, column, val, SIZE;
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
			cout << "Enter num of SIZE: "; cin >> SIZE;
			myArray = new int[SIZE];
			for (int i = 0; i < SIZE; i++)
				cout << (myArray[i] = rand() % 15+5) << "\t";
			cout << "\n\n";
			val = massiv(myArray, SIZE);
			cout << "Difference between max and min: " << val << "\n\n";
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
	for (int i = 0; i < column; i++)
	{
		check = 0;
		for (int j = 0; j < row; j++) {
			if (*(*(randomArray + j) + i) > 0) {
				check++;
			}
			if (check == row) {
				num = i;
				goto end;
			}
		}
	}
	end:if (check == row && num != 0) {
		for (int j = 0; j < row; j++) {
			*(* (randomArray+j)+ (num - 1)) = *(*(randomArray + j) + (num - 1)) * (-1);
		}
	}
	if (check == row && num == 0) {
		for (int j = 0; j < row; j++) {
			*(*(randomArray + j) + (column - 1)) = *(*(randomArray + j) + (column - 1)) * (-1);
		}
	}
	if (check != row) {
		cout << "no such column" << "\n";
	}
	return 0;
}
/*2. Если в матрице имеется столбец, все элементы которого положительны, то знаки элементов предыдущего столбца изменить на противоположные.*/

int massiv(int* myArray, int SIZE)
{
	int value{ 0}, min{20}, max{0};
	for (int i = 0; i < SIZE; i++) {
		if (*(myArray + i) > max)
			max = *(myArray + i);
		if (*(myArray + i) < min)
			min = *(myArray + i);
	}
	value = max - min;
	return value;
}

/*1. В одномерном массиве найти минимальный и максимальный элементы. Вычислить их разность.*/