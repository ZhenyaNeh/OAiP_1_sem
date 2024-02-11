#include <iostream>
#include <windows.h>
#include<ctime>

using namespace std;
void main()
{
	srand(time(NULL));
	int row{}, column{}, checkRow{ 0 }, numberMax{ 0 }, check{ 0 };
	int** randomArray = new int* [row];
	cout << "Enter num of rows : "; cin >> row;
	cout << "Enter num of cols : "; cin >> column;
	for (int i = 0; i < row; i++) { //Заполняем масссив случайными числами
		randomArray[i] = new int[column];
		cout << "\t";
		for (int j = 0; j < column; j++) {
			cout << (randomArray[i][j] = rand() % 15) << "\t";
		}
		cout << "\n";
	}
	for (int i = 0; i < row; i++) {	
		for (int j = 0; j < column; j++) {
			if (randomArray[i][j] == 0)
				goto endFirst;
		}
		checkRow++;
		endFirst:;
	}
	cout << "No zero: " << checkRow << "\n\n";
	for (int num = 15; num >= 0; num--) {
		check = 0;
		for (int i = 0; i < row; i++) { 		
			for (int j = 0; j < column; j++) {
				if (num == randomArray[i][j]) {
					check++;
				}
				if (check > 1) {
					numberMax = num;
					goto endSecond;
				}			
			}
		}
	}
endSecond:cout << "Largest number repeated more then one: " << numberMax << "\n\n";
}

/*2. Дана целочисленная прямоугольная матрица. Определить количество строк, 
не содержащих ни одного нулевого элемента и максимальное из чисел, встречающихся в заданной матрице более одного раза.*/