#define _CRT_SECURE_NO_WARNINGS 1
//ʹ��if else����дһ�������ȡ���룬����#ֹͣ��
//�ø�̾���滻��ţ���������̾���滻ԭ���ĸ�̾�ţ���󱨸�����˶��ٴ��滻��

#include <stdio.h>

int main()
{
	char ch, c[255];
	int n, i, j;
	n = i = 0;

	while ((ch = getchar()) != '#')
	{
		if (ch == '.')
		{
			ch = '!';
			n++;
		}
		else if (ch == '!')
		{
			c[i++] = ch;
			n++;
		}
		c[i++] = ch;
	}
	for (j = 0; j < i; j++)
		printf("%c", c[j]);
	printf("\nn=%d", n);
	return 0;
}