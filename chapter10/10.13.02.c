#define _CRT_SECURE_NO_WARNINGS 1
//��дһ�����򣬳�ʼ��һ��double���͵����飬�ú�Ѹ���������ݿ�����3�����������У���main()��������4�����飩��
//ʹ�ô������ʾ���ĺ������е�1�ݿ�����ʹ�ô�ָ���ʾ����ָ������ĺ������е�2�ݿ�����
//��Ŀ����������Դ�������ʹ�������Ԫ�ظ�����Ϊǰ���������Ĳ�����
//��3��������Ŀ����������Դ��������ָ��Դ�������һ��Ԫ�غ����Ԫ�ص�ָ�롣Ҳ����˵������������������������������ʾ��
/*
double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
double target1[5];
double target2[5];
double target3[5];
copy_arr(target1, source, 5);
copy_ptr(target2, source, 5);

copy_ptrs(target3, source, source + 5);
*/

#include <stdio.h>
void copy_arr(double* target, double* source, int n);
void copy_ptr(double* target, double* source, int n);
void copy_ptrs(double* target, double* source, double* ptr);

void print_arr(double* a, int n);

int main()
{
	double source[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	double target1[5];
	double target2[5];
	double target3[5];

	copy_arr(target1, source, 5);
	copy_ptr(target2, source, 5);
	copy_ptrs(target3, source, source + 5);

	printf("source =\n");
	print_arr(source, 5);
	printf("target1 =\n");
	print_arr(target1, 5);
	printf("target2 =\n");
	print_arr(target2, 5);
	printf("target3 =\n");
	print_arr(target3, 5);

	printf("done");
	return 0;
}

void copy_arr(double* target, double* source, int n)
{
	int i;
	for (i = 0; i < n; i++)
		target[i] = source[i];
}

void copy_ptr(double* target, double* source, int n)
{
	double* ptr;
	int i = 0;
	for (ptr = source; ptr < source + n; ptr++)
		target[i++] = *ptr;
}

void copy_ptrs(double* target, double* source, double* ptr)
{
	int i;
	for (i = 0; (source + i) < ptr; i++)
	{
		*(target + i) = *(source + i);
	}
}

void print_arr(double* a, int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%g  ", a[i]);
	putchar('\n');
}