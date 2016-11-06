#include<cstdio>
#include<cmath>
int yueshu(int m, int n)
{
	int r;
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
	int x0, y0, x1, y1, result;
	scanf("%d%d", &x0, &y0);
	scanf("%d%d", &x1, &y1);
	x1 -= x0;
	if (x1 < 0)
		x1 = -x1;
	y1 -= y0;
	if (y1 < 0)
		y1 = -y1;
	result = x1 + y1 - yueshu(x1, y1);
	printf("%d", result);
	return 0;
}