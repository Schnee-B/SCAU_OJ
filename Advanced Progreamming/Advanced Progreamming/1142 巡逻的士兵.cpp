#include<cstdio>
int n;
int f[10005];
int F(int x)
{
	if (x <= 10000)
	{
		if (f[x] != -1)
			return f[x];
		else
		{
			if (x <= 2)
				return f[x] = 0;
			else if (x == 3)
				return f[x] = 1;
			else if (x & 1)
				return f[x] = F(x / 2) + F(x / 2 + 1);
			else
				return f[x] = 2 * F(x / 2);
		}
	}
	else
	{
		if (x & 1)
			return F(x / 2) + F(x / 2 + 1);
		else
			return 2 * F(x / 2);
	}
}
int main()
{
	for (int i = 0; i < 10005; ++i)
		f[i] = -1;
	while (scanf("%d", &n))
	{
		if (n > 0)
			printf("%d\n", F(n));
		else
			break;
	}
	return 0;
}