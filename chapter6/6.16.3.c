#define _CRT_SECURE_NO_WARNINGS 1
//ʹ��Ƕ��ѭ����������ĸ�ʽ��ӡ��ĸ��
/*
F
FE
FED
FEDC
FEDCB
FEDCBA
*/
//ע�⣺������ϵͳ��ʹ��ASCII������������˳�����Ĵ��룬
//���԰��ַ������ʼ��Ϊ��ĸ���е���ĸ��
/* char lets[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; */
//Ȼ��ʹ�������±�ѡ�񵥶�����ĸ������ lets[0] ��'A'���ȵȡ�

#include <stdio.h>

int main()
{
	int i;
	char l;
	for (i = 1; i < 7; i++)
	{
		for (l = 'F'; l > 'F' - i; l--)
			printf("%c", l);
		printf("\n");
	}
	return 0;
}