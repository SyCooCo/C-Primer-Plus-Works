#define _CRT_SECURE_NO_WARNINGS 1
//ʹ��Ƕ��ѭ����������ĸ�ʽ��ӡ��ĸ��
/*
A
BC
DEF
GHIJ
KLMNO
PQRSTU
*/
//������ϵͳ��ʹ��������˳�����Ĵ��룬�������ϰ3�ķ��������

#include <stdio.h>

int main()
{
	char l = 'A';
	int i, j;
	for (i = 1; i < 7; i++)
	{
		for (j = 1; j <= i; j++, l++)
			printf("%c", l);
		printf("\n");
	}
	return 0;
}