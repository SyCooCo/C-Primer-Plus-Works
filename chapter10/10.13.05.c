#define _CRT_SECURE_NO_WARNINGS 1
//编写一个函数，返回储存在double类型数组中最大值和最小值的差值，并在一个简单的程序中测试该函数。
#include <stdio.h>

double sub(double* arr, int n);

int main()
{
	int i;
	double num[5];
	printf("input: ");
	for (i = 0; i < 5; i++)
		scanf("%lf", &num[i]);
	printf("sub: %lf", sub(num, 5));

	return 0;
}

double sub(double* arr, int n)
{
	int i;
	double s, max, min;
	for (i = 0, max = min = arr[0]; i < n; i++)
	{
		max = arr[i] > max ? arr[i] : max;
		min = arr[i] < min ? arr[i] : min;
	}
	s = max - min;
	return s;
}