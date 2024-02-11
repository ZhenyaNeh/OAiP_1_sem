#include <iostream>

void main()
{
	srand(time(NULL));
	using namespace std;
	int row{}, column{}, rowZero{ 0 }, check{0};
	int** randomArray = new int* [row];
	cout << "Enter num of rows : "; cin >> row;
	cout << "Enter num of cols : "; cin >> column;

	for (int i = 0; i < row; i++) { //Заполняем масссив случайными числами
		randomArray[i] = new int[column];
		cout << "\t";
		for (int j = 0; j < column; j++) {
			cin >> randomArray[i][j];
			cout << "\t";
		}
		cout << "\n";
	}

	for (int i = 0; i < row; i++) {
		check = 0;
		for (int j = 0; j < column; j++) {
			if (randomArray[i][j] == 0)
				check++;
		}
		if (check == column) {
			rowZero = i;
		}
	}
	for (int i = 0; i < row; i++) {
		randomArray[i][rowZero] = (randomArray[i][rowZero]) / 2;
	}
	cout << "New matrix: " << "\n\n";
	for (int i = 0; i < row; i++) { //Итоговая матрица
		cout << "\t";
		for (int j = 0; j < column; j++) {
			cout << (randomArray[i][j]) << "   ";
		}
		cout << "\n";
	}
}

//2. Найти в матрице первую строку, все элементы которой равны нулю. Все элементы столбца с таким же номером уменьшить вдвое.