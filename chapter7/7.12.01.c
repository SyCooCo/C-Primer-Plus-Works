#define _CRT_SECURE_NO_WARNINGS 1
//编写一个程序读取输入，读到#字符停止，然后报告读取的空格数、换行数和所有其他字符的数量。

#include <stdio.h>

int main()
{
	int n_s, n_n, n_c;
	char ch;
	n_s = n_n = n_c = 0;
	while ((ch = getchar()) != '#')
	{
		if (ch == ' ')
			n_s++;
		else if (ch == '\n')
			n_n++;
		else n_c++;
	}
	printf("\nn_s:%d\nn_n:%d\nn_c:%d\n", n_s, n_n, n_c);
	return 0;
}