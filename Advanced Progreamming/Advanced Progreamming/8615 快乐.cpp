#include <iostream>
int gethappy[51] = { 0 }, losspow[51] = { 0 }, m[51][2000];
using namespace std;
int solve(int n)
{
	int i, j;
	for (j = 0; j<2000; j++)
	{
		if (j>losspow[n])
			m[n][j] = gethappy[n];
		else
			m[n][j] = 0;
	}
	for (i = n - 1; i >= 1; --i)
	{
		for (j = 0; j<2000; ++j)
		{
			if (j>losspow[i])
			{
				m[i][j] = m[i + 1][j]>(m[i + 1][j - losspow[i]] + gethappy[i]) ? m[i + 1][j] : (m[i + 1][j - losspow[i]] + gethappy[i]);
			}
			else
				m[i][j] = m[i + 1][j];
		}
	}
}
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i)
		cin >> gethappy[i];
	for (int i = 1; i <= n; ++i)
		cin >> losspow[i];
	solve(n);
	cout << 1 + m[1][1999];
	return 0;
}