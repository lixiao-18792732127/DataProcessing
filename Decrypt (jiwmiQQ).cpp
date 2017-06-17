//解密 QQ 号——队列

//刚开始这串数是“ 6 3 1 7 5 8 9 2 4”，首先删除 6 并将 3 放到
//这串数的末尾，这串数更新为“ 1 7 5 8 9 2 4 3”。接下来删除 1 并将 7 放到末尾，即更新为
//“ 5 8 9 2 4 3 7”。再删除 5 并将 8 放到末尾即“ 9 2 4 3 7 8”，删除 9 并将 2 放到末尾即“ 4 3 7
//8 2”，删除 4 并将 3 放到末尾即“ 7 8 2 3”，删除 7 并将 8 放到末尾即“ 2 3 8”，删除 2 并将
//3 放到末尾即“ 8 3”，删除 8 并将 3 放到末尾即“ 3”，最后删除 3。因此被删除的顺序是
//“ 6 1 5 9 4 7 2 8 3”，


//使用结构体来实现
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>

struct queue
{
	int data[100];//用来存储内容
	int head;//定义头部
	int tail;//定义尾部
};

int Decrypt()
{
	struct queue q;
	int i;
	q.head = 1;
	q.tail = 1;
	for (i = 1; i <= 9; i++)
	{
		//向队列中插入9个数
		scanf("%d", &q.data[q.tail]);
		q.tail++;
	}
	printf("qq号解密完了之后为：");
	while (q.head < q.tail)//当队列不为空时
	{
		//打印队列首部并且将对首部出队
		printf("%d ", q.data[q.head]);//q的data的头部
		q.head++;

		//将新队首的数字添加到队尾
		q.data[q.tail] = q.data[q.head];
		q.tail++;
		//再将队首出队
		q.head++;
	}
	getchar();
	getchar();
	return 0;
}
int main()
{
	Decrypt();
	system("pause");
	return 0;
}