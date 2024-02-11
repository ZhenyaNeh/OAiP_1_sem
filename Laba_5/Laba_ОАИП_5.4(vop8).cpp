#include<iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");

    int num, i, flag, prime = 3;                                    
    printf("Введите число: ");
    scanf_s("%d", &num);
    while (num != prime)
    {
        flag = 0;
        //проверка на нечетность
        for (i = 2; i <= (prime / 2); i++)
        {
            if (prime % i == 0)
                flag = 1;
        }

        if (flag == 0)
        {
            printf(" Сверх простое число %d\n", prime);
            prime++;
        }
        if (flag == 1)
        {
            prime++;
        }
    }
    
    return 0;
}