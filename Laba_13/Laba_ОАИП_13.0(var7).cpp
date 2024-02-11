#include <iostream>
#include<ctime>
void main()
{
	srand(time(NULL));
	using namespace std;
	int row{}, column{},checkNumberMax{0}, checkNumberMin{0}, rowMax{0}, columnMax{0}, rowMin{0}, columnMin{0};
	int** randomArray = new int* [row];
	cout << "Enter num of rows : "; cin >> row;
	cout << "Enter num of cols : "; cin >> column;

	for (int i = 0; i < row; i++){ //Заполняем масссив случайными числами
		randomArray[i] = new int[column];
		cout << "\t";
		for (int j = 0; j < column; j++){
			cout << (randomArray[i][j] = rand() % 99 + 1)<<"\t";
		}
		cout << "\n";
	}
	checkNumberMax = randomArray[0][0];
	checkNumberMin = randomArray[0][0];
	for (int i = 0; i < row; i++) { 
		for (int j = 0; j < column; j++) {
			if (checkNumberMax < randomArray[i][j]) {
				checkNumberMax = randomArray[i][j];
				rowMax = i;
				columnMax = j;
			}
			if (checkNumberMin > randomArray[i][j]) {
				checkNumberMin = randomArray[i][j];
				rowMin = i;
				columnMin = j;
			}
		}	
	}
	randomArray[rowMin][columnMin] = checkNumberMax;
	randomArray[rowMax][columnMax] = checkNumberMin;
	cout << "Max: " << checkNumberMax << "\n";
	cout << "Min: " << checkNumberMin << "\n";

	for (int i = 0; i < row; i++) { //Итоговая матрица
		cout << "\t";
		for (int j = 0; j < column; j++) {
			cout << (randomArray[i][j]) << "\t";
		}
		cout << "\n";
	}
}

//1. Дана матрица A(n, m). Поменять местами её наибольший и наименьший элементы.