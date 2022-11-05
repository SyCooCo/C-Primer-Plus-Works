#define _CRT_SECURE_NO_WARNINGS 1
//编写一个程序，初始化一个double类型的二维数组，使用编程练习2中的一个拷贝函数把该数组中的数据拷贝至另一个二维数组中
//（因为二维数组是数组的数组，所以可以使用处理一维数组的拷贝函数来处理数组中的每个子数组）。
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