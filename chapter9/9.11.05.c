#define _CRT_SECURE_NO_WARNINGS 1
//��д������һ������larger_of()���ú���������double���ͱ�����ֵ�滻Ϊ�ϴ��ֵ��
//���磬largere_of(x, y)���x��y�нϴ��ֵ���¸�������������

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