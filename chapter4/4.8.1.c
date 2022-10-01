#define _CRT_SECURE_NO_WARNINGS 1
//编写一个程序，提示用户输入名和姓，然后以“名，姓”的格式打印出来。

#include <stdio.h>

int main()
{
	char f_n[500];
	char n[1000];
	printf("请输入你的姓：");
	scanf("%s", f_n);
	printf("请输入你的名：");
	scanf("%s", n);
	printf("%s%s，不错的名字！", f_n, n);
	return 0;
}