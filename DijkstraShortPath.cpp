#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>

int main()
{

	int e[10][10], dis[10], book[10], i, j, n, m, t1, t2, t3, u, v, min;
	int inf = 99999999;
	printf("请输入顶点n和边数m->\n");
	scanf("%d %d", &n, &m);
	//初始化
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
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
	printf("请输入顶点t1,t2以及两个顶点之间的权值t3->\n");
	//读入边
	for (i = 1; i <= m; i++)
	{
		scanf("%d %d %d", &t1, &t2, &t3);
		e[t1][t2] = t3;
	}

	for (i = 1; i <= n; i++)
	{
		dis[i] = e[1][i];
	}
	for (i = 1; i <= n; i++)
	{
		book[i] = 0;
	}
	book[1] = 1;

	for (i = 1; i <= n - 1; i++)
	{
		min = inf;
		for (j = 1; j <= n; j++)
		{
			if (book[j] == 0 && dis[j] < min)
			{
				min = dis[j];
				u = j;
			}
		}
		book[u] = 1;
		for (v = 1; v <= n; v++)
		{
			if (e[u][v] < inf)
			{
				if (dis[v]>dis[u] + e[u][v])
				{
					dis[v] = dis[u] + e[u][v];
				}
			}
		}
	}
	printf("顶点1到各个顶点的距离分别为：->\n");
	for (i = 1; i <= n; i++)
	{
		printf("%d  ", dis[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}