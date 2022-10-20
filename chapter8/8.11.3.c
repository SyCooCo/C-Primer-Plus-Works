#define _CRT_SECURE_NO_WARNINGS 1
//编写一个程序，在遇到EOF之前，把输入作为字符流获取。该程序要报告输入中的大写字母和小写字母的个数。
//假设大小字母数值是连续的。或者使用ctype.h库中合适的分类函数更方便。

#include <stdio.h>

int main()
{
	int ch, unum, lnum;
	unum = lnum = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'A' && ch < 'A' + 27)
			unum++;
		else if (ch >= 'a' && ch < 'a' + 27)
			lnum++;
		else
			continue;
	}
	printf("\nuppercase:%d\nlowercase:%d", unum, lnum);
	return 0;
}