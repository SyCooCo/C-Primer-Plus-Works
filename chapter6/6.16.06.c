#define _CRT_SECURE_NO_WARNINGS 1
//编写一个程序打印一个表格，每一行行打印一个整数、该数的平方、该数的立方。
//要求用户输入表格的上下限。使用一个for循环。

#include <stdio.h>

int main()
{
	int ma, mi, i, j;
	printf("请输入上下限：");
	scanf("%d %d", &ma, &mi);
	printf("\n      n  square   cubic\n");
	for (i = mi; i <= ma; i++)
		printf("%7d %7d %7d\n", i, i * i, i * i * i);
	return 0;
}