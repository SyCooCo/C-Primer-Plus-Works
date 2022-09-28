#define _CRT_SECURE_NO_WARNINGS 1
//编写一个程序，读取一个浮点数，先打印成小数形式，再打印成指数形式。
//然后，如果系统支持，再打印成p计数法（即十六进制计数法）。
//按以下格式输出（实际显示的指数位数因系统而异）；
/*
Enter a floating-point value: 64.25
fixed-point notation: 64.250000
exponential notation: 6.425000e+01
p notation: 0x1.01p+6
*/

#include <stdio.h>

int main(void)
{
	float a;
	printf("Enter a floating-point value: ");
	scanf("%f", &a);
	printf("\nfixed-point notation: %f", a);
	printf("\nexponential notation: %e", a);
	printf("\np notation: %a", a);
	return 0;
}