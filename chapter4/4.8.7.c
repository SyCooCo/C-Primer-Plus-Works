#define _CRT_SECURE_NO_WARNINGS 1
//编写一个程序，将一个double类型的变量设置为1.0/3.0，
//一个float类型的变量设置为1.0/3.0.
//分别显示两次计算的结果各三次：
//一次显示小数点后面6位数字；一次显示小数点后面12位数字；一次显示小数点后面16位数字。
//程序中要包含float.h头文件，并显示FLT_DIG和DBL_DIG的值。
//1.0/3.0的值与这些值一致吗？

#include <stdio.h>
#include <float.h>

int main()
{
	const double d = 1.0 / 3.0;
	const float f = 1.0 / 3.0;
	printf("d:\n%.6f\n%.12f\n%.16f\n", d, d, d);
	printf("f:\n%.6f\n%.12f\n%.16f\n", f, f, f);
	printf("FLT_DIG:%d\nDBL_DIG:%d\n", FLT_DIG, DBL_DIG);
	return 0;
}