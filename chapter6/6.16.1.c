#define _CRT_SECURE_NO_WARNINGS 1
//��дһ�����򣬴���һ������26��Ԫ�ص����飬�������д���26��Сд��ĸ��
//Ȼ���ӡ������������ݡ�

#include <stdio.h>

int main()
{
	char x, n[26];
	int i;
	for (x = 'a', i = 0; i < 26; x++, i++)
		n[i] = x;
	for (i = 0; i < 26; i++)
		printf("%c ", n[i]);
	return 0;
}