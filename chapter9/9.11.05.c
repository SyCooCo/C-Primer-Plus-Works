#define _CRT_SECURE_NO_WARNINGS 1
//编写并测试一个函数larger_of()，该函数把两个double类型变量的值替换为较大的值。
//例如，largere_of(x, y)会把x和y中较大的值重新赋给两个变量。

#include <stdio.h>

void larger_of(double * a, double * b);

int main()
{
	double a, b;
	scanf("%lf %lf", &a, &b);
	larger_of(&a, &b);
	printf("%g %g", a, b);
	return 0;
}

void larger_of(double * a, double * b)
{
	*a = *a > *b ? *a : *b;
	*b = *a > *b ? *a : *b;
}