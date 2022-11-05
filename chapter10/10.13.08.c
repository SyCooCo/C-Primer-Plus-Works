#define _CRT_SECURE_NO_WARNINGS 1
//使用编程练习2中的拷贝函数，把一个内含7个元素的数组中第3~第5个元素拷贝至内含3个元素的数组中。
//该函数本身不需要修改，只需要选择合适的实际参数（实际参数不需要是数组名和数组大小，只需要是数组元素的地址和待处理元素的个数）。
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