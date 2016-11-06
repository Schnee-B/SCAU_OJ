#include<cstdio>
int main()
{
	int i, j, k, n, m, x, a[5] = { 0,0,0,0,0 }, b = 0, sum = 1;
	scanf("%d %d", &n, &m);
	for (i = 0; i<m; i++)
		scanf("%d", &a[i]);
	if (m == 1) printf("1");
	else
	{
		for (i = 0; i<m - 1; i++)
		{
			if (a[i] == a[i + 1]) b++;
		}
		for (i = 0; i<m; i++)
		{
			for (j = n; j>a[i]; j--) sum = sum*j;
			n -= a[i];
			for (j = n; j>1; j--) sum = sum / j;
		}
		for (i = 0; i<4; i++)
		{
			x = 1;
			if (a[i] != 0)
			{
				for (j = i + 1; j<5; j++)
				{
					if (a[j] != 0 && a[i] == a[j])
					{
						x++;
						a[j] = 0;
					}
				}
			}
			for (j = x; j>1; j--) sum = sum / j;
		}
		printf("%d", sum);
	}
	return 0;
}