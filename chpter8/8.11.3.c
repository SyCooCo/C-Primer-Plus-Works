#define _CRT_SECURE_NO_WARNINGS 1
//��дһ������������EOF֮ǰ����������Ϊ�ַ�����ȡ���ó���Ҫ���������еĴ�д��ĸ��Сд��ĸ�ĸ�����
//�����С��ĸ��ֵ�������ġ�����ʹ��ctype.h���к��ʵķ��ຯ�������㡣

#include <stdio.h>

int main()
{
	int ch, unum, lnum;
	unum = lnum = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'A' && ch < 'A' + 27)
			unum++;
		else if (ch >= 'a' && ch < 'a' + 27)
			lnum++;
		else
			continue;
	}
	printf("\nuppercase:%d\nlowercase:%d", unum, lnum);
	return 0;
}