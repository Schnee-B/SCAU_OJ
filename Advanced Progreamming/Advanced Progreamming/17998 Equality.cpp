#include<cstdio>
#include<cmath>
#include<cstdlib>
int a[100001], b[100001];
int main()
{
	int i, T, n, m;
	int countA2, countA3, countB2, countB3, A, B, flagA, flagB;
	scanf("%d", &T);
	while (T--)
	{
		A = B = countA2 = countA3 = countB2 = countB3 = 0;
		flagA = flagB = 1;
		scanf("%d", &n);
		for (i = 0; i < n; i++)
			scanf("%d", &a[i]);
		scanf("%d", &m);
		for (i = 0; i < m; i++)
			scanf("%d", &b[i]);
		for (i = 0; i < n; i++)
		{
			if (a[i] < 0)
				A++;
			if (abs(a[i]) == 2)
				countA2++;
			else if (abs(a[i]) == 3)
				countA3++;
			else if (a[i] == 0)
			{
				countA2 = countA3 = 0;
				flagA = 0;
				break;
			}
		}
		for (i = 0; i < m; i++)
		{
			if (b[i] < 0)
				B++;
			if (abs(b[i]) == 2)
				countB2++;
			else if (abs(b[i]) == 3)
				countB3++;
			else if (b[i] == 0)
			{
				countB2 = countB3 = 0;
				flagB = 0;
				break;
			}
		}
		if (flagA != 0 && flagB != 0)
		{
			if (countA2 == countB2&&countA3 == countB3 && (A % 2) == (B % 2))
				printf("Yes\n");
			else
				printf("No\n");
		}
		else if (flagA != flagB)
			printf("No\n");
		else if (flagA == 0 && flagA == 0)
			printf("Yes\n");
	}
	return 0;
}