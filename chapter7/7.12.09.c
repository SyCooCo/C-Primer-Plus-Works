#define _CRT_SECURE_NO_WARNINGS 1
//��дһ������ֻ�������������룬Ȼ����ʾ����С�ڻ���ڸ�����������

#include <stdio.h>

int main()
{
	int n, i, j;
	_Bool c;
	printf("input a positive integer:");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (c = 1, j = 1; j * j <= i; j++)
		{
			if (i % j == 0 && j != 1)
			{
				c = 0;
				break;
			}
		}
		if (c)
			printf("%d\n", i);
	}
	return 0;
}