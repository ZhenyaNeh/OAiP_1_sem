#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int n;
    float Prise, Q;
    printf("Введите число выручки: ");
    scanf_s("%f", &Prise);
    printf("Введите заданное значение: ");
    scanf_s("%f", &Q);
    if (Prise == Q) {
        cout << " В первый день выручка составит " << Q << endl;
   
    }
    else {
        n = 1;
        while (Prise <= Q) {
          
            Prise = Prise + ((Prise*3)/100);
            cout << "На " << n << " день выручка составит " << Prise << " рублей" << endl;
            n++;
        }
    }
}