//C语言模拟实现链表
//在一组有序的数据中插入一个数字，使得该数据仍然有序
//该模拟链表不能在最前面插入数据，并且不能在最后面插入数据
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>


void ListAdd()
{
	int data[101], right[101];
	int i, n, t, len;
	printf("请输入数据的个数-> ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)//循环读入n个数
	{
		scanf("%d", &data[i]);//将读入的数据存入data里面
	}
	len = n;
	for (i = 0; i <= n; i++)//初始化数组right
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
	//直接在数组data的末尾增加一个数
	len++;
	scanf("%d", &data[len]);
	t = 1;
	while (t != 0)
	{
		if (data[right[t]] > data[len])//如果当前节点的下一个数字大于要插入的数字，则直接插入到中间数字
		{
			right[len] = right[t];//新插入的数的下一个节点标号等于当前节点的下一个编号
			right[t] = len;//当前节点的下一个编号就是新插入节点的编号
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