#include<cstdio>
int main()
{
	int b[2], t;
	char s[50], ch;
	scanf("%d\n", &t);
	while (t--)
	{
		b[0] = b[1] = 0;
		scanf("%c", &ch);
		while (ch != '\n')
		{
			if (ch == 'F') b[0]++;
			if (ch == 'M') b[1]++;
			scanf("%c", &ch);
		}
		if (b[0] == b[1])
			printf("LOOP\n");
		else
			printf("NO LOOP\n");
	}
}