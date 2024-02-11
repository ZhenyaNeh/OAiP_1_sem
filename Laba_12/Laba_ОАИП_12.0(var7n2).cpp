#include <cstring>
#include <stdio.h>
#include <iostream>
using namespace std;

void main()
{
	char firstArray[256];
	int count{0};
	char* pointer;
	puts("Enter string: ");
	gets_s(firstArray);
	for (pointer = firstArray; *pointer != 0; pointer++)
	{
		if (*pointer >= '0' && *pointer <='9')  count++;
	}
	if (count == 0)
		cout << "No such numbers: " << count << endl;
	else
		cout << "Number of digits: " << count << endl;
}
//Дана строка символов, состоящая из букв, цифр, запятых, точек, знаков «+» и «–». Найти количество цифр.
