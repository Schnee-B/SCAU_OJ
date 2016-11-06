#include<cstdio>
#include<cstdlib>
#include<cstring>
int cmp(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}
int main()
{
	int count, n, a[502], i, j;
	while (scanf("%d", &n) != EOF)
	{
		for (i = 0; i < n; i++)
			scanf("%d", &a[i]);
		qsort(a, n, sizeof(a[0]), cmp);
		count = 0;
		for (i = 0; i < n - 2; i++)
		{
			for (j = n / 2; j < n; j++)
			{
				if (a[i] != 0 && a[j] != 0 && a[j] / a[i] >= 3)
				{
					count++;
					a[i] = a[j] = 0;
					break;
				}
			}
		}
		for (i = 0; i < n; i++)
		{
			if (a[i] != 0)
				count++;
		}
		printf("%d\n", count);
	}
	return 0;
}