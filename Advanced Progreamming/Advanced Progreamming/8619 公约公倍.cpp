#include<cstdio>
long long yueshu(long long m, long long n)
{
	long long r;
	while (n)
	{
		r = m%n;
		m = n;
		n = r;
	}
	return m;
}
int main()
{
	long long a, b, c, d, e, f, a1, d1;
	long long temp;
	while (scanf("%lld%lld%lld%lld%lld%lld", &a, &b, &c, &d, &e, &f))
	{
		if (a == 0)
			break;
		a1 = yueshu(a, b);
		a1 = yueshu(a1, c);
		d1 = yueshu(d, e);
		temp = d*e / d1;
		d1 = yueshu(temp, f);
		temp = temp*f / d1;
		if (temp%a1 == 0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}