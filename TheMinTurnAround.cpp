#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
struct Note
{
	int x;
	int s;
};

int main()
{
	struct Note que[2501];
	int e[51][51] = { 0 }, book[51] = { 0 };
	int head, tail;
	int i, j, n, m, a, b, cur, start, end, flag = 0;
	printf("��������еĸ���->\n");
	scanf("%d", &n);
	printf("����������м���·�ĸ���->\n");
	scanf("%d", &m);
	printf("��������ʼ�ص�->\n");
	scanf("%d", &start);
	printf("����������ص�->\n");
	scanf("%d", &end);
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
				e[i][j] = 99999999;
			}
		}
	}
	printf("����������м����·->\n");
	for (i = 1; i <= m; i++)
	{
		scanf("%d %d", &a, &b);
		e[a][b] = 1; 
		e[b][a] = 1;
	}
	head = 1;
	tail = 1;
	que[tail].x = start;
	que[tail].s = 0;
	tail++;
	book[1] = start;

	while (head < tail)
	{
		cur = que[head].x;
		for (j = 1; j <= n; j++)
		{
			if (e[cur][j] != 99999999 && book[j] == 0)
			{
				que[tail].x = j;
				que[tail].s = que[head].s + 1;
				tail++;
				book[j] = 1;
			}
			if (que[tail].x == end)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
		{
			break;
		}
		head++;
	}
	printf("��%d�ص㵽%d�ص�ת���ٻ�����", start, end);
	printf("%d", que[tail - 1].s);
	printf("\n");
	system("pause");
	return 0;
}