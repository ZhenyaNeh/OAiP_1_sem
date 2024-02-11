#include <iostream>
#include<Windows.h>
#include<cstring>
#include<ctime>
using namespace std;

int matrix(int arr);
void myArray(char* text);

int main(void)
{
	setlocale(LC_CTYPE, "Russian");
	int choice;
	do
	{
		cout << "Choice option: " << endl;
		cout << "1 - Matrix: " << endl;
		cout << "2 - Array: " << endl;
		cout << "3 - Exit: " << "\n\n";
		cout << "Enter you choice: ";
		cin >> choice;
		char text[200];
		int arr{};
		switch (choice)
		{

		case 1:

			cout << "Enter num of array : "; cin >> arr;
			matrix(arr);
			system("pause");
			system("cls");
			break;

		case 2:
			cout << "Enter the text:";
			cin.ignore();
			gets_s(text);
			myArray(text);
			system("pause");
			system("cls");
			break;

		case 3:
			cout << "\nExit complete...";
			break;
		}
	} while (choice != 3);
}

void myArray(char* text)
{
	char word[30], probel = ' ';
	int limit{}, check{0}, checkMin{ 100 }, checkMax{ 0 }, min{ 0 }, max{ 0 };
	string words[30];
	limit = strlen(text);
	*(text + limit) = ' ';
	*(text + limit + 1) = '\0';
	limit+=2;
	for (int i = 0, t = 0; i < limit; i++)
	{
		if (*(text + i) != probel)
		{
			word[t] = *(text + i);
			t++;
		}
		else
		{
			if (checkMin > t) {
				checkMin = t;
				min = check;
			}
			if (checkMax < t) {
				checkMax = t;
				max = check;
			}

			word[t] = '\0';
			words[check] = word;
			check++;
			t = 0;
			for (int j = 0; j < 10; j++)
				word[j] = NULL;
		}
	}
	cout << "min: " << words[min] << "\n\n";
	cout << "max: " << words[max] << "\n\n";

	cout << "\n\n";
	return;
}

//2. Определить самое короткое и самое длинное слово в строке. example like to sleep there have been many great writer



int matrix(int arr)
{
	srand(time(NULL));
	using namespace std;
	int  max{0}, flag{0};
	int* myArray = new int[arr];
	cout << "\n";
	for (int i = 0; i < arr; i++) {
		cout << (myArray[i] = rand() % 10) << "\t";
		if (myArray[i] > max) 
			max = myArray[i];	
	}
	cout << "\n";
	for (int i = 0; i < arr; i++) {
		if (myArray[i] == max)
			flag++;
	}
	cout << "Max: " << flag << "\n";
	return 0;
}

//1. Задан массив A из n чисел. Подсчитать, сколько раз встречается в нем максимальное число. 