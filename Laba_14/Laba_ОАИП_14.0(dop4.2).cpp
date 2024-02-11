#include <iostream>
#include <windows.h>
#include<ctime>

using namespace std;

int main() {
    srand(time(NULL));
    int n, m, counter = 0, bc = 0;
    cout << "\nEnter amout of rows:"; cin >> n;
    cout << "\nEnter amout of columns:"; cin >> m;
    int** array2D = new  int* [n];
    for (int i = 0; i < n; i++) {
        array2D[i] = new int[m];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            array2D[i][j] = rand() % 10;
            cout << "\t" << array2D[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (array2D[i][j] == 0) {
                bc = 1;
            }
        }
        if (bc == 0) {
            counter++;
        }
        bc = 0;
    }
    cout << "\n\n" << "Amount of collums without zero: " << counter << "\n\n";
    for (int j = 0; j < n; j++) {
        delete[] array2D[j];
    }
    delete[] array2D;
}

/*2. Дана целочисленная прямоугольная матрица.
Определить количество столбцов, не содержащих ни од-ного нулевого элемента.*/