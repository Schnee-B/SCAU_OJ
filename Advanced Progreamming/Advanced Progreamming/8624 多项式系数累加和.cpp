#include<cstdio>
int jiechen(int c)
{
	int i, jieguo = 1;
	for (i = 2; i <= c; i++)
		jieguo *= i;
	return jieguo;
}
int main()
{
	int i, sum = 0, n, m, a[100];
	scanf("%d %d", &n, &m);
	for (i = 0; i <= n; i++)
		scanf("%d", &a[i]);
	for (i = m; i <= n; i++)
		sum += a[i] * jiechen(i) / jiechen(i - m);
	printf("%d", sum);
}