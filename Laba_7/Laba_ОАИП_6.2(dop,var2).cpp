#include<stdio.h>
#include <iostream>

int main()
{
    //Звдача 6
    setlocale(LC_ALL, "ru");
    int num, pos, sum, pro;
    sum = 0;
    pro = 1;
    printf("Введите число n: ");
    scanf_s("%d", &num);

    for (int i = 1; i <= num; i++) {
        printf("Введите %i-ое число последовательности: ", i);
        scanf_s("%d", &pos);
        if (pos<0 ) {
            pro *= pos;
        }
        if (pos > 0) {
            sum += pos;
        }
    }
    printf("Сумму положительных чисел: %d\n", sum);
    printf("Произведение отрицательных чисел: %d\n", pro);
}