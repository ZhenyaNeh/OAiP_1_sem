#include <iostream>
#include <windows.h>
using namespace std;


int main() {
    srand(time(NULL));
    int** array2D, n, di = -1, bc = 0;
    cout << "Enter amount of rows and columns: ";
    cin >> n;
    cout << "Array2D: \n";
    array2D = new int* [n];
    for (int i = 0; i < n; i++) {
        array2D[i] = new int[n];
        for (int j = 0; j < n; j++) {
            array2D[i][j] =rand() % 10 - 8;
            cout << "\t" << array2D[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (array2D[i][j] > 0) {
                di = i;
                bc = 1;
                goto end;
            }
        }
    }
    end: cout << "plaas string: " << di+1 << endl;
    if (bc == 1 && di > 0) {
        for (int j = 0; j < n; j++) {
            array2D[di - 1][j] = array2D[di - 1][j] * (-1);
        }
    }
    if (bc == 1 && di == 0) {
        for (int j = 0; j < n; j++) {
            array2D[di + n-1][j] = array2D[di + n-1][j] * (-1);
        }
    }
    if (bc == 1 && di == -1) {
        for (int j = 0; j < n; j++) {
            cout << "no such lines" << endl << endl;
        }
    }
    cout << "New array2D\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "\t" << array2D[i][j];
        }
        puts("\n");
    }
    for (int j = 0; j < n; j++) {
        delete[] array2D[j];
    }
    delete[] array2D;
}
//2. Проверить, есть ли в матрице хотя бы одна строка, содержащая положительный элемент, и найти ее номер. Знаки элементов предыдущей строки изменить на противоположные.
