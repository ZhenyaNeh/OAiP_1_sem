#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int xa, xb, xc, xd, ya, yb, yc, yd;
    cout << "Координаты точки A: ";
    cin >> xa >> ya;
    cout << "Координаты точки B: ";
    cin >> xb >> yb;
    cout << "Координаты точки C: ";
    cin >> xc >> yc;
    cout << "Координаты точки D: ";
    cin >> xd >> yd;
    
    
    //Диагонали 
    double l = abs(sqrt((pow((xc - xa), 2)) + (pow((yc - ya), 2))));
    double m = abs(sqrt((pow((xd - xb), 2)) + (pow((yd - yb), 2))));

    //проверка на равность двух сторон сторон
    if (((xc - xb) * (yc - yb) == (xd - xa) * (yd - ya)) || ((xb - xa) * (yb - ya) == (xc - xd) * (yc - yd))) {
        //проверка на равность всех сторон
        if (((xb - xa) * (yb - ya) == (xc - xd) * (yc - yd)) && ((xc - xb) * (yc - yb) == (xd - xa) * (yd - ya))) {

            if (l == m) {

                cout << "Прямоугольник" << endl;
            }
            else {
                cout << "Параллелограмм" << endl;
            }
        }
        else {
            cout << "Трапеция" << endl;
        }
    }
    else {
        cout << "Произвольный четырехугольник" << endl;
    }
    return 0;
}