#define _CRT_SECURE_NO_WARNINGS 1
//���һ������ͳ���ڶ����ļ���β֮ǰ��ȡ���ַ�����

#include <stdio.h>

int main()
{
	int n, ch;
	n = 0;
	while ((ch = getchar()) != EOF)
		n++;
	printf("%d", n);
	return 0;
}