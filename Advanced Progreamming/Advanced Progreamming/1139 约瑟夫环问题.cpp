#include<cstdio>
int main()
{
	int a[32], i, n, s, m, count, shanchu;
	scanf("%d%d%d", &n, &s, &m);
	for (i = 0; i<n; i++) a[i] = 1;
	count = n;
	i = s;
	shanchu = 1;
	while (count>1)
	{
		i = (s++) % n;
		if (a[i] == 1)
		{
			shanchu++;
			shanchu %= m;
			if (shanchu == 0)
			{
				a[i] = 0;
				count--;
			}
		}
	}
	for (i = 0; i<n; i++)
	{
		if (a[i] == 1)
			printf("%d", i + 1);
	}
	return 0;
}