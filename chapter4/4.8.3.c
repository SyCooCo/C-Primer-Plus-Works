#define _CRT_SECURE_NO_WARNINGS 1
//��дһ�����򣬶�ȡһ����������������С�����������ӡ��Ȼ����ָ����������ӡ��
//������ĸ�ʽ���������ϵͳ��ͬ��ָ����������ʾ��λ�����ܲ�ͬ����
/*
a.The input is 21.3 or 2.1e+001.
b.The input is +21.290 or 2.129E+001
*/

#include <stdio.h>

int main()
{
	float fl;
	printf("������һ����������");
	scanf("%f", &fl);
	printf("The input is %.1f or %.1e.\n", fl , fl);
	printf("The input is %+.3f or %.3E.", fl , fl);
	return 0;
}