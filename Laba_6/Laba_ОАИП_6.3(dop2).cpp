#include <iostream>

int main()
{
    setlocale(LC_ALL, "ru");
    int Var = 0, a, b, c, d, Rub = 100;
    for (a=0 ; a <= 2; a++) {
        for (b = 0; b <= 5; b++) {
            for (c = 0; c <= 20; c++) {
                for (d = 0; d <= 50; d++) {
                    if (Rub == (a * 50 + b * 20 + c * 5 + d * 2))
                        Var++;
                }
            }
        }
    }
    printf("Количество вариаций - %d", Var);
}