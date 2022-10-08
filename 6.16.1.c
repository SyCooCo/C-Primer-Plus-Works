#define _CRT_SECURE_NO_WARNINGS 1
//编写一个程序，创建一个包含26个元素的数组，并在其中储存26个小写字母。
//然后打印数组的所有内容。

#include <stdio.h>

int main()
{
	char x, n[26];
	int i;
	for (x = 'a', i = 0; i < 26; x++, i++)
		n[i] = x;
	for (i = 0; i < 26; i++)
		printf("%c ", n[i]);
	return 0;
}