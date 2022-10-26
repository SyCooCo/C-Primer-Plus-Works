#define _CRT_SECURE_NO_WARNINGS 1
//编写一个函数，接受3个参数：一个字符和两个整数。
//字符参数是待打印的字符，第一个整数指定一行中打印字符的次数，第二个整数指定打印指定字符的行数。
//编写一个调用该函数的程序。

//这不跟第二题一样的？？

#include <stdio.h>
void chline(char ch, int i, int j);

int main()
{
	char ch;
	int i, j;
	printf("input: \n");
	scanf("%c %d %d", &ch, &i, &j);
	chline(ch, i, j);
	printf("done");
	return 0;
}

void chline(char ch, int i, int j)
{
	for (int ii = 0; ii < i; ii++)
	{
		for (int jj = 0; jj < j; jj++)
			printf("%c", ch);
		printf("\n");
	}
}