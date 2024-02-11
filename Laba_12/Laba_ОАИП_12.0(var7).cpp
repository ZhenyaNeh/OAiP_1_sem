#include <cstring>
#include <iostream>
using namespace std;

void main()
{
    char firstArray[256];
    char secondArray[256];
    int n, size, checkNumber{0};
    cout << "Input string: ";
    gets_s(firstArray);
    n = strlen(firstArray);
    size = n;
    for (int i = 0; i <= n; i++) {
        secondArray[i] = firstArray[i];
    }
    for (int i = 0; i <= n; i++){
        size++;
        if (firstArray[i] == 'a'){
            for (int j = i; j <= size+1; j++){
                secondArray[j + 2] = firstArray[j + 1];
            }
            secondArray[i + 1] = '!';
            checkNumber++;
        }
        for (int f = 0; f <= size + 1; f++) {
            firstArray[f] = secondArray[f];
        } 
    }
    for (int i = 0; i <= n + checkNumber; i++)
        cout << secondArray[i];
}
//. Преобразовать строку: после каждой буквы a добавить символ «!».