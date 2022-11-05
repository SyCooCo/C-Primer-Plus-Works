#define _CRT_SECURE_NO_WARNINGS 1
//编写一个程序，声明一个int类型的3*5二维数组，并用合适的值初始化它。
//该程序打印数组中的值，然后各值翻倍（即是原值的2倍），并显示出各元素的新值。
//编写一个函数显示数组的内容，再编写一个函数把各元素的值翻倍。
//这两个函数都以函数名和行数作为参数。
#include <stdio.h>
void print_arr(int* a, int n);
void tt(int* a, int n);

int main()
{
	int a[3][5] =
	{
		{ 1, 2, 3, 4, 5 },
		{ 2, 3, 4, 5, 6 },
		{ 3, 4, 5, 6, 7 }
	};
	print_arr(a, 3);
	tt(a, 3);
	print_arr(a, 3);
	return 0;
}

void tt(int a[][5], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < 5; j++)
			a[i][j] *= 2;
}

void print_arr(int a[][5], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%d\t", a[i][j]);
		putchar('\n');
	}
}