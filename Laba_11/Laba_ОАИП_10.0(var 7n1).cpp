#include<iostream>
#include<ctime>

using namespace std;

void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "ru");
	int number = rand() % 5 + 5, k = rand() % 10+1 , flag{};
	int* myArray = new int[number];

	for (int i = 0; i < number; i++){//Заполнение массива
		*(myArray + i) = rand() % 10 + 1;
	}
	for (int i = 0; i < number; i++){//Вывод массива
		cout << "Номер " << i + 1 << " : " << *(myArray + i) << endl;
	}
	cout << endl << "K = " << k << endl << "\nНомера элементов массива которые больше К :" << endl;
	for (int i = 0, t = 1; i < number; i++){
		if (*(myArray + i) > k)
		{
			cout << t <<"-ый номер = " << i + 1 << " (" << *(myArray + i) << " > " << k << ")" << endl;
			flag++;
			t++;
		}
	}
	if (flag == 0)
		cout << "Таких чисел нет" << endl;
	flag = 0;
	cout << "\nНомера элементов массива которые равны К :" << endl;
	for (int i = 0, t = 1; i < number; i++)
	{
		if (*(myArray + i) == k)
		{
			cout << t << "-ый номер = " << i + 1 << " (" << *(myArray + i) << " = " << k << ")" << endl;
			flag++;
			t++;
		}
	}
	if (flag == 0)
		cout << "Таких чисел нет" << endl;
	flag = 0;
	cout << "\nНомера элементов массива которые меньше К :" << endl;
	for (int i = 0, t = 1; i < number; i++)
	{
		if (*(myArray + i) < k)
		{
			cout << t << "-ый номер = " << i + 1 << " (" << *(myArray + i) << " < " << k << ")" << endl;
			flag++;
			t++;
		}
	}
	if (flag == 0)
		cout << "Таких чисел нет" << endl;
}