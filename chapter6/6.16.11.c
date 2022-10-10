#define _CRT_SECURE_NO_WARNINGS 1
//编写一个程序，在数组中读入8个整数，然后按倒序打印这8个整数

#include <stdio.h>

int main()
{
	int i, nums[8];
	printf("input 8 numbers: ");
	for (i = 0; i < 8; i++)
		scanf("%d", &nums[i]);
	for (i = 7; i >= 0; i--)
		printf("%d ", nums[i]);
	return 0;
}