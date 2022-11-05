#define _CRT_SECURE_NO_WARNINGS 1
//编写一个程序，初始化一个double类型的3*5二维数组，使用一个处理变长数组的函数将其拷贝至另一个二维数组中。
//还要编写一个以变长数组为形参的函数以显示两个数组的内容。这两个函数应该能处理任意N*M数组
//（如果编译器不支持变长数组，就是用传统C函数处理N*5的数组）。
#include <stdio.h>
void copy_arr(int rows, double arr[][5], double target[][5]);
void print_arr(int rows, double arr[][5]);

int main()
{
	double arr[3][5] =
	{
		{ 1.1, 2.2, 3.3, 4.4, 5.5 },
		{ 2.2, 3.3, 4.4, 5.5, 6.6 },
		{ 3.3, 4.4, 5.5, 6.6, 7.7 }
	};
	double target[3][5];

	copy_arr(3, arr, target);
	printf("arr =\n");
	print_arr(3, arr);
	printf("target =\n");
	print_arr(3, target);
	return 0;
}

void copy_arr(int rows, double arr[][5], double target[][5])
{
	int i, j;
	for (j = 0; j < rows; j++)
	{
		for (i = 0; i < 5; i++)
			target[j][i] = arr[j][i];
	}
}

void print_arr(int rows, double arr[][5])
{
	int i, j;
	for (j = 0; j < rows; j++)
	{
		for (i = 0; i < 5; i++)
			printf("%g\t", arr[j][i]);
		printf("\n");
	}
	putchar('\n');
}