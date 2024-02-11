#include <iostream>
#include <windows.h>
#include<ctime>

using namespace std;

int main() {
    srand(time(NULL));
    int n, ** array2D, col;
    cout << "Enter amount of rows and columns: ";
    cin >> n;
    array2D = new int* [n];
    cout << "Array2D: \n";
    for (int i = 0; i < n; i++) {
        array2D[i] = new int[n];
        for (int j = 0; j < n; j++){
            cout << "\t" << (array2D[i][j] = rand() % 20);
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (array2D[j][i] == 0) {
                col = i + 1;
                goto end;
            }
        }
    }
   end: cout << "Col with at least one zero: " << col;
    for (int j = 0; j < n; j++) {
        delete[] array2D[j];
    }
    delete[] array2D;
}

/*2. Дана целочисленная прямоугольная матрица. Определить номер первого из столбцов, содержащих хо-тя бы один нулевой элемент.*/