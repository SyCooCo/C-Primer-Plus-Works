#define _CRT_SECURE_NO_WARNINGS 1
//��д������һ���������ú�����3��double�����ĵ�ַ��Ϊ������
//����Сֵ�����1���������м�ֵ�����2�����������ֵ�����3��������

#include <stdio.h>

void file(double * a, double * b, double * c);

int main()
{
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	file(&a, &b, &c);
	printf("%g %g %g", a, b, c);
	return 0;
}

void file(double * a, double * b, double * c)
{
	double i;
	if (*a >= *b && *a >= *c)
	{
		i = *c;
		*c = *a;
		if (*b >= i)
			*a = i;
		else
		{
			*a = *b;
			*b = i;
		}
	}
	else if (*a >= *b || *a >= *c)
	{
		i = *b;
		*b = *a;
		if (*c >= i)
			*a = i;
		else
		{
			*a = *c;
			*c = i;
		}
	}
	else
	{
		if (*b > *c)
		{
			i = *b;
			*b = *c;
			*c = i;
		}
		else
			;
	}
}