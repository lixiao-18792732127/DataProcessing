//�� xyzyx����һ�������ַ�������ν�����ַ�
//;������ָ������������ͬ���ַ����У��硰ϯ��ϯ����������ǡ����� aha���͡� ahaha�����ǻ�
//�ģ����� ahah�����ǻ��ġ�ͨ��ջ������ݽṹ���ǽ��������ж�һ���ַ����Ƿ�Ϊ���ġ�
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Palindrome(char * arr1, char *arr2)
{
	int i, len, mid, next, top;
	printf("�����룺\n");
	gets(arr1);
	len = strlen(arr1);
	mid = len / 2 - 1;

	top = 0;
	for (i = 0; i <= mid; i++)
	{
		arr2[++top] = arr1[i];
	}

	if (len%2 == 0)
	{
		next = mid + 1;
	}
	else
	{
		next = mid + 2;
	}
	for (i = next; i <= len - 1; i++)
	{
		if (arr1[i] != arr2[top])
		{
			break;
		}
		top--;
	}

	if (top == 0)
	{
		printf("%s�ǻ�������\n",arr1);
	}
	else
	{
		printf("%s���ǻ�����\n", arr1);
	}
}

int main()
{
	char arr1[101];
	char arr2[101];
	Palindrome(arr1, arr2);
	system("pause");
	return 0;
}
