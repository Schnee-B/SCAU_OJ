#include<cstdio>
int a[100010], b[100010], c[200020];
int main()
{
	int i, j, k, t, t1, t2, num, n, count, T, put[12];
	scanf("%d", &T);
	for (i = 1; i <= T; i++)
	{
		j = k = t = 1;
		count = 0;
		scanf("%d%d", &n, &num);
		for (t = 1; t <= 2 * n; t = t + 2)
		{
			scanf("%d%d", &c[t], &c[t + 1]);
			if (c[t]) a[j++] = c[t + 1];
			else b[k++] = c[t + 1];
		}

		t1 = 1;
		t2 = k - 1;
		while (t1<j&&t2 >= 1)
		{
			if (a[t1] + b[t2] == num)
			{
				count++;
				t1++;
				t2--;
			}
			else if (a[t1] + b[t2]>num)
			{
				t2--;
			}
			else
			{
				t1++;
			}
		}
		put[i] = count;
	}
	for (i = 1; i <= T; i++)
		printf("%d\n", put[i]);
	return 0;
}