#include <iostream>
using namespace std;
void main()
{
	int matrixSize{}, check{ 0 };
	int** randomArray = new int* [matrixSize];
	cout << "Enter num of matrix size: "; cin >> matrixSize;

	for (int i = 0; i < matrixSize; i++) {
		randomArray[i] = new int[matrixSize];
		cout << "\t";
		for (int j = 0, check=1+i; j < matrixSize; j++) {
			cout << (randomArray[i][j] = check) << "\t";
			check++;
			if (check > matrixSize) 
				check = 1;		
		}
		cout << "\n";
	}
}

/*2.	Латинским квадратом порядка n называется квадратная таблица размером nхn,
каждая строка и каждый столбец ко-торой содержат все числа от 1 до n. Для заданного
n в матрице L(n, n) построить латинский квадрат порядка n. */