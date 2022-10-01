#define _CRT_SECURE_NO_WARNINGS 1
//编写一个程序，读取一个浮点数，首先以小数点计数法打印，然后以指数计数法打印。
//用下面的格式进行输出（系统不同，指数计数法显示的位数可能不同）：
/*
a.The input is 21.3 or 2.1e+001.
b.The input is +21.290 or 2.129E+001
*/

#include <stdio.h>

int main()
{
	float fl;
	printf("请输入一个浮点数：");
	scanf("%f", &fl);
	printf("The input is %.1f or %.1e.\n", fl , fl);
	printf("The input is %+.3f or %.3E.", fl , fl);
	return 0;
}