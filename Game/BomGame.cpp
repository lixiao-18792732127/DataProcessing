//C语言实现炸弹人
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
void BomGame()
{
	char arr[20][21];//定义一个二维数组，充当炸弹的地图的最大面积
	int i, j, sum, map = 0;
	int p, q, x, y, n, m;
	printf("请输入行和列->");
	scanf("%d %d", &n, &m);
	for (i = 0; i <= n-1; i++)//读入n行字符
	{
		scanf("%s", arr[i]);
	}
	for (i = 0; i <= n - 1; i++)
	{
		for (j = 0; i <= m - 1; j++)
		{
			if (arr[i][j] == '.')
			{
				sum = 0;

				x = i; 
				y = j;
				while (arr[x][y] != '#')
				{
					if (arr[x][y] == 'G')
					{
						sum++;
					}
					x--;
				}

				x = i;
				y = j;
				while (arr[x][y] != '#')
				{
					if (arr[x][y] == 'G')
					{
						sum++;						
					}
					x++;
				}

				x = i;
				y = j;
				while (arr[x][y] != '#')
				{
					if (arr[x][y] == 'G')
					{
						sum++;
					}
					y--;
				}

				x = i;
				y = j;
				while (arr[x][y] != '#')
				{
					if (arr[x][y] == 'G')
					{
						sum++;
					}
					y++;
				}

				if (sum > map)
				{
					map = sum;
					p = i; 
					q = j;
				}
			}
		}
	}
	printf("将炸弹放置在(%d,%d),最多可以消灭%d个敌人\n", p, q, map);
	getchar();
	getchar();
}
int main()
{
	BomGame();
	system("pause");
	return 0;
}