#define _CRT_SECURE_NO_WARNINGS 1
//设计一个函数chline(ch, i, j)，打印指定的字符j列i列。在一个简单的驱动程序中测试该函数。

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