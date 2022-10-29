#define _CRT_SECURE_NO_WARNINGS 1
//使用递归函数重写编程练习8.

#include <stdio.h>
double power(double n, int p);

int main()
{
	double x, xpow;
	int exp;

	printf("Enter a number and the integer power");
	printf(" to which\nthe number will be raised. Enter q ");
	printf("to quit\n");
	while (scanf("%lf%d", &x, &exp) == 2)
	{
		xpow = power(x, exp);
		printf("%.3g to go the power %d is %.5g\n", x, exp, xpow);
		printf("Enter next pair of numbers or q to quit.\n");
	}
	printf("Hope you enjoyed this power trip -- bye!\n");

	return 0;
}

double power(double n, int p)
{
	double pow = 1;

	if (!n && p)
		pow = 0;
	else if (p>0)
	{
		pow = power(n, --p);
		return pow * n;
	}
	else if (p < 0)
	{
		pow = power(n, ++p);
		return pow * (1 / n);
	}
	else
	{
		if (!n)
			printf("0 to go the power 0 is undefined.\n");
		pow = 1;
	}

	return pow;
}