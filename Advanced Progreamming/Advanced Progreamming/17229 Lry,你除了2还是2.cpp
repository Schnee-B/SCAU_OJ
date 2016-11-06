#include<cstdio>
int main()
{
	long long a, b, n, r;
	scanf("%lld", &n);
	a = 4 * n;
	b = n + 2;
	while (r = a%b)
	{
		a = b;
		b = r;
	}
	printf("%lld", 4 * n / b);
	return 0;
}