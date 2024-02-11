#include <iostream>
#include<Windows.h>
#include<cstring>
#include<ctime>
using namespace std;

int matrix(int row, int column); 
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
		char text[100], probel = ' ', m{};
		int limit{}, sum{};
		int row{}, column{};
		switch (choice)
		{
		
		case 1: 
			
			cout << "Enter num of rows : "; cin >> row;
			cout << "Enter num of cols : "; cin >> column; 
			matrix(row, column);
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
	} while (choice!= 3);
}

void myArray(char* text) 
{
	int limit{}, sum{};
	char probel = ' ', m{};
	limit = strlen(text);
	*(text +limit) = ' ';
	*(text + limit +1) = '\0';
	limit++;
	for (int i = 0; i < limit; i++)
	{
		if (*(text + i) != probel) {
			m = *(text + i);
			sum += int(m);
		}
		else {
			cout << sum << "\t";
			sum = 0;
		}
	}
	cout << "\n\n";
	return ;
}

//2. В строке подсчитать сумму кодов символов каждого слова. Слова в строке разделены пробелами.



int matrix(int row, int column)
{
	srand(time(NULL));
	using namespace std;
	int  searchRow{ 0 }, check{ 0 }, d;
	int** randomArray = new int* [row];

	for (int i = 0; i < row; i++) //Заполняем масссив случайными числами
	{
		randomArray[i] = new int[column];
		cout << "\t";
		for (int j = 0; j < column; j++)
			cout << (randomArray[i][j] = rand() % 100) << "\t";
		cout << "\n";
	}
	cout << "Enter num (d): "; cin >> d;
	
	for (int i = 0; i < row; i++)
		for (int j = 0; j < column; j++) 
			if (randomArray[i][j] == d) 
				cout << "row: " << i+1 <<"\n";
		
	return 0;
}

//1. Дан двумерный массив, состоящий из N строк и М столбцов, а также число d. Найти строку, содержащую число d. 