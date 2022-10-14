#define _CRT_SECURE_NO_WARNINGS 1
//编写一个程序，读取整数直到用户输入0.
//输入结束后，程序应报告用户输入的偶数（不包括0）个数、这些偶数的平均值、输入的奇数个数及其奇数的平均值。

#include <stdio.h>

int main()
{
	int num, o_num, e_num, son, sen;
	o_num = e_num = son = sen = 0;

	printf("input\n");
	scanf("%d", &num);
	while (num != 0)
	{
		if (num % 2 != 0)
		{
			o_num++;
			son += num;
		}
		else
		{
			e_num++;
			sen += num;
		}
		scanf("%d", &num);
	}
	printf("e_num:%d average:%.1f\no_num:%d average:%.1f", e_num, (float)sen / e_num, o_num, (float)son / o_num);
	return 0;
}