#include<iostream>
using namespace std;
int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int n, k;
		cin >> n >> k;
		if (n % 2 == 0 && k == 1) cout << "no\n";
		else cout << "yes\n";
	}
	return 0;
}