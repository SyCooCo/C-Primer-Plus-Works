#define _CRT_SECURE_NO_WARNINGS 1
//编写一个程序，要求用户输入两个浮点数，并打印两数之差除以两数乘积的结果。
//在用户输入非数字之前，程序应循环处理用户输入的每对值。

#include <stdio.h>

int main()
{
	float num1, num2;
	int i;
	printf("Input 2 numbers:\n");
	i = scanf("%f %f", &num1, &num2);
	do
	{
		printf("%f\n", (num1 - num2) / (num1 * num2));
		printf("Input 2 numbers:\n");
		i = scanf("%f %f", &num1, &num2);
	} while (i != 0);
	return 0;
}