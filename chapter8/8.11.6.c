#define _CRT_SECURE_NO_WARNINGS 1
//�޸ĳ����嵥8.8�е�get_first()�������øú������ض�ȡ�ĵ�һ���ǿհ��ַ�������һ���򵥵ĳ����в��ԡ�

#include <stdio.h>

char get_first(void);

int main()
{
	char ch;
	ch = get_first();
	printf("oo:%c", ch);
	return 0;
}

char get_first(void)
{
	char ch;

	while ((ch = getchar()) <= ' ')
		continue;
	while (getchar() != '\n')
		continue;
	return ch;
}