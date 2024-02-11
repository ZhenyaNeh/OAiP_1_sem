#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double C, r, S, pi;
    pi = 3.14;
    cout << "Введите длинну круга C: "; cin >> C;
    r = C / 2*pi;
    S = pi * pow(pi, 2);
    cout << "Площадь круга (S) равна: " << S << endl;
}