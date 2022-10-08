#define _CRT_SECURE_NO_WARNINGS 1
//使用嵌套循环，用下面的格式打印字母：
/*
F
FE
FED
FEDC
FEDCB
FEDCBA
*/
//注意：如果你的系统不使用ASCII或其他以数字顺序编码的代码，
//可以把字符数组初始化为字母表中的字母：
/* char lets[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; */
//然后使用数组下标选择单独的字母，例如 lets[0] 是'A'，等等。

#include <stdio.h>

int main()
{
	int i;
	char l;
	for (i = 1; i < 7; i++)
	{
		for (l = 'F'; l > 'F' - i; l--)
			printf("%c", l);
		printf("\n");
	}
	return 0;
}