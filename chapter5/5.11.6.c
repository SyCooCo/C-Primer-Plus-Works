#define _CRT_SECURE_NO_WARNINGS 1
//�޸ı����ϰ5�ĳ���ʹ���ܼ���������ƽ����
//��������Ϊ��1��׬$1����2��׬$4��������׬$9���Դ����ƣ��⿴�����ܲ�����
//Cû��ƽ�����������ǿ�����n * n����ʾn��ƽ����

#include <stdio.h>

int main()
{
	int count, sum, n, s_c;
	count = 0;
	sum = 0;
	printf("how many days?\n");
	scanf("%d", &n);
	while (count++ < n)
	{
		s_c = count * count;
		sum = sum + s_c;
	}
	printf("sum = %d\n", sum);
	return 0;
}