//C����ģ��ʵ������
//��һ������������в���һ�����֣�ʹ�ø�������Ȼ����
//��ģ������������ǰ��������ݣ����Ҳ�����������������
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>


void ListAdd()
{
	int data[101], right[101];
	int i, n, t, len;
	printf("���������ݵĸ���-> ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)//ѭ������n����
	{
		scanf("%d", &data[i]);//����������ݴ���data����
	}
	len = n;
	for (i = 0; i <= n; i++)//��ʼ������right
	{
		if (i != n)
		{
			right[i] = i + 1;
		}
		else
		{
			right[i] = 0;
		}
	}
	//ֱ��������data��ĩβ����һ����
	len++;
	scanf("%d", &data[len]);
	t = 1;
	while (t != 0)
	{
		if (data[right[t]] > data[len])//�����ǰ�ڵ����һ�����ִ���Ҫ��������֣���ֱ�Ӳ��뵽�м�����
		{
			right[len] = right[t];//�²����������һ���ڵ��ŵ��ڵ�ǰ�ڵ����һ�����
			right[t] = len;//��ǰ�ڵ����һ����ž����²���ڵ�ı��
			break;
		}
		t = right[t];
	}
	t = 1;
	while (t != 0)
	{
		printf("%d ", data[t]);
		//printf(" ");
		t = right[t];
	}
}
int main()
{
	
	ListAdd();
	system("pause");
	return 0;
}