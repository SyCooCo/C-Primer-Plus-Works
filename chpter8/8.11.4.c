#define _CRT_SECURE_NO_WARNINGS 1
//��дһ������������EOF֮ǰ����������Ϊ�ַ�����ȡ���ó���Ҫ����ƽ��ÿ�����ʵ���ĸ����
//��Ҫ�ѿհ�ͳ��Ϊ���ʵ���ĸ��ʵ���ϣ�������Ҳ��Ӧ��ͳ�ƣ�����������ʱ���ÿ�����ô��
//�������Ƚ�������㣬����ʹ��ctype.hϵ���е�ispunct()��������

#include <stdio.h>
#include <stdbool.h>
#define ISLETTER (ch >= 'A' && ch < 'A' + 27) || (ch >= 'a' && ch < 'a' + 27)
//��������ܺܺõش���Ʋ�ţ�'�������Ұ��ˣ���������

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