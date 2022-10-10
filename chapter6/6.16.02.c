#define _CRT_SECURE_NO_WARNINGS 1
//使用嵌套循环，按下面的格式打印字符：
/*
$
$$
$$$
$$$$
$$$$$
*/

#include <stdio.h>

int main()
{
	int i, j;
	for (i = 1; i < 6; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf("$");
		}
		printf("\n");
	}
	return 0;
}
