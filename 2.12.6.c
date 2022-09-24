#define _CRT_SECURE_NO_WARNINGS 1
//编写一个程序，创建一个整型变量toes，并将toes设为10.
//程序中还要计算toes的两倍和toes的平方。
//该程序应打印三个值，并分别描述以示区分。

#include <stdio.h>

int main(void)
{
	int toes = 10;
	int toes_2 = toes * 2;
	int toes_square = toes * toes;
	printf("toes = %d\ntoes * 2 = %d\ntoes * toes = %d", toes, toes_2, toes_square);
	return 0;
}