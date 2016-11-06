#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int *a, *b;
	int n;
	cin >> n;
	while (n > 0)
	{
		a = new int[3 * n / 2 + 1];
		b = new int[3 * n / 2 + 1];
		for (int i = 0; i < n; ++i)
			scanf("%d", &a[i]);
		for (int i = n; i < 3 * n / 2; ++i)
			a[i] = a[i - n];
		for (int i = 0; i < 3 * n / 2; ++i)
		{
			b[i] = a[i] - i;
			a[i] += i;
		}
		for (int i = 0; i < n; ++i)
		{
			for (int j = i+1; j < n; ++j)
			{
				if (a[i] + a[j] + (i + n - j) % n)
					b[i] = a[i] + a[j] + (i + n - j) % n;
			}
		}
		int temp = b[0];
		for (int i = 0; i < n; ++i)
		{
			if (b[i] > temp)
				temp = b[i];
		}
		cout << temp << endl;
		cin >> n;
	}
}