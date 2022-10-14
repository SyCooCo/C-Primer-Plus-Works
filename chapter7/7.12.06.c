#define _CRT_SECURE_NO_WARNINGS 1
//编写程序读取输入，读到#停止，报告ei出现的次数。
//注意
//该程序要记住前一个字符和当前字符。用“Receive your eieio award”这样的输入来测试。

#include <stdio.h>

int main()
{
	char ch1, ch2 = 'a';
	int n = 0;
	while ((ch1 = getchar()) != '#')
	{
		if (ch1 == 'i' && ch2 == 'e')
			n++;
		ch2 = ch1;
	}
	printf("n=%d", n);
	return 0;
}