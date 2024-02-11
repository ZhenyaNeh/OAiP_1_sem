#include<iostream>
#include<ctime>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int k = rand() % 5 + 1, number = rand() % 999999999+10000000, check{}, dividend{}, controlNumber{0};
	dividend = number;
	cout << "Число " << number << endl << "\nK = " << k << endl;
	for (int i = 8, checkCycle = 0; i >= 0; i--)
	{
		check = dividend / pow(10, i);
		if (check < 1 && checkCycle == 0)
			continue;
		else
			checkCycle++;
		if (checkCycle != 0)
			dividend -= check * pow(10, i);

		if (check % k == 0 && check!=0){
			int* newArray = new int[8];
			*(newArray + controlNumber) = check;
			cout << controlNumber + 1 << "-ый элемент : " << *(newArray + controlNumber) << endl;
			controlNumber++;
		}
	}
	if ( controlNumber == 0 )
	cout << "Таких чисел нет!!!!!" << endl;
}