#include <iostream>
#include <windows.h>
#include<ctime>

using namespace std;

int main() {
    srand(time(NULL));
    int n;
    float* array, min = 10000, sum = 0;
    cout << "Enter size of array: ";
    cin >> n;
    if (!(array = (float*)malloc(n * sizeof(float)))) {
        cout << "Not enough memory";
        return ;
    }
    int fn = -1, sn = -1;
    for (int i = 0; i < n; i++) {
        *(array + i) = rand() % 20 - 5;
        cout << " " << *(array + i);
        if (*(array + i) < min) {
            min = *(array + i);
        }
        if ((*(array + i) < 0) && (fn != -1) && (sn == -1)) {
            sn = i;
        }
        if ((*(array + i) < 0) && (fn == -1)) {
            fn = i;
        }
    }
    if (sn != -1 && fn != -1) {
        for (int i = fn + 1; i < sn; i++) {
            sum += *(array + i);
        }
    }

    cout << "\nMinimal element: " << min;
    cout << "\nSumm of elements: " << sum;
    free(array);
}

/*1. В одномерном массиве, состоящем из n вещественных элементов,
вычислить номер минимального элемента массива и сумму элементов массива,
расположенных между первым и вторым отрицательными эле-ментами.*/