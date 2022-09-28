#define _CRT_SECURE_NO_WARNINGS 1
//编写一个程序，要求提示输入一个ASCII码值（如66），然后打印输入的字符。

#include <stdio.h>

int main(void)
{
	char asskey;
	printf("请输入一个ASCII码值：");
	scanf("%d", &asskey);
	printf("\n该字符为：%c", asskey);
	return 0;
}