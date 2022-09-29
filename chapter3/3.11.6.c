#define _CRT_SECURE_NO_WARNINGS 1
//1个水分子的质量约为3.0*10^-23克。1夸脱水大概是950克。
//编写一个程序，提示用户输入水的夸脱数，并显示水分子的数量。

#include <stdio.h>

int main()
{
	float kt;
	float kg;
	float num;
	printf("请输入水的夸脱数：");
	scanf("%f", &kt);
	kg = kt * 950;
	num = kg / 3e-23;
	printf("这之中有%e个水分子", num);
	return 0;
}