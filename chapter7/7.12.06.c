#define _CRT_SECURE_NO_WARNINGS 1
//��д�����ȡ���룬����#ֹͣ������ei���ֵĴ�����
//ע��
//�ó���Ҫ��סǰһ���ַ��͵�ǰ�ַ����á�Receive your eieio award�����������������ԡ�

#include <stdio.h>

int main()
{
	char ch1, ch2 = 'a';
	int n = 0;
	while ((ch1 = getchar()) != '#')
	{
		if (ch1 == 'i' && ch2 == 'e')
			n++;
		ch2 = ch1;
	}
	printf("n=%d", n);
	return 0;
}