//���� QQ �š�������

//�տ�ʼ�⴮���ǡ� 6 3 1 7 5 8 9 2 4��������ɾ�� 6 ���� 3 �ŵ�
//�⴮����ĩβ���⴮������Ϊ�� 1 7 5 8 9 2 4 3����������ɾ�� 1 ���� 7 �ŵ�ĩβ��������Ϊ
//�� 5 8 9 2 4 3 7������ɾ�� 5 ���� 8 �ŵ�ĩβ���� 9 2 4 3 7 8����ɾ�� 9 ���� 2 �ŵ�ĩβ���� 4 3 7
//8 2����ɾ�� 4 ���� 3 �ŵ�ĩβ���� 7 8 2 3����ɾ�� 7 ���� 8 �ŵ�ĩβ���� 2 3 8����ɾ�� 2 ����
//3 �ŵ�ĩβ���� 8 3����ɾ�� 8 ���� 3 �ŵ�ĩβ���� 3�������ɾ�� 3����˱�ɾ����˳����
//�� 6 1 5 9 4 7 2 8 3����


//ʹ�ýṹ����ʵ��
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>

struct queue
{
	int data[100];//�����洢����
	int head;//����ͷ��
	int tail;//����β��
};

int Decrypt()
{
	struct queue q;
	int i;
	q.head = 1;
	q.tail = 1;
	for (i = 1; i <= 9; i++)
	{
		//������в���9����
		scanf("%d", &q.data[q.tail]);
		q.tail++;
	}
	printf("qq�Ž�������֮��Ϊ��");
	while (q.head < q.tail)//�����в�Ϊ��ʱ
	{
		//��ӡ�����ײ����ҽ����ײ�����
		printf("%d ", q.data[q.head]);//q��data��ͷ��
		q.head++;

		//���¶��׵�������ӵ���β
		q.data[q.tail] = q.data[q.head];
		q.tail++;
		//�ٽ����׳���
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