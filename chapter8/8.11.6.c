#define _CRT_SECURE_NO_WARNINGS 1
//修改程序清单8.8中的get_first()函数，让该函数返回读取的第一个非空白字符，并在一个简单的程序中测试。

#include <stdio.h>

char get_first(void);

int main()
{
	char ch;
	ch = get_first();
	printf("oo:%c", ch);
	return 0;
}

char get_first(void)
{
	char ch;

	while ((ch = getchar()) <= ' ')
		continue;
	while (getchar() != '\n')
		continue;
	return ch;
}