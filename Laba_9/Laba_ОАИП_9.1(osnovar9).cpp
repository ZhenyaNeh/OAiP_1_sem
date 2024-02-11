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

	// заполняю массив
	for (int i = 0; i < sizearr; i++)
	{
		arr[i] = rand() % 99;
		cout << arr[i] << endl;
	}
	
	//поиск среднего значения массива
	int avarage, sum = 0;
	for (int i = 0; i < sizearr; ++i)
	{
		sum += arr[i];				
	}
	avarage = sum / sizearr;
	cout << "avarage: " << avarage << endl;

	//ВЫявление самого близкого по значению числа
	int min1, min2, k;
	k = 0;
	min1 = abs(arr[0]-avarage);
	for (int g = 1; g <= sizearr; g++)
	{
		min2 = abs(arr[g] - avarage);
		if (min1 > min2) {
			min1 = min2;
			k = g;
		}
	}
	cout << "Самое ближнее значение: " << arr[k] << endl;
}