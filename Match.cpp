//��n�����ƴ����A+B=C�ĵ�ʽ
//ʽ�е�A��B��C�����û���ƴ������
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>

int Match(int n)
{
	int num = 0;
	int f[10] = { 6, 2, 5, 5, 4, 5, 6, 3, 7, 6 };//ö�ٳ�ƴ��0-9��Ҫ�Ļ����ĸ���
	while (n / 10 != 0)//n/10������0��˵������Ϊ��λ������ȡ��ÿһλ������Ļ����ĸ��������ۼӵ�sum��
	{
		num += f[n % 10];
		n = n / 10;//ȥ��ĩβ������
	}
	//������������һ����һλ��
	num += f[n];
	return num;//����num��ֵ
}
int main()
{
	int a, b, c, m, i, sum = 0;
	printf("����������ĸ���->");
	scanf("%d", &m);//��ȡ�����ܸ���
	for (a = 0; a <= 1111; a++)
	{
		for (b = 0; b <= 1111; b++)
		{
			c = a + b;
			if (Match(a) + Match(b) + Match(c) == m - 4)//��A+B+C�Ļ����ĸ��������ܵĻ����ĸ�����ȥ4��ʱ�򣨼�ȥ4��ԭ������Ϊ�Ⱥ�Ҳ��Ҫ�ĸ�������
			{
				printf("%d+%d=%d\n", a, b, c);//��ӡ����ʽ
				sum++;
			}
		}
	}
	printf("һ������ƴ��%d����ͬ�ĵ�ʽ\n", sum);//��������ϵ�ʽ�ĸ���
	system("pause");
	return 0;
}