#define _CRT_SECURE_NO_WARNINGS 1
//编写一个程序，提示用户输入天数，然后将其转换成周数和天数。
//例如，用户输入18，则转换成2周4天。以下面的格式显示结果：
/*
18 days are 2 weeks, 4 days.
*/
//通过while循环让用户重复输入天数，当用户输入一个非正数值时
//（如0或-20），循环结束。

#include <stdio.h>

int main()
{
	int days, weeks, rdays;
	printf("现在过去几天了？(输入<=0的值以退出)\n");
	scanf("%d", &days);
	while (days > 0)
	{
		weeks = days / 7;
		rdays = days % 7;
		printf("也就是说，现在过去了%d个星期又%d天。\n", weeks, rdays);
		getchar();
		getchar();
		printf("那么，现在过去几天了？(输入<=0的值以退出)\n");
		scanf("%d", &days);
	}
	printf("拜拜~");
	return 0;
}