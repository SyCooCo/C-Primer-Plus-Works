#define _CRT_SECURE_NO_WARNINGS 1
//��дһ��������ʾ�û����������գ�Ȼ���ԡ������ա��ĸ�ʽ��ӡ������

#include <stdio.h>

int main()
{
	char f_n[500];
	char n[1000];
	printf("����������գ�");
	scanf("%s", f_n);
	printf("�������������");
	scanf("%s", n);
	printf("%s%s����������֣�", f_n, n);
	return 0;
}