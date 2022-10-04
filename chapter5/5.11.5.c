#define _CRT_SECURE_NO_WARNINGS 1
//修改程序addemup.c（程序清单5.13），你可以认为addeup.c是计算20天里赚多少钱的程序
//（假设第一天赚$1、第二天赚$2、第三天赚$3，以此类推）。修改程序，使其可以与用户交互，
//根据用户输入的数进行计算（即，用读入的一个变量来代替20）。

#include <stdio.h>

int main()
{
	int count, sum, n;
	count = 0;
	sum = 0;
	printf("how many days?\n");
	scanf("%d", &n);
	while (count++ < n)
		sum = sum + count;
	printf("sum = %d\n", sum);
	return 0;
}