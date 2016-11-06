#include<cstdio>
#include<cmath>
#define PI 3.1415926
int main()
{
	float s, A, v, t, r;
	float x, y;
	scanf("%f%f%f%f%f", &s, &A, &v, &t, &r);
	if (v*sin(A / 180 * PI)*t - 5 * t*t > 0)
	{
		y = v*sin(A / 180 * PI)*t - 5 * t*t;
		x = s - v*cos(A / 180 * PI)*t;
	}
	else
	{
		y = 0;
		t = 2 * v*sin(A / 180 * PI) / 10;
		x = s - v*cos(A / 180 * PI)*t;
	}
	if (x*x + y*y <= r*r)
		printf("nice!");
	else
		printf("T^T");

	return 0;
}