#define _CRT_SECURE_NO_WARNINGS 1
//1988�����������˰�ռƻ��ǽ�����򵥵�˰�շ���������Ϊ4�����ÿ������������ȼ���
//�����Ǹ�˰�ռƻ���ժҪ����Ԫ��ΪӦ��˰�����룩��
/*
-------------------------------------------------------------------------
���                            |  ˰��
                                |
����                            |  17850��Ԫ��15%�ƣ��������ְ�28%��
����                            |  23900��Ԫ��15%�ƣ��������ְ�28%��
�ѻ飬����                      |  29750��Ԫ��15%�ƣ��������ְ�28%��
�ѻ飬����                      |  14875��Ԫ��15%�ƣ��������ְ�28%��
-------------------------------------------------------------------------
*/
//���磬һλ����Ϊ20000��Ԫ�ĵ�����˰�ˣ�Ӧ����˰��0.15*17850+0.28*(20000-17850)��Ԫ��
//��дһ���������û�ָ������˰��������Ӧ��˰���룬Ȼ�����˰�𡣳���Ӧͨ��ѭ�����û����Զ�����롣

#include <stdio.h>
#define TAXR1 17850
#define TAXR2 23900
#define TAXR3 29750
#define TAXR4 14875
#define TAX1 0.15
#define TAX2 0.28

int request(void);

int main()
{
    int wage, type, tax, choice;
	while ((choice = request()) != 5)
	{
		switch (choice)
		{
		case 1:
			type = TAXR1;
			break;
		case 2:
			type = TAXR2;
			break;
		case 3:
			type = TAXR3;
			break;
		case 4:
			type = TAXR4;
			break;
		default:
			printf("\n�Ƿ����룡\n");
			continue;
		}

		printf("Ӧ��˰����Ϊ��");
		scanf("%d", &wage);
		if (wage <= type)
			tax = wage * TAX1;
		else
			tax = type * TAX1 + (wage - type) * TAX2;

		printf("˰��Ϊ��%d", tax);
	}
	printf("ok");
	return 0;
}

int request(void)
{
	int choice;
	printf("\n**************************************************\n");
	printf("\nѡ�����˰������ࣺ\n");
	printf("1) ����                               2) ����\n");
	printf("3) �ѻ飬����                         4) �ѻ飬����\n5) �˳�\n");
	printf("****************************************************\n");
	scanf("%d", &choice);
	return choice;
}