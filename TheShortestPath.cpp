#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int e[10][10], k, i, j, n, m, t1, t2, t3;
	int inf = 99999999;
	printf("�����붥����n�ͱ���m->\n");
	scanf("%d %d", &n, &m);

	//��ʼ��
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j<= n; j++)
		{
			if (i == j)
			{
				e[i][j] = 0;
			}
			else
			{
				e[i][j] = inf;
			}
		}
	}

	printf("�����붥��t1������t2���Լ�t1��t2֮��ľ���->\n");
	for (i = 1; i <= m; i++)
	{
		scanf("%d %d %d", &t1, &t2, &t3);
		e[t1][t2] = t3;;
	}

	for (k = 1; k <= n; k++)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (e[i][j] > e[i][k])
				{
					e[i][j] = e[i][k] + e[k][j];
				}
			}
		}
	}
	printf("     ");
	for (i = 1; i <= n; i++)
	{
		printf("%5d", i);
	}
	printf("\n");
	for (i = 1; i <= n; i++)
	{
		printf("%5d", i);
		for (j = 1; j <= n; j++)
		{
			printf("%5d", e[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}