#define _CRT_SECURE_NO_WARNINGS 1
//��дһ������������EOF֮ǰ����������Ϊ�ַ���ȡ������Ҫ��ӡÿ��������ַ�������Ӧ��ASCIIʮ����ֵ��
//ע�⣬��ASCII�����У��ո��ַ�ǰ����ַ����ǷǴ�ӡ�ַ���Ҫ���⴦����Щ�ַ�������Ǵ�ӡ�ַ��ǻ��з����Ʊ������ֱ��ӡ\n��\t��
//����ʹ�ÿ����ַ���ʾ�������磬ASCII��1��Ctrl+A������ʾΪ^A��ע�⣬A��ASCIIֵ��Ctrl+A��ֵ����64��
//�����ķǴ�ӡ�ַ�Ҳ�����ƵĹ�ϵ����ÿ���������з���ӡ�µ�һ��֮�⣬ÿ�д�ӡ10��ֵ����ע�⣺��ͬ�Ĳ���ϵͳ������ַ����ܲ�ͬ����

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