#include<cstdio>
int main()
{
	int i, n, t, a, b;
	long long sum;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		sum = 0;
		if (n > 0)
		{
			b = 0;
			for (i = 1; (a = n / i - n / (i + 1)) != 0; i++)
			{
				b += a;
				sum += i*a;
			}
			a = n - b;
			for (i = 1; i <= a; i++)
				sum += n / i;
		}
		printf("%lld\n", sum);
	}
	return 0;
}