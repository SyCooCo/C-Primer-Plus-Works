#define _CRT_SECURE_NO_WARNINGS 1
//��дһ�����򣬶�ȡ����ֱ���û�����0.
//��������󣬳���Ӧ�����û������ż����������0����������Щż����ƽ��ֵ�������������������������ƽ��ֵ��

#include <stdio.h>

int main()
{
	int num, o_num, e_num, son, sen;
	o_num = e_num = son = sen = 0;

	printf("input\n");
	scanf("%d", &num);
	while (num != 0)
	{
		if (num % 2 != 0)
		{
			o_num++;
			son += num;
		}
		else
		{
			e_num++;
			sen += num;
		}
		scanf("%d", &num);
	}
	printf("e_num:%d average:%.1f\no_num:%d average:%.1f", e_num, (float)sen / e_num, o_num, (float)son / o_num);
	return 0;
}