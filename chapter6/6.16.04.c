#define _CRT_SECURE_NO_WARNINGS 1
//使用嵌套循环，按下面的格式打印字母：
/*
A
BC
DEF
GHIJ
KLMNO
PQRSTU
*/
//如果你的系统不使用以数字顺序编码的代码，请参照练习3的方案解决。

#include <stdio.h>

int main()
{
	char l = 'A';
	int i, j;
	for (i = 1; i < 7; i++)
	{
		for (j = 1; j <= i; j++, l++)
			printf("%c", l);
		printf("\n");
	}
	return 0;
}
