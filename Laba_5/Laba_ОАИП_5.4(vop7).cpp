#include <iostream>
using namespace std;

int main()
{
	for (int k = 1; k <= 9; ++k)
	for (int o = 0; o <= 9; ++o)
	for (int t = 0; t <= 9; ++t)
	{
	if ((k * 100 + o * 10 + t) + (k * 100 + o * 10 + t) == 2 * (t * 100 + o * 10 + k))
	cout << "KOT+KOT=2TOK " << k * 100 + o * 10 + t << '+' << k * 100 + o * 10 + t << '=' << 2*(t * 100 + o * 10 + k) << endl;
	if ((k * 100 + t * 10 + o) + (k * 100 + o * 10 + t) == (t * 100 + o * 10 + k))
		cout << "KTO+KOT=TOK " << k * 100 + t * 10 + o << '+' << k * 100 + o * 10 + t << '=' << t * 100 + o * 10 + k << endl;
	}
}