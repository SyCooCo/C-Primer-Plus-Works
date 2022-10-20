#define _CRT_SECURE_NO_WARNINGS 1
//编写一个程序，在遇到EOF之前，把输入作为字符读取。程序要打印每个输入的字符及其相应的ASCII十进制值。
//注意，在ASCII序列中，空格字符前面的字符都是非打印字符，要特殊处理这些字符。如果非打印字符是换行符或制表符，则分别打印\n或\t。
//否则，使用控制字符表示法。例如，ASCII的1是Ctrl+A，可显示为^A。注意，A的ASCII值是Ctrl+A的值加上64。
//其他的非打印字符也有类似的关系。除每次遇到换行符打印新的一行之外，每行打印10对值。（注意：不同的操作系统其控制字符可能不同。）

#include <stdio.h>

int main()
{
	int ch, cnum;
	cnum = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < ' ')
		{
			switch (ch)
			{
			case '\n':
				printf(" '\\n'-%-5d     ", ch);
				break;
			case '\t':
				printf(" '\\t'-%-5d     ", ch);
				break;
			default:
				printf("^%4c-%-5d     ", ch + 64, ch);
				break;
			}
		}
		else
			printf("%5c-%-5d", ch, ch);
		if (++cnum % 10 == 0)
			printf("\n");
	}
	return 0;
}