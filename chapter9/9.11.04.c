#define _CRT_SECURE_NO_WARNINGS 1
//两数的调和平均数这样计算：先得到两数的倒数，然后计算两个倒数的平均值，最后取计算结果的倒数。
//编写一个函数，接受两个double类型的参数，返回这两个参数的调和平均数。

#include <stdio.h>
double culc(double a, double b);

int main()
{
	double a, b;
	scanf("%lf %lf", &a, &b);
	printf("%g", culc(a, b));
	return 0;
}

double culc(double a, double b)
{
	double c;
	c = 1 / ((1 / a + 1 / b) / 2);
	return c;
}