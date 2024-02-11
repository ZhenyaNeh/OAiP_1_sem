#include<stdio.h>
#include <iostream>

int main()
{
    //задача 1
    setlocale(LC_ALL, "ru");
    int num, pos, sum;
    sum = 0;
    printf("Введите число n: ");
    scanf_s("%d", &num);

    for (int i = 1; i <= num; i++) {
        printf("Введите %i-ое число последовательности: ", i);
        scanf_s("%d", &pos);
        if (pos % 2 == 0) {
            sum = sum + pos;
        }
    }
    printf("Сумма четных равна %d", sum);
}