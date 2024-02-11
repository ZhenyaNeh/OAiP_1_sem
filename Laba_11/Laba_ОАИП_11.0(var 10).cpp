#include<iostream>

using namespace std;

void main()
{
	int SIZE{ 5 }, flag{ 0 }, checkNumber{ 0 }, checkNumber2{ 0 }, number{ 0 }, largestValue{ 0 };
	int* firstArray = new int [SIZE];
	int* secondArray = new int [SIZE];

	cout << "First array: " << endl;
	for (int i = 0; i < SIZE; i++) {//Заполнение массива 1
		cout << "	" << "Number " << i + 1 << " : ";
		cin >> *(firstArray + i);
		if (*(firstArray + i) >= largestValue) {
			largestValue = *(firstArray + i);
		}
	}
	cout << endl;
	cout << "Second array: " << endl;
	for (int i = 0; i < SIZE; i++) {//Заполнение массива 2
		cout << "	" << "Number " << i + 1 << " : ";
		cin >> *(secondArray + i);
	}
	cout << endl;
	checkNumber2 = largestValue;
	bool check;
	for (int i = 0; i < SIZE; i++) {
		check = false;
		for (int j = 0; j < SIZE; j++) {
			if (*(firstArray + i) == *(secondArray + j)) {
				check = false;
				break;
			}
			else {
				check = true;
			}			
		}
		if (check == true) {
			checkNumber = *(firstArray + i);
			if (checkNumber <= checkNumber2) {
				checkNumber2 = checkNumber;
			}
		}
	}
	number=checkNumber2;
	cout << endl << endl << "	" << "Number unique min = " << number;
}