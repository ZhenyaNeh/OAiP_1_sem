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

	//Подсчёт количества пар
	int colpar;
	colpar = 0;
	for (int g = 0; g < sizearr; g++)
	{
		if (arr[g] == arr[g + 1]) {
			colpar += 1;
		}
	}
	cout << "Количество пар: " << colpar << endl;
}