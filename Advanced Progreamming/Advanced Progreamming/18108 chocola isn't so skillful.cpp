#include <iostream>
using namespace std;
long long n[101] = { 0 };
void getn()
{
	n[4] = 1;
	n[5] = 3;
	n[6] = 7;
	int x = 3, y = 3, z = 3;
	for (int i = 7; i<101; i++)
	{
		n[i] = n[i - 1] + x + y;
		if (i % 2 == 1)
		{
			++z;
			x = z*(z - 1) / 2;
		}
		else y = x;
	}
}
int main()
{
	int T;
	cin >> T;
	getn();
	while (T--)
	{
		int x;
		cin >> x;
		cout << n[x] * 8 * (x - 4) << endl;

	}
	return 0;
}