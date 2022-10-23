#define _CRT_SECURE_NO_WARNINGS 1
//设计一个函数min(x, y)，返回两个double类型值的较小值。在一个简单的驱动程序中测试该函数。

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