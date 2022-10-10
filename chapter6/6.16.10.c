#define _CRT_SECURE_NO_WARNINGS 1
//编写一个程序，要求用户输入一个上限整数和一个下限整数，
//计算从上限到下限范围内所有整数的平方和，并显示计算结果。
//然后程序继续提示用户输入上限和下限整数，并显示结果，
//直到用户输入的上限整数等于或小于下限整数为止。程序的运行实例如下：
/*
Enter lower and upper integer limits: 5 9
The sums of the squares from 25 to 81 is 255
Enter next set of limits:3 25
The sums of the squares from 9 to 625 is 5520
Enter next set of limits:5 5
Done
*/

#include <stdio.h>

int ct(int l, int u);

int main()
{
	int lo, up, sum, i;
	printf("Enter lower and upper integer limits: ");
	scanf("%d %d", &lo, &up);
	while (lo < up)
	{
		sum = ct(lo, up);
		printf("The sums of the squares from %d to %d is %d\n", lo * lo, up * up, sum);
		printf("Enter next set of limits:");
		scanf("%d %d", &lo, &up);
	}
	printf("Done");
	return 0;
}

int ct(int l, int u)
{
	int i, s;
	for (i = l, s = 0; i <= u; i++)
		s += i * i;
	return s;
}