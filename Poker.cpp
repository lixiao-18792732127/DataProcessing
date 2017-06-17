//��һ���˿���ƽ���ֳ����ݣ�ÿ����һ�ݡ�A���ó����еĵ�һ���˿��Ʒ������ϣ�
//Ȼ��BҲ�ó����еĵ�һ���˿��ƣ�������A�մ�����˿��Ƶ����棬����������
//�˽�����ơ�����ʱ�����ĳ�˴������������ĳ���Ƶ�������ͬ�����ɽ�����
//��ͬ���Ƽ����м����е���ȫ��ȡ�ߣ������ηŵ��Լ������Ƶ�ĩβ��������һ
//�����е���ȫ������ʱ����Ϸ���������ֻ�ʤ��
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>

struct queue//������еĽṹ��
{
	int data[1000];
	int head;
	int tail;
};
struct stack//����ջ�Ľṹ��
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
		arr[i] = 0;//��������г�ʼ����ȫ��Ϊ0
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
		printf("AӮ\n");
		printf("A��ǰ���е����ǣ�");
		for (i = q1.head; i <= q1.tail - 1; i++)
		{
			printf(" %d", q1.data[i]);
		}
		if (s.top > 0)
		{
			printf("\n���ϵ����ǣ�");
			for (i = 1; i <= s.top; i++)
			{
				printf(" %d", s.data[i]);
			}
			printf("\n");
		}
		else
		{
			printf("\n�����Ѿ�û������");
		}
	}
	else
	{
		printf("BӮ\n");
		printf("B��ǰ���е����ǣ�");
		for (i = q2.head; i <= q2.tail - 1; i++)
		{
			printf(" %d", q2.data[i]);
		}
		if (s.top > 0)
		{
			printf("\n���ϵ����ǣ�");
			for (i = 1; i <= s.top; i++)
			{
				printf(" %d", s.data[i]);
			}
			printf("\n");
		}
		else
		{
			printf("\n�����Ѿ�û������");
		}
	}
}
int main()
{
	Poker();
	system("pause");
	return 0;
}