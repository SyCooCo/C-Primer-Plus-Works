#define _CRT_SECURE_NO_WARNINGS 1
//��дһ�������ȡ���룬����#�ַ�ֹͣ��
//����Ҫ��ӡÿ��������ַ��Լ���Ӧ��ASCII�루ʮ���ƣ���
//ÿ�д�ӡ8�����ַ�-ASCII�롱��ϡ�
//���飺ʹ���ַ���������ģ�������%����ÿ8��ѭ������ʱ��ӡһ�����з���

#include <stdio.h>

int main()
{
	char ch;
	int cnum = 0;
	printf("input:\n");
	while ((ch = getchar()) != '#')
	{
		cnum++;
		printf("%5c-%-5d", ch, ch);
		if (cnum % 8 == 0)
			printf("\n");
	}
	return 0;
}