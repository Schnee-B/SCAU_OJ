#include<cstdio>
int main()
{
	int n, m, d;
	//n: acmer血量
	//m: boss血量
	//d: 出招的数目
	int boss[10000], acmer[10000];
	//boss招式表, acmer招式表
	int i;
	//计回合用
	scanf("%d%d%d", &n, &m, &d);
	for (i = 0; i < d; i++)
		scanf("%d", &boss[i]);
	for (i = 0; i < d; i++)
		scanf("%d", &acmer[i]);
	//输入数据
	for (i = 0; i < n; i++)
	{
		if (boss[i] >= 0)//boss攻击
		{
			if (acmer[i] > 0)//acmer攻击
			{
				if (acmer[i] < boss[i])//acmer攻击系数 < boss攻击系数
					n -= boss[i];//acmer损血
				else if (acmer[i]> boss[i])//acmer攻击系数 > boss攻击系数
					m -= acmer[i];//boss损血
			}
			else if (-acmer[i] < boss[i])//acmer防守 && acmer防守系数 < boss攻击系数
				n -= boss[i];//acmer损血
		}
		else//boss防守
		{
			if (acmer[i] > 0)//acmer攻击
			{
				if (acmer[i] > -boss[i])//acmer攻击系数 > boss防守系数
					m -= acmer[i];//boss损血
			}
		}
		if (n <= 0 || m <= 0)//任意一方损血至 0
			break;//结束战斗
	}
	if (n <= 0)//acmer损血至 0
		printf("boss");//boss赢
	else if (m <= 0)//boss损血至 0
		printf("acmer");//acmer赢
	else                //双方均未损血至 0
		printf("impossible");//双方均未赢
	return 0;
}