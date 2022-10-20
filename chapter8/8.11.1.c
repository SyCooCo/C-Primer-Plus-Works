#define _CRT_SECURE_NO_WARNINGS 1
//设计一个程序，统计在读到文件结尾之前读取的字符数。

#include <stdio.h>

int main()
{
	int n, ch;
	n = 0;
	while ((ch = getchar()) != EOF)
		n++;
	printf("%d", n);
	return 0;
}