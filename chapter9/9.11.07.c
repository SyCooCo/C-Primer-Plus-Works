#define _CRT_SECURE_NO_WARNINGS 1
//编写一个函数，从标准输入中读取字符，直到遇见文件结尾。程序要报告每个字符是否是字母。
//如果是，还要报告该字母在字母表中的位置。例如，c和C在字母表中的位置都是3。
//合并一个函数，以一个字符作为参数,如果该字符是一个字母则返回一个数值位置，否则返回-1.

//我觉得返回0比较好，因为0是个假值，可以直接作为if表达式的值。//

#include <stdio.h>
int isletter(char a);
void judgement(void);

int main()
{
	printf("input:");
	judgement();
	printf("done");
	return 0;
}

int isletter(char a)
{
	int i;
	if (a >= 'a' && a <= 'z')
		i = a - 'a' + 1;
	else if (a >= 'A' && a <= 'Z')
		i = a - 'A' + 1;
	else
		i = -1;
	return i;
}

void judgement(void)
{
	char ch;
	while ((ch = getchar()) != EOF)
	{
		if (isletter(ch) > 0)
			printf("%c - %d\n", ch, isletter(ch));
		else
			printf("\"%c\" is not a letter\n", ch);
	}
}