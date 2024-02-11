#include <iostream>
#include<ctime>
using namespace std;

void main()
{
	srand(time(NULL));
	int matrixSize{}, checkNumberMax{ 0 }, rowMax{ 0 }, columnMax{ 0 }, value{ 0 }, row{ 0 }, column{ 0 }, checkValue{ 0 }, random{ 0 };
	int** randomArray = new int* [matrixSize];
	cout << "Enter num of matrix size: "; cin >> matrixSize;
	for (int i = 0; i < matrixSize; i++) {
		randomArray[i] = new int[matrixSize];
		cout << "\t";
		for (int j = 0; j < matrixSize; j++) {
			cout << (randomArray[i][j] = rand() % 90) << "\t";
			if (checkNumberMax < randomArray[i][j])
			{
				checkNumberMax = randomArray[i][j];
				rowMax = i;
				columnMax = j;
			}
		}
		cout << "\n";
	}
	value = randomArray[0][0];
	randomArray[0][0] = randomArray[rowMax][columnMax];
	randomArray[rowMax][columnMax] = value;
	checkValue = (checkNumberMax - 1);
	for (int num = 1; num < matrixSize; num++) {

		for (int t = 30; t > 0; t--) {
			checkValue--;
			for (int icontrol = 0; icontrol < matrixSize; icontrol++) {
				for (int jcontrol = 0; jcontrol < matrixSize; jcontrol++) {


					if (checkValue == randomArray[icontrol][jcontrol]) {
						row = icontrol;
						column = jcontrol;
						goto end;
					}
				}
			}

		}
	end:random = randomArray[num][num];
		randomArray[num][num] = randomArray[row][column];
		randomArray[row][column] = random;
	}
	cout << "New matrix: " << "\n\n";
	for (int i = 0; i < matrixSize; i++) {
		cout << "\t";
		for (int j = 0; j < matrixSize; j++) {
			cout << randomArray[i][j] << "\t";
		}
		cout << "\n";
	}
}

/* 3. Путем перестановки элементов квадратной вещественной матрицы добиться того,
чтобы ее максимальный элемент находился в левом верхнем углу, следующий по величине -
в позиции (2, 2), следующий  в позиции (3, 3) и т. д., запол-нив таким образом всю главную диагональ. */