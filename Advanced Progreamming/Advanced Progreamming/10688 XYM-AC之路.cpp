#include<cstdio>
#include<cstring>
#include<cmath>
int main()
{
	char s[51][51];
	int i, j, n, x, y = 0, T;
	long long k[10000];
	scanf("%d", &T);
	for (; T > 0; T--)
	{
		x = 0;
		scanf("%d", &n);
		for (i = 0; i < n; i++)
		{
			scanf("%s", s[i]);
			for (j = 0; j < i; j++)
				if (strcmp(s[j], s[i]) == 0)
					break;
			if (j == i)
				x++;
		}
		k[y++] = pow(2, x);
	}
	for (i = 0; i<y; i++)
		printf("%lld\n", k[i]);
	return 0;
}