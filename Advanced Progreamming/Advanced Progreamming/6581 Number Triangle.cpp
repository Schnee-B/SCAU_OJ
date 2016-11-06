#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	int num[101][101], result[101][101] = { 0 };
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j <= i; ++j)
			cin >> num[i][j];
	}
	result[0][0] = num[0][0];
	for (int i = 1; i < n; ++i)
	{
		result[i][0] = result[i - 1][0] + num[i][0];
		result[i][i] = result[i - 1][i - 1] + num[i][i];
	}
	for (int i = 2; i < n; ++i)
	{
		for (int j = 1; j < i; ++j)
			result[i][j] = max(result[i - 1][j - 1], result[i - 1][j]) + num[i][j];
	}
	int max = 0;
	for (int i = 0; i < n; ++i)
	{
		if (result[n - 1][i] > max)
			max = result[n - 1][i];
	}
	cout << max;
	return 0;
}