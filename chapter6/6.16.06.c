#define _CRT_SECURE_NO_WARNINGS 1
//��дһ�������ӡһ�����ÿһ���д�ӡһ��������������ƽ����������������
//Ҫ���û�������������ޡ�ʹ��һ��forѭ����

#include <stdio.h>

int main()
{
	int ma, mi, i, j;
	printf("�����������ޣ�");
	scanf("%d %d", &ma, &mi);
	printf("\n      n  square   cubic\n");
	for (i = mi; i <= ma; i++)
		printf("%7d %7d %7d\n", i, i * i, i * i * i);
	return 0;
}