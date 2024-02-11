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

	// Определение количества чисел которые посторяются друг за другом
	int sum, k1, k2;
	bool flag;
	sum = 1;
	k1 = 0;
	k2 = 0;
	for (int g = 0; g < sizearr; g++)
	{
		flag = false;

		if (arr[g] == arr[g + 1]) {

			flag = true;
			sum = sum + 1;
		}

		if (flag == false) {
			k2 = sum;
			sum = 0;

			if (k1 < k2) {
				k1 = k2;
			}
		}
	}
	cout << "Количество подряд идущих чисел: " << k1 << endl;
}