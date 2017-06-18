//用n根火柴，拼出如A+B=C的等式
//式中的A，B，C均是用火柴棍拼出来的
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>

int Match(int n)
{
	int num = 0;
	int f[10] = { 6, 2, 5, 5, 4, 5, 6, 3, 7, 6 };//枚举出拼出0-9需要的火柴棍的根数
	while (n / 10 != 0)//n/10不等于0，说明至少为两位数，获取到每一位数上面的火柴棍的根数，并累加到sum上
	{
		num += f[n % 10];
		n = n / 10;//去掉末尾的数字
	}
	//最后出来的数字一定是一位数
	num += f[n];
	return num;//返回num的值
}
int main()
{
	int a, b, c, m, i, sum = 0;
	printf("请输入火柴棍的根数->");
	scanf("%d", &m);//获取火柴的总根数
	for (a = 0; a <= 1111; a++)
	{
		for (b = 0; b <= 1111; b++)
		{
			c = a + b;
			if (Match(a) + Match(b) + Match(c) == m - 4)//当A+B+C的火柴棍的根数等于总的火柴棍的根数减去4的时候（减去4的原因是因为等号也需要四根火柴棍）
			{
				printf("%d+%d=%d\n", a, b, c);//打印出等式
				sum++;
			}
		}
	}
	printf("一共可以拼出%d个不同的等式\n", sum);//计算出符合等式的个数
	system("pause");
	return 0;
}