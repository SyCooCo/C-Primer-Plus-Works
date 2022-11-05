#define _CRT_SECURE_NO_WARNINGS 1
//编写一个函数，把两个数组中相对应的元素相加，然后把结果储存到第三个数组中。
//也就是说，如果数组1中包含的值是2、4、5、8，数组2中包含的值是1、0、4、6，
//那么该函数把3、4、9、14赋给第3个数组。函数接收3个数组名和1个数组大小。
//在一个简单的程序中测试该函数。
#include <stdio.h>
void sub_arr(int ar1[], int ar2[], int tar[], int n);
void print_arr(int ar[], int n);

int main()
{
	int ar1[4] = { 2, 4, 5, 8 };
	int ar2[4] = { 1, 0, 4, 6 };
	int target[4];
	sub_arr(ar1, ar2, target, 4);
	print_arr(ar1, 4);
	print_arr(ar2, 4);
	print_arr(target, 4);
	return 0;
}

void sub_arr(int ar1[], int ar2[], int tar[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		tar[i] = ar1[i] + ar2[i];
}

void print_arr(int ar[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d  ", ar[i]);
	putchar('\n');
}