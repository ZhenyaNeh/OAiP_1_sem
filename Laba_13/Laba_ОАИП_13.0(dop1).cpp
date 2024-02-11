#include <iostream>
#include<ctime>
void main()
{
	srand(time(NULL));
	using namespace std;
	int boxSize{}, matrixSize{}, firstMoving{ 0 }, secondMoving{ 0 };
	int** randomArray = new int* [matrixSize];
	cout << "Enter num of box size: "; cin >> boxSize;
    matrixSize = 2 * boxSize;
    cout << "\n";
	for (int i = 0; i < matrixSize; i++) { //Заполняем масссив случайными числами
		randomArray[i] = new int[matrixSize];
		cout << "\t";
		for (int j = 0; j < matrixSize; j++) {
			cout << (randomArray[i][j] = rand() % 20 - 10) << "\t";
		}
		cout << "\n";
	}
    cout << "\n";
    for (int i = 0; i < boxSize; i++){
        for (int j = 0; j < boxSize; j++)
        {
            //перемещение верхнего левого блока и правого нижниго блока
            firstMoving = randomArray[i][j];
            randomArray[i][j] = randomArray[boxSize + i][boxSize + j];
            randomArray[boxSize + i][boxSize + j] = firstMoving;
            //перемещение верхнего правого блока и левого нижниго блока
            secondMoving = randomArray[i][j + boxSize];
            randomArray[i][j + boxSize] = randomArray[i + boxSize][j];
            randomArray[i + boxSize][j] = secondMoving;
        }  
    }
    cout << "New matrix: " << "\n\n";
    for (int i = 0; i < matrixSize; i++){
        cout << "\t";
        for (int j = 0; j < matrixSize; j++){
            cout << randomArray[i][j] << "\t";
        }
        cout << "\n";
    }
}

/*1. Дана квадратная матрица порядка 2n, элементы которой фо рмируются случайным образом
и находятся в пределах от -10 до 10. Получить новую матрицу,
переставляя ее блоки размера n×n в соответствии со схемой. */