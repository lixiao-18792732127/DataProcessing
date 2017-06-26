#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j, n, m, a, b, cur, arr1[101] = { 0 }, arr2[101][101];
	int que[10001], head;
	int tail = 0;
	printf("请输入矩阵的行和列->\n");
	scanf("%d %d", &n, &m);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (i == j)
			{
				arr2[i][j] = 0;
			}
			else
			{
				arr2[i][j] = 99999999;
			}
		}
	}
	for (i = 1; i <= m; i++)
	{
		scanf("%d %d", &a, &b);
		arr2[a][b] = 1;
		arr2[b][a] = 1;
	}
	head = 1;
	tail = 1;

	que[tail] = 1;
	tail++;
	arr1[1] = 1;

	while (head < tail)
	{
		cur = que[head];
		for (i = 1; i <= n; i++)
		{
			if (arr2[cur][i] == 1 && arr1[i] == 0)
			{
				que[tail] = i;
				tail++;
				arr1[i] = 1;
			}
			if (tail > n)
			{
				break;
			}
		}
		head++;
	}
	printf("进行广度优先搜索遍历之后的结果为->\n");
	for (i = 1; i < tail; i++)
	{
		printf("%d ", que[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}