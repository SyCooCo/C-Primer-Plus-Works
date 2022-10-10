#define _CRT_SECURE_NO_WARNINGS 1
//修改练习8，使用一个函数返回计算的结果。

#include <stdio.h>

float ct(float num1, float num2);

int main()
{
	float num1, num2;
	int i;
	printf("Input 2 numbers:\n");
	i = scanf("%f %f", &num1, &num2);
	do
	{
		printf("%f\n", ct(num1, num2));
		printf("Input 2 numbers:\n");
		i = scanf("%f %f", &num1, &num2);
	} while (i != 0);
	return 0;
}

float ct(float num1, float num2)
{
	float i;
	i = (num1 - num2) / (num1 * num2);
	return i;
}