#include<cstdio>
int main()
{
	int n, m, d;
	//n: acmerѪ��
	//m: bossѪ��
	//d: ���е���Ŀ
	int boss[10000], acmer[10000];
	//boss��ʽ��, acmer��ʽ��
	int i;
	//�ƻغ���
	scanf("%d%d%d", &n, &m, &d);
	for (i = 0; i < d; i++)
		scanf("%d", &boss[i]);
	for (i = 0; i < d; i++)
		scanf("%d", &acmer[i]);
	//��������
	for (i = 0; i < n; i++)
	{
		if (boss[i] >= 0)//boss����
		{
			if (acmer[i] > 0)//acmer����
			{
				if (acmer[i] < boss[i])//acmer����ϵ�� < boss����ϵ��
					n -= boss[i];//acmer��Ѫ
				else if (acmer[i]> boss[i])//acmer����ϵ�� > boss����ϵ��
					m -= acmer[i];//boss��Ѫ
			}
			else if (-acmer[i] < boss[i])//acmer���� && acmer����ϵ�� < boss����ϵ��
				n -= boss[i];//acmer��Ѫ
		}
		else//boss����
		{
			if (acmer[i] > 0)//acmer����
			{
				if (acmer[i] > -boss[i])//acmer����ϵ�� > boss����ϵ��
					m -= acmer[i];//boss��Ѫ
			}
		}
		if (n <= 0 || m <= 0)//����һ����Ѫ�� 0
			break;//����ս��
	}
	if (n <= 0)//acmer��Ѫ�� 0
		printf("boss");//bossӮ
	else if (m <= 0)//boss��Ѫ�� 0
		printf("acmer");//acmerӮ
	else                //˫����δ��Ѫ�� 0
		printf("impossible");//˫����δӮ
	return 0;
}