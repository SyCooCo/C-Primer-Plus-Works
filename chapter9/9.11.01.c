#define _CRT_SECURE_NO_WARNINGS 1
//���һ������min(x, y)����������double����ֵ�Ľ�Сֵ����һ���򵥵����������в��Ըú�����

#include <stdio.h>

double min(double x, double y);

int main()
{
	double a, b,l;
	printf("input two number:");
	scanf("%lf %lf", &a, &b);
	l = min(a, b);
	printf("The little one is %g", l);
	return 0;
}

double min(double x, double y)
{
	double r;
	r = x > y ? y : x;
	return r;
}