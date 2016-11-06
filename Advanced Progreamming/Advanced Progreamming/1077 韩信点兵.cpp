#include<cstdio>
int main()
{
	long long a[8], b[8], i, j, k = 0, l = 1, m = 1, n = 1;
	for (i = 0; i < 8; i++)
	{
		scanf("%lld", &a[i]);
		l = l*a[i];
		if (a[i]>n)
			n = a[i];
	}
	for (i = 0; i < 8; i++)
		scanf("%lld", &b[i]);
	k = a[0] + b[0];
	for (i = 1; i < 8; i++)
	{
		m = m*a[i - 1];
		k = k - m;
		for (j = 1;; j++)
		{
			k += m;
			if ((k%a[i]) == b[i])
				break;
		}
	}
	printf("%lld", k);
	return 0;
}