#include <iostream>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "ru");
    float a, b, x;
    int n = 5;
    a = 0;
    b = 1;
    for (int i = 1; i <= n; i++) {
        printf("Введите x: \n");
        scanf_s("%f", &x);
        if (x > 0) {
            a = a + (i * x);
            printf("Вывод числа a: %5.2f\n\n", a);
        }

        if (x <= 0) {
            b = b * (i * x);
            printf("Вывод числа b: %5.2f\n\n", b);
        }
    }
    printf("Вывод конечного числа a: %5.2f\n", a);
    printf("Вывод конечного числа b: %5.2f\n", b);
}