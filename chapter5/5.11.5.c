#define _CRT_SECURE_NO_WARNINGS 1
//�޸ĳ���addemup.c�������嵥5.13�����������Ϊaddeup.c�Ǽ���20����׬����Ǯ�ĳ���
//�������һ��׬$1���ڶ���׬$2��������׬$3���Դ����ƣ����޸ĳ���ʹ��������û�������
//�����û�����������м��㣨�����ö����һ������������20����

#include <stdio.h>

int main()
{
	int count, sum, n;
	count = 0;
	sum = 0;
	printf("how many days?\n");
	scanf("%d", &n);
	while (count++ < n)
		sum = sum + count;
	printf("sum = %d\n", sum);
	return 0;
}