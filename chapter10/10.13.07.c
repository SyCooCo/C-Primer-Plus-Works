#define _CRT_SECURE_NO_WARNINGS 1
//��дһ�����򣬳�ʼ��һ��double���͵Ķ�ά���飬ʹ�ñ����ϰ2�е�һ�����������Ѹ������е����ݿ�������һ����ά������
//����Ϊ��ά��������������飬���Կ���ʹ�ô���һά����Ŀ������������������е�ÿ�������飩��
#include <stdio.h>
void copy_arr(double* target, double* source, int n);
void print_arr(double* a, int n);

int main()
{
	double source[3][3] =
	{
		{ 1.1, 2.2, 3.3 },
		{ 4.4, 5.5, 6.6 },
		{ 7.7, 8.8, 9.9 }
	};
	double target[3][3];
	int i;

	for (i = 0; i < 3; i++)
		copy_arr(target[i], source[i], 3);

	printf("source: \n");
	for (i = 0; i < 3; i++)
		print_arr(source[i], 3);
	printf("\ntarget:\n");
	for (i = 0; i < 3; i++)
		print_arr(target[i], 3);

	printf("\ndone\n");
	return 0;
}

void copy_arr(double* target, double* source, int n)
{
	int i;
	for (i = 0; i < n; i++)
		target[i] = source[i];
}

void print_arr(double* a, int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%g  ", a[i]);
	putchar('\n');
}