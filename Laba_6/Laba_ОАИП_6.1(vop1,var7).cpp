#include <iostream>

int main()
{
    float c, d, a, k, x, y;
    c = 3.7;
    d = 51.9 * pow(10, -2);
    a = 4;
    k = 1;
    while (c <= 5) {
        x = (tan((a * a) - 1)) / (d + 1);
        if ((3 * x) < (a * c)) {
            y = (a * c) + d;
        }
        if (3 * x >= a * c) {
            y = (cos(a * k)) * exp(a + 1);
        }
        c += 0.1;

        printf("Y= %f\t", y);
        printf("X= %f\n", x);
    }
}