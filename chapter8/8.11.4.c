#define _CRT_SECURE_NO_WARNINGS 1
//编写一个程序，在遇到EOF之前，把输入作为字符流获取。该程序要报告平均每个单词的字母数。
//不要把空白统计为单词的字母。实际上，标点符号也不应该统计，但是现在暂时不用考虑这么多
//（如果你比较在意这点，考虑使用ctype.h系列中的ispunct()函数）。

#include <stdio.h>
#include <stdbool.h>
#define ISLETTER (ch >= 'A' && ch < 'A' + 27) || (ch >= 'a' && ch < 'a' + 27)
//这个程序不能很好地处理撇号（'），但我摆了，懒得整。

int main()
{
	bool is_in_word = false;
	int ch;
	float word_n = 0, let_num = 0;

	while ((ch = getchar()) != EOF)
	{
		if ((ISLETTER) && !is_in_word)
		{
			is_in_word = true;
			word_n++;
			let_num++;
		}
		else if (!(ISLETTER) && is_in_word)
			is_in_word = false;
		else if (ISLETTER)
			let_num++;
		else
			continue;
	}
	printf("\nwords:%d\nletters:%d\naverage letters:%.2f\n",
		(int)word_n, (int)let_num, word_n / let_num);
	return 0;
}