#define _CRT_SECURE_NO_WARNINGS 1
//一年大概有3.156*10^7秒。编写一个程序，提示用户输入年龄，然后显示该年龄对应的秒数。

#include <stdio.h>

int main()
{
	int age;
	float s_age;
	printf("请输入你的年龄：");
	scanf("%d", &age);
	s_age = age * 3.156e7;
	printf("\n你大概经历了%e秒", s_age);
	return 0;
}