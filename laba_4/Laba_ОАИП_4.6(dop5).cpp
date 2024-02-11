#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    float p, q, rom, rsh;
    cout << "Введите меньшую диогональ ";
    cin >> p;
    cout << "Введите большую диогональ ";
    cin >> q;
    cout << "Введите r шара ";
    cin >> rsh;   
    rom = (p*q)/(2 * (sqrt(pow(p, 2) + pow(q, 2))));   
    cout << rom;
    if (rsh < rom) {
        cout << "Сможет ";
    }
    else {
        cout << "Не сможет ";
    }
}