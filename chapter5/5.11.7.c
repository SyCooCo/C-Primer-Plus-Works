#define _CRT_SECURE_NO_WARNINGS 1
//��дһ��������ʾ�û�����һ��double���͵���������ӡ����������ֵ��
//main()����Ҫ���û������ֵ���ݸ��ú�����

#include <stdio.h>

double cube(double x);

int main()
{
	double n, n_c;
	printf("input a double float:\nn = ");
	scanf("%lf", &n);
	n_c = cube(n);
	printf("%f^3 = %f", n, n_c);
	return 0;
}

double cube(double x)
{
	double y = x * x * x;
	return y;
}