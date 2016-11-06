#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("data.txt", "w", stdout);
	long long f1 = 1, f2 = 2, fn;
	cout << f1 << "," << f2 << ",";
	for (int i = 0; i < 1500; ++i)
	{
		fn = f1 + f2;
		f1 = f2;
		f2 = fn;
		cout << fn << ",";
	}
	return 0;
}