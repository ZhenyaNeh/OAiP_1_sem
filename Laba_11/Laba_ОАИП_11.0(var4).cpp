#include<iostream>

using namespace std;

void main()
{
	int FIRSTSIZE{}, SECONDSIZE{}, largestValue{ 0 };
	cout << "Enter the number of the firstArray: ";
	cin >> FIRSTSIZE;
	cout << "\n\n";
	cout << "Enter the number of the secondArray: ";
	cin >> SECONDSIZE;
	cout << "\n\n";
	int* firstArray = new int[FIRSTSIZE];
	int* secondArray = new int[SECONDSIZE];
	cout << "First array: " << endl;
	for (int i = 0; i < FIRSTSIZE; i++) {//Заполнение массива 1
		cout << "	" << "Number " << i + 1 << " : ";
		cin >> *(firstArray + i);
		if (*(firstArray + i) >= largestValue) {
			largestValue = *(firstArray + i);
		}
	}
	cout << endl;
	cout << "Second array: " << endl;
	for (int i = 0; i < SECONDSIZE; i++) {//Заполнение массива 2
		cout << "	" << "Number " << i + 1 << " : ";
		cin >> *(secondArray + i);
	}
	cout << endl;
	bool check;
	check = false;
	for (int j = 0; j < SECONDSIZE; j++) {
		if (largestValue == *(secondArray + j)) {
			check = true;
			break;
		}
		else {
			check = false;
		}
	}
	if (check) {
		cout << endl << endl << "	" << "Yes, the number " << largestValue << " is contained in the second array" << endl << endl;
	}
}