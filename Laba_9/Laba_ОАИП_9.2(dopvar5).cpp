#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	srand((unsigned)time(NULL));
	int sizearr;
	const int SIZE = 30;
	int arr[SIZE];
	cout << "Введите размер массива(не больше 30): ";
	cin >> sizearr;

	// заполнение массива
	for (int i = 0; i < sizearr; i++)
	{
		cout << "Заполните " << i << " элемент массива: ";
		cin >> arr[i];
	}


	int colpar, sum, checkNumber;
	checkNumber = 0;
	sum = 0;
	bool check;
	for (int i = 0; i < sizearr; i++)
	{
		check = false;
		checkNumber = arr[i];
		for (int j = 0; j < sizearr; j++)
		{
			if (arr[j] == checkNumber && j != i) {
				check = false;
				break;
			}	
			else
				check = true;
			
		}
		if (check==true) {
			sum++;
		}
	}
	cout << "Количество несовпадаемых чисел: " << sum << endl;
}