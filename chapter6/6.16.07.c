#define _CRT_SECURE_NO_WARNINGS 1
//��дһ�������һ�����ʶ���һ���ַ������У�Ȼ�����ӡ������ʡ�
//��ʾ��strlen()��������4�½��ܹ��������ڼ����������һ���ַ����±ꡣ

#include <stdio.h>
#include <string.h>
int main()
{
	int i;
	char word[20];
	printf("Input a word:\n");
	scanf("%s", word);
	for (i = strlen(word); i >= 0; i--)
		printf("%c", word[i]);
	return 0;
}