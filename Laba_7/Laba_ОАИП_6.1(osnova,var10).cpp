#include <iostream>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "ru");
    float x, y, q;
    int n = 6;
    q = 0;
    for (int i = 1; i <= n; i++) {
        printf("Введите x: \n");
        scanf_s("%f", &x);
        printf("Введите y: \n");
        scanf_s("%f", &y);
        q =q + (i * (x * y));
        printf("Сумма равна % 5.2f\n\n", q);
    }
    printf("Конечная сумма равна %5.2f\n", q);
}