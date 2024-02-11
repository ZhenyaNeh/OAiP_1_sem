#include <iostream>
#include<ctime>
#include <windows.h>

using namespace std;
void main()
{
	srand(time(NULL));
	int n, * array, counter = 0, sum = 0, max = 0;
	cout << "Enter size of array: ";
	cin >> n;
	if (!(array = (int*)malloc(n * sizeof(int)))) {
		cout << "Not enough memory";
		return;
	}
	for (int i = 0; i < n; i++) {
		*(array + i) = rand() % 10;
		cout << " " << *(array + i);
		if (*(array + i) > max) {
			max = *(array + i);
			counter = 0;
		}
		if (*(array + i) == max) {
			counter++;
		}
	}
	cout << "\nAmount of elements equal to max: " << counter;
	cout << endl << endl;
}

//1. Задан массив A из n элементов. Подсчитать, сколько раз встречается в нем максимальное число.