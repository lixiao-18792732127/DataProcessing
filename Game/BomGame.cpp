//C����ʵ��ը����
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
void BomGame()
{
	char arr[20][21];//����һ����ά���飬�䵱ը���ĵ�ͼ��������
	int i, j, sum, map = 0;
	int p, q, x, y, n, m;
	printf("�������к���->");
	scanf("%d %d", &n, &m);
	for (i = 0; i <= n-1; i++)//����n���ַ�
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
	printf("��ը��������(%d,%d),����������%d������\n", p, q, map);
	getchar();
	getchar();
}
int main()
{
	BomGame();
	system("pause");
	return 0;
}