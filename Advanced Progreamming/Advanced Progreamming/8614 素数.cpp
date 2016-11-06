#include<cstdio>
#include<cmath>
int a[100001];
int main()
{
	int i, T, s[100000], max = 0;
	scanf("%d", &T);
	for (i = 0; i < T; i++)
	{
		scanf("%d", &s[i]);
		if (s[i]>max)
			max = s[i];
	}
	int j, n;
	a[0] = a[1] = 0;
	n = a[2] = 1;
	for (i = 3; i <= max; i++)
	{
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i%j == 0)
				break;
		}
		if (j > sqrt(i))
			a[i] = ++n;
		else a[i] = n;
	}
	for (i = 0; i < T; i++)
		printf("%d\n", a[s[i]]);
	return 0;
}