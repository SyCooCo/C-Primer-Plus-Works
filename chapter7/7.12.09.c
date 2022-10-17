#define _CRT_SECURE_NO_WARNINGS 1
//编写一个程序，只接受正整数输入，然后显示所有小于或等于该数的素数。

#include <stdio.h>

int main()
{
	int n, i, j;
	_Bool c;
	printf("input a positive integer:");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (c = 1, j = 1; j * j <= i; j++)
		{
			if (i % j == 0 && j != 1)
			{
				c = 0;
				break;
			}
		}
		if (c)
			printf("%d\n", i);
	}
	return 0;
}