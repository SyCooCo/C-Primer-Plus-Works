#define _CRT_SECURE_NO_WARNINGS 1
//ʹ�ñ����ϰ2�еĿ�����������һ���ں�7��Ԫ�ص������е�3~��5��Ԫ�ؿ������ں�3��Ԫ�ص������С�
//�ú���������Ҫ�޸ģ�ֻ��Ҫѡ����ʵ�ʵ�ʲ�����ʵ�ʲ�������Ҫ���������������С��ֻ��Ҫ������Ԫ�صĵ�ַ�ʹ�����Ԫ�صĸ�������
#include <stdio.h>
void copy_arr(double* target, double* source, int n);
void print_arr(double* a, int n);

int main()
{
	double source[7] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
	double target[3];

	copy_arr(target, &source[2], 3);

	printf("source =\n");
	print_arr(source, 7);
	printf("target =\n");
	print_arr(target, 3);

	printf("done");
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