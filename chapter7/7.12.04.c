#define _CRT_SECURE_NO_WARNINGS 1
//使用if else语句编写一个程序读取输入，读到#停止。
//用感叹号替换句号，用两个感叹号替换原来的感叹号，最后报告进行了多少次替换。

#include <stdio.h>

int main()
{
	char ch, c[255];
	int n, i, j;
	n = i = 0;

	while ((ch = getchar()) != '#')
	{
		if (ch == '.')
		{
			ch = '!';
			n++;
		}
		else if (ch == '!')
		{
			c[i++] = ch;
			n++;
		}
		c[i++] = ch;
	}
	for (j = 0; j < i; j++)
		printf("%c", c[j]);
	printf("\nn=%d", n);
	return 0;
}