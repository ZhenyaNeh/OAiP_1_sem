#include <iostream>
#include <windows.h>
#include<ctime>

using namespace std;

int main() {

    srand(time(NULL));

    int k, * array, counter = 0, sum = 0;
    cout << "Enter size of array: ";
    cin >> k;
    if (!(array = (int*)malloc(k * sizeof(int)))) {
        cout << "Not enough memory";
        return 1;
    }
    for (int i = 0; i < k; i++) {
        *(array + i) = rand() % 10-3;
        cout << " " << *(array + i);
        if (*(array + i) > 0) {
            counter++;
        }
        if (*(array + i) == 0) {
            sum = 0;
        }
        sum += *(array + i);
    }
    cout << "\nAmount of elements more than zero: " << counter;
    cout << "\nSumm of elements after lastzero: " << sum;
    cout << endl << endl;
    free(array);
}

/*1. В одномерном массиве, состоящем из k целых элементов,
вычислить количество положительных элементов массива и сумму элементов массива, расположенных после последнего элемента, равного нулю.*/