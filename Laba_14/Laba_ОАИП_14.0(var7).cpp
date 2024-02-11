#include <iostream>
#include<ctime>
void main()
{
	srand(time(NULL));
	using namespace std;
	int SIZE{}, checkNumberAverage{ 0 }, average{ 0 };
	int *randomArray;
	cout << "Enter number of array : "; cin >> SIZE;
	if (!(randomArray = (int*)malloc(SIZE * sizeof(int)))) {
		cout << "Not enough memory";
		return ;
	}
	for (int i = 0; i < SIZE; i++) { //Заполняем масссив случайными числами, считаем среднее арифметическое
		cout << ( * (randomArray + i) = rand() % 99 + 1) << "\t";
		average += *(randomArray + i);
	}
	average /= SIZE;
	cout << "Average: " << average << "\n\n";

	for (int i = 0; i < SIZE; i++) { 
		if (*(randomArray + i) > average) {
			checkNumberAverage++;
		}
	}
	cout << "Thr number of numbers greater then the average: " << checkNumberAverage << endl;
	free(randomArray);
}

//1. Задан массив A из n элементов. Найти количество элементов этого массива, больших среднего арифме-тического всех его элементов.