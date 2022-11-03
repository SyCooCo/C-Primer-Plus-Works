#define _CRT_SECURE_NO_WARNINGS 1
//编写一个函数，返回储存在double类型数组中最大值的下标，并在一个简单的程序中测试该函数。
#include <stdio.h>

int max(double* arr, int n);

int main()
{
	int i;
	double num[5];
	printf("input: ");
	for (i = 0; i < 5; i++)
		scanf("%lf", &num[i]);
	printf("max: %d", max(num, 5));

	return 0;
}

int max(double* arr, int n)
{
	int i, max;
	for (i = max = 0; i < n; i++)
		max = arr[i] > arr[max] ? i : max;
	return max;
}