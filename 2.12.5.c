#define _CRT_SECURE_NO_WARNINGS 1
//��дһ�γ����������������
/*
Brazil, Russia, India, China
India, China,
Brazil, Russia
*/
//����main()�������⣬�ó���Ҫ���������Զ��庯����
//һ����Ϊbr()������һ�����ӡһ�Ρ�Brazil, Russia����
//��һ����Ϊic()������һ�δ�ӡһ�Ρ�India, China����
//����������main()��������ɡ�

#include <stdio.h>

void br(void);
void ic(void);

int main(void)
{
	br();
	printf(", ");
	ic();
	printf("\n");
	ic();
	printf(",\n");
	br();
	return 0;
}

void br(void)
{
	printf("Brazil, Russia");
}

void ic(void)
{
	printf("India, China");
}