#define _CRT_SECURE_NO_WARNINGS 1
//��дһ�������ȡ���룬����#�ַ�ֹͣ��Ȼ�󱨸��ȡ�Ŀո����������������������ַ���������

#include <stdio.h>

int main()
{
	int n_s, n_n, n_c;
	char ch;
	n_s = n_n = n_c = 0;
	while ((ch = getchar()) != '#')
	{
		if (ch == ' ')
			n_s++;
		else if (ch == '\n')
			n_n++;
		else n_c++;
	}
	printf("\nn_s:%d\nn_n:%d\nn_c:%d\n", n_s, n_n, n_c);
	return 0;
}