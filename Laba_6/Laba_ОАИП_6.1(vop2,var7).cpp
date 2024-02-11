#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int m;
    cout << "m= ";
    cin >> m;
    
        for (int n1 = 1; n1 < m; ++n1)
            for (int n2 = 0; n2 < m; ++n2)
                
                {
                    if ((n1 * n1) + (n2 * n2) == m) {
                        cout << "Число n1 = " << n1;
                        cout << "   Число n2 = " << n2 << endl;
                    }
                }
    
}