#define _CRT_SECURE_NO_WARNINGS 1
//编写一个函数，返回储存在int类型数组中的最大值，并在一个简单的程序中测试该函数。
#include <stdio.h>
int max(int* arr, int n);

int main()
{
	int i, num[5];
	printf("input: ");
	for (i = 0; i < 5; i++)
		scanf("%d", &num[i]);
	printf("max: %d", max(num, 5));

	return 0;
}

int max(int* arr, int n)
{
	int i, max;
	for (i = 0, max = arr[0]; i < n; i++)
		max = arr[i] > max ? arr[i] : max;
	return max;
}