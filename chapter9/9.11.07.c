#define _CRT_SECURE_NO_WARNINGS 1
//��дһ���������ӱ�׼�����ж�ȡ�ַ���ֱ�������ļ���β������Ҫ����ÿ���ַ��Ƿ�����ĸ��
//����ǣ���Ҫ�������ĸ����ĸ���е�λ�á����磬c��C����ĸ���е�λ�ö���3��
//�ϲ�һ����������һ���ַ���Ϊ����,������ַ���һ����ĸ�򷵻�һ����ֵλ�ã����򷵻�-1.

//�Ҿ��÷���0�ȽϺã���Ϊ0�Ǹ���ֵ������ֱ����Ϊif���ʽ��ֵ��//

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