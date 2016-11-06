#include<cstdio>
#include<cmath>
int main()
{
	int i = 1, N, R, T;
	float r;
	double PI = 3.1415926;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d%d", &N, &R);
		if (N < 3)
			r = N*R;
		else
			r = (R / sin(PI / N) + R);
		printf("Case %d: %.0f\n", i++, ceil(r));
	}
	return 0;
}