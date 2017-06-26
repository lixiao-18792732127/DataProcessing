//#define _CRT_SECURE_NO_DEPRECATE
//#include<stdio.h>
//#include<stdlib.h>
//int arr1[101], sum, n, arr2[101][101];
//void dfs(int cur)
//{
//	int i;
//	printf("%d ", cur);//打印出深度优先遍历图的每一个点
//	sum++;
//	if (sum == n)
//	{
//		return;
//	}
//	for (i = 1; i <= n; i++)
//	{
//		if (arr2[cur][i] == 1 && arr1[i] == 0)
//		{
//			arr1[i] = 1;
//			dfs(i);
//		}
//	}
//	return;
//}
//int main()
//{
//	int i, j, m, a, b;
//	printf("请输入矩阵的行和列->\n");
//	scanf("%d %d", &n, &m);//定义矩阵的行和列
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= n; j++)
//		{
//			if (i == j)
//			{
//				arr2[i][j] = 0;
//			}
//			else
//			{
//				arr2[i][j] = 99999999;
//			}
//		}
//	}
//	printf("请输入无向图的边界->\n");
//	for (i = 1; i <= n; i++)
//	{
//		scanf("%d %d", &a, &b);
//		arr2[a][b] = 1;
//		arr2[b][a] = 1;
//	}
//	arr1[1] = 1;
//	printf("深度优先遍历图的结果是：\n");
//	dfs(1);
//	printf("\n");
//	system("pause");
//	return 0;
//}