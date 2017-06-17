//将一副扑克牌平均分成两份，每人拿一份。A先拿出手中的第一张扑克牌放在桌上，
//然后B也拿出手中的第一张扑克牌，并放在A刚打出的扑克牌的上面，就像这样两
//人交替出牌。出牌时，如果某人打出的牌与桌上某张牌的牌面相同，即可将两张
//相同的牌及其中间所夹的牌全部取走，并依次放到自己手中牌的末尾。当任意一
//人手中的牌全部出完时，游戏结束，对手获胜。
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>

struct queue//定义队列的结构体
{
	int data[1000];
	int head;
	int tail;
};
struct stack//定义栈的结构体
{
	int data[10];
	int top;
};

void Poker()
{
	struct queue q1;
	struct queue q2;
	struct stack s;
	int arr[10];
	int i, t;
	q1.head = 1; q1.tail = 1;
	q2.head = 1; q2.tail = 1;
	s.top = 0;
	for (i = 1; i <= 9; i++)
	{
		arr[i] = 0;//对数组进行初始化，全部为0
	}

	for (i = 1; i <= 6; i++)
	{
		scanf("%d", &q1.data[q1.tail]);
		q1.tail++;
	}
	for (i = 1; i <= 6; i++)
	{
		scanf("%d", &q2.data[q2.tail]);
		q2.tail++;
	}

	while (q1.head < q1.tail&&q2.head < q2.tail)
	{
		t = q1.data[q1.head];
		if (arr[t] == 0)
		{
			q1.head++;
			s.top++;
			s.data[s.top] = t;
			arr[t] = 1;
		}
		else
		{
			q1.head++;
			q1.data[q1.tail] = t;
			q1.tail++;
			while (s.data[s.top] != t)
			{
				arr[s.data[s.top]] = 0;
				q1.data[q1.tail] = s.data[s.top];
				q1.tail++;
				s.top--;
			}
		}
		t = q2.data[q2.head];

		if (arr[t] == 0)
		{
			q2.head++;
			s.top++;
			s.data[s.top] = t;
			arr[t] = 1;
		}
		else
		{
			q2.head++;
			q2.data[q2.tail] = t;
			q2.tail++;
			while (s.data[s.top] != t)
			{
				arr[s.data[s.top]] = 0;
				q2.data[q2.tail] = s.data[s.top];
				q2.tail++;
				s.top--;
			}
		}
	}
	if (q2.head == q2.tail)
	{
		printf("A赢\n");
		printf("A当前手中的牌是：");
		for (i = q1.head; i <= q1.tail - 1; i++)
		{
			printf(" %d", q1.data[i]);
		}
		if (s.top > 0)
		{
			printf("\n桌上的牌是：");
			for (i = 1; i <= s.top; i++)
			{
				printf(" %d", s.data[i]);
			}
			printf("\n");
		}
		else
		{
			printf("\n桌上已经没有牌了");
		}
	}
	else
	{
		printf("B赢\n");
		printf("B当前手中的牌是：");
		for (i = q2.head; i <= q2.tail - 1; i++)
		{
			printf(" %d", q2.data[i]);
		}
		if (s.top > 0)
		{
			printf("\n桌上的牌是：");
			for (i = 1; i <= s.top; i++)
			{
				printf(" %d", s.data[i]);
			}
			printf("\n");
		}
		else
		{
			printf("\n桌上已经没有牌了");
		}
	}
}
int main()
{
	Poker();
	system("pause");
	return 0;
}