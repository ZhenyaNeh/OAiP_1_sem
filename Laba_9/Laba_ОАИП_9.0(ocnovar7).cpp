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
	int u;
	u = 0;

	//поиски минимального значения
	int checkmin = arr[0];
	for (int t = 1; t < sizearr ; t++)
	{
		if (checkmin > arr[t]) {
			checkmin = arr[t];
			u = t;
		}
	}
	cout << "Минимальное значение: " << checkmin << endl;
	
	//удаление
	for (int i = u; i < sizearr - 1; ++i)
	{
		arr[i] = arr[i + 1];
	}
	sizearr--; 


	cout << "Массив, после удаление 3-его элемента: ";// эта строка говорит о содержимом этого блока 
	int avarage, sum = 0;
	for (int i = 0; i < sizearr; ++i)
	{
		sum += arr[i];				//так же поиск среднего значения массива
		cout << arr[i] << " ";
	}
	avarage = sum / sizearr;
	cout <<"avarage: "<< avarage << endl;

	// создание нового массива для смещения
	const int SIZES = 30;
	int area[SIZES];
	sizearr += 3;
	for (int q = 0; q < sizearr; q++)
	{
		if (q < 3) {
			area[q] = avarage;
		}
		area[q+3] = arr[q];
	}
	
	
	cout << "Конечный массив" << endl;// эта строка говорит о содержимом этого блока
	for (int r = 0; r < sizearr; r++) {
		cout << area[r] << endl;
	}
}