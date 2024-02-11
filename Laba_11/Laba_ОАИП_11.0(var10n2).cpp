#include<iostream>
#include<ctime>

using namespace std;

void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "ru");

	int SIZE{ 5 }, flag{ 0 }, checkNumber{ 0 }, checkNumber2{ 0 }, number{ 0 }, largestValue{ 0 };
	int* firstArray = new int[SIZE];
	int* secondArray = new int[SIZE];
	int* thirdArray = new int[SIZE];

	cout << "First array: " << endl;
	for (int i = 0; i < SIZE; i++) {//Заполнение массива 1
		*(firstArray + i) = rand() % 100;
		cout << "	" << "Number " << i + 1 << " : " << *(firstArray + i) << endl;
	}
	cout << endl;
	cout << "Second array: " << endl;
	for (int i = 0; i < SIZE; i++) {//Заполнение массива 2
		*(secondArray + i) = rand() % 100;
		cout << "	" << "Number " << i + 1 << " : " << *(secondArray + i) << endl;
	}
	cout << endl;
	cout << "Third array: " << endl;
	for (int i = 0; i < SIZE; i++) {
		*(thirdArray + i) = *(firstArray + i) + *(secondArray + i);
		cout << "	" << "Number " << i + 1 << " : " << *(thirdArray + i) << endl;
	}
}