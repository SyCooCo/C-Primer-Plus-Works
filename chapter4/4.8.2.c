#define _CRT_SECURE_NO_WARNINGS 1
//��дһ��������ʾ�û��������֣���ִ�����²�����
/*
a.��ӡ���֣�����˫���ţ�
b.�ڿ��Ϊ20�ֶε��Ҷ˴�ӡ���֣�����˫���ţ�
c.�ڿ��Ϊ20�ֶε���˴�ӡ���֣�����˫���ţ�
d.�ڱ�������ȿ�3���ֶ��д�ӡ���֡�
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char name[1000];
	printf("������������֣�\n");
	scanf("%s", name);
	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
	printf("%*s", strlen(name) + 3 , name);
	return 0;
}