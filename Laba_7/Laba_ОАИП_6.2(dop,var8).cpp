#include<stdio.h>
#include <iostream>

int main()
{
    //Задача 8
    setlocale(LC_ALL, "ru");
    int num, pos, sum, del, average;
    sum = 0;
    del = 0;
    printf("Введите число n: ");
    scanf_s("%d", &num);

    for (int i = 1; i <= num; i++) {
        printf("Введите %i-ое число последовательности: ", i);
        scanf_s("%d", &pos);
        if (pos % 2 != 0) {
            sum = sum + pos;
            del++;
        }
    }
    average = sum / del;
    printf("Среднее арифметическое нечетных элементов равна %d", average);
}