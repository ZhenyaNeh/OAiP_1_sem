#include <iostream>
using namespace std;

int main()
{
	srand((unsigned)time(NULL));
	int SIZE{}, checkNumber{0}, unique{0};
	cout << "Enter the number of the firstArray: ";
	cin >> SIZE;
	cout << "\n\n";
	int* firstArray = new int[SIZE];
	for (int i = 0; i < SIZE; i++){// заполнение массива
		cout << "	" << "Number " << i + 1 << " : ";
		cin >> *(firstArray + i);
	}
	bool check;
	for (int i = 0; i < SIZE; i++){
		check = false;
		checkNumber = *(firstArray + i);
		for (int j = 0; j < SIZE; j++)
		{
			if (checkNumber == *(firstArray + j)  && j != i) {
				check = false;
				break;
			}
			else
				check = true;
		}
		if (check) 
			unique++;	
	}
	cout << endl << "Number of unique pairs: " << unique << endl;
}