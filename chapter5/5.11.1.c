#define _CRT_SECURE_NO_WARNINGS 1
//编写一个程序，把用分钟表示的时间转换成用小时和分钟表示的时间。
//使用#define或const创建一个表示60的符号常量或const变量。
//通过while循环让用户重复输入值，直到用户输入小于或等于0的值才停止循环。

#include <stdio.h>

int main()
{
	const int h_m = 60;
	int min, hour, rmin;
	printf("现在过去几分钟了了？(输入<=0的值以退出）\n");
	scanf("%d", &min);
	while (min > 0)
	{
		hour = min / h_m;
		rmin = min % h_m;
		printf("也就是说，现在过去了%d小时%d分钟。\n", hour, rmin);
		getchar();
		getchar();
		printf("那么，现在过去几分钟了了？(输入<=0的值以退出）\n");
		scanf("%d", &min);
	}
	printf("拜拜~");
	return 0;
}