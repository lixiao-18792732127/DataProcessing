//C����ʵ��������ϣ�����ȫ��Ϊһ��������
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
int arr1[10], arr2[10], n;
int sum = 0;
int dfs(int step)
{
	int i = 0;
	if (step == n + 1)
	{
		sum++;
		for (i = 1; i <= n; i++)
		{
			printf("%d", arr1[i]);
			
		}
		printf("\n");
		return sum;
	}
	for (i = 1; i <= n; i++)
	{
		arr1[step] = i;
		arr2[i] = 1;
		dfs(step + 1);
		arr2[i] = 0;
	}
	return sum;
}

int main()
{
	printf("������n�ĸ���->");
	scanf("%d", &n);
	printf("���еķ�ʽ�У�\n");
	int ret=dfs(1);
	printf("һ����%d�����еķ�ʽ��\n", ret);
	system("pause");
	return 0;
}