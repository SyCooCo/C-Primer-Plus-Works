#define _CRT_SECURE_NO_WARNINGS 1
//��6�µĳ����嵥6.20�У�power()��������һ��double�����������������ݡ��Ľ��ú�����ʹ������ȷ���㸺�ݡ�
//���⣬����Ҫ����0���κδ��ݶ�Ϊ0���κ�����0���ݶ�Ϊ1(����Ӧ����0��0����δ���壬��˰Ѹ�ֵ����Ϊ1����
//Ҫʹ��һ��ѭ�������ڳ����в��Ըú�����

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
	int i;

	if (!n && p)
		pow = 0;
	else if (p>0)
	{
		for (i = 1; i <= p; i++)
			pow *= n;
	}
	else if (p<0)
	{
		for (i = 1; i <= -p; i++)
			pow *= n;
		pow = 1 / pow;
	}
	else
	{
		if (!n)
			printf("0 to go the power 0 is undefined.\n");
		pow = 1;
	}

	return pow;
}