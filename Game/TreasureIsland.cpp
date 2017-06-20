#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
int a[51][51];
int arr[51][51], n, m, sum;

void dfs(int x, int y, int color)
{
	int next[4][2] = { { 0, 1 }, { 1, 0 }, { 0, -1 }, { -1, 0 } };
	int k, tx, ty;
	a[x][y] = color;

	for (k = 0; k <= 3; k++)
	{
		tx = x + next[k][0];
		ty = x + next[k][1];
		if (tx<1 || tx>n || ty<1 || ty>m)
		{
			continue;
		}
		if (a[tx][ty] > 0 && arr[tx][ty] == 0)
		{
			sum++;
			arr[tx][ty] = 1;
			dfs(tx, ty, color);
		}
	}
	return;
}
int main()
{
	int i = 0, j = 0;
	int startx, starty;
	scanf("%d %d %d %d", &n, &m, &startx, &starty);

	for (i = 1; i <= n; i++)
	{
		for (i = 1; j <= n; j++)
		{
			scanf("%d", &a[i][j]);
		}
		arr[startx][starty] = 1;
	}
	sum = 1;
	dfs(startx, starty, -1);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}