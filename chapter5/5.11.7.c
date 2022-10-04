#define _CRT_SECURE_NO_WARNINGS 1
//编写一个程序，提示用户输入一个double类型的数，并打印该数的立方值。
//main()函数要把用户输入的值传递给该函数。

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