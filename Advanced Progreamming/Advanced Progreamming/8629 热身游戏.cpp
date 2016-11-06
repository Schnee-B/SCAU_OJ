#include<cstdio>
#include<cstring>
int main()
{
	int T, n1[1000], n2[1000], n[1000], m[1000], temp, e, m1len, m2len, i, j, sum;
	char m1[1000], m2[1000];
	scanf("%d", &T);
	while (T--)
	{
		memset(m1, 0, sizeof(m1));
		memset(m2, 0, sizeof(m2));
		memset(m, 0, sizeof(m));
		memset(n1, 0, sizeof(n1));
		memset(n2, 0, sizeof(n2));
		memset(n, 0, sizeof(n));
		scanf("%s%s%d", m1, m2, &sum);
		if (sum == 1) { printf("%s\n", m1); continue; }
		m1len = strlen(m1); m2len = strlen(m2);
		for (i = m1len - 1; i >= 0; --i) n[i] = n1[i] = m1[m1len - 1 - i] - '0';
		for (i = m2len - 1; i >= 0; --i) n2[i] = m2[m2len - 1 - i] - '0';
		for (i = 2, e = 0; i <= sum; ++i)
		{
			for (j = 0; j<1000; ++j)
			{
				m[j] = n2[j];
				temp = (n[j] + n2[j] + e);
				n[j] = temp % 10;
				e = temp / 10;
			}
			for (j = 0, e = 0; j<1000; ++j)
			{
				temp = (n1[j] + n2[j] + e);
				n2[j] = temp % 10;
				e = temp / 10;
			}

			for (j = 0; j<1000; ++j)  n1[j] = m[j];

		}
		for (j = 999; !n[j] && j>0; --j);
		for (; j >= 0; --j) printf("%d", n[j]);
		printf("\n");
	}
	return 0;
}