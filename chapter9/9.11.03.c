#define _CRT_SECURE_NO_WARNINGS 1
//��дһ������������3��������һ���ַ�������������
//�ַ������Ǵ���ӡ���ַ�����һ������ָ��һ���д�ӡ�ַ��Ĵ������ڶ�������ָ����ӡָ���ַ���������
//��дһ�����øú����ĳ���

//�ⲻ���ڶ���һ���ģ���

#include <stdio.h>
void chline(char ch, int i, int j);

int main()
{
	char ch;
	int i, j;
	printf("input: \n");
	scanf("%c %d %d", &ch, &i, &j);
	chline(ch, i, j);
	printf("done");
	return 0;
}

void chline(char ch, int i, int j)
{
	for (int ii = 0; ii < i; ii++)
	{
		for (int jj = 0; jj < j; jj++)
			printf("%c", ch);
		printf("\n");
	}
}