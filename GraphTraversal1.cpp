//#define _CRT_SECURE_NO_DEPRECATE
//#include<stdio.h>
//#include<stdlib.h>
//int arr1[101], sum, n, arr2[101][101];
//void dfs(int cur)
//{
//	int i;
//	printf("%d ", cur);//��ӡ��������ȱ���ͼ��ÿһ����
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
//	printf("�����������к���->\n");
//	scanf("%d %d", &n, &m);//���������к���
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
//	printf("����������ͼ�ı߽�->\n");
//	for (i = 1; i <= n; i++)
//	{
//		scanf("%d %d", &a, &b);
//		arr2[a][b] = 1;
//		arr2[b][a] = 1;
//	}
//	arr1[1] = 1;
//	printf("������ȱ���ͼ�Ľ���ǣ�\n");
//	dfs(1);
//	printf("\n");
//	system("pause");
//	return 0;
//}