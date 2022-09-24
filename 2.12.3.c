#define _CRT_SECURE_NO_WARNINGS 1
//编写一个程序把你的年龄转换成天数，并显示这两个值。这里不用考虑闰年的问题。

#include <stdio.h>

int main(void)
{
	int age = 18;
	int days = age * 365;
	printf("age:%d\ndays:%d", age, days);
	return 0;
}