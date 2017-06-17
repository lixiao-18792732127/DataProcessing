//“ xyzyx”是一个回文字符串，所谓回文字符
//;串就是指正读反读均相同的字符序列，如“席主席”、“记书记”、“ aha”和“ ahaha”均是回
//文，但“ ahah”不是回文。通过栈这个数据结构我们将很容易判断一个字符串是否为回文。
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Palindrome(char * arr1, char *arr2)
{
	int i, len, mid, next, top;
	printf("请输入：\n");
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
		printf("%s是回文数！\n",arr1);
	}
	else
	{
		printf("%s不是回文数\n", arr1);
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
