#define _CRT_SECURE_NO_WARNINGS 1
//�����ĵ���ƽ�����������㣺�ȵõ������ĵ�����Ȼ���������������ƽ��ֵ�����ȡ�������ĵ�����
//��дһ����������������double���͵Ĳ��������������������ĵ���ƽ������

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