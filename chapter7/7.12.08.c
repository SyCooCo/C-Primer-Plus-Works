#define _CRT_SECURE_NO_WARNINGS 1
//�޸���ϰ7�ļ���a���ó�����Ը���һ����ѡ��Ĺ��ʵȼ��˵���
//ʹ��switch��ɹ��ʵȼ�ѡ�����г������ʵ�Ĳ˵�Ӧ������������
/*
*****************************************************************

Enter the number corresponding to the desired pay rate or action:
1) $8.75/hr                          2) $9.33/hr
3) $10.00/hr                         4) $11.20/hr
5) quit
*****************************************************************
*/
//���ѡ��1~4���е�һ�����֣�����Ӧ��ѯ���û�������Сʱ��������Ҫͨ��ѭ�����У������û�����5��
//�������1~5��������֣�����Ӧ�����û�������ȷ��ѡ�Ȼ�����ظ���ʾ�˵���ʾ�û����롣
//ʹ��#define�������ų�����ʾ�����ʵȼ���˰�ʡ�

#include <stdio.h>

#define WAGE1 8.75
#define WAGE2 9.33
#define WAGE3 10.00
#define WAGE4 11.20
#define TIME 40
#define OVERT 1.5
#define TAX1 0.15
#define TAX2 0.2
#define TAX3 0.25
#define TAXR1 300
#define TAXR2 450

int request(void);

int main()
{
	int choice;
	float w_t, wage, tax, p_w, w_rate;
	
	while ((choice = request()) != 5)
	{
		switch (choice)
		{
		case 1:
			w_rate = WAGE1;
			break;
		case 2:
			w_rate = WAGE2;
			break;
		case 3:
			w_rate = WAGE3;
			break;
		case 4:
			w_rate = WAGE4;
			break;
		default:
			printf("\nillegal input!\n");
			continue;
		}

		printf("How many time you work for a week:");
		scanf("%f", &w_t);
		if (w_t <= TIME)
			wage = w_t * w_rate;
		else
			wage = w_rate * (TIME + (w_t - TIME) * OVERT);

		if (wage <= TAXR1)
			tax = wage * TAX1;
		else if (wage <= TAXR2)
			tax = TAXR1 * TAX1 + (wage - TAXR1) * TAX2;
		else
			tax = TAXR1 * TAX1 + TAXR2 * TAX2 + (wage - TAXR2) * TAX3;
		p_w = wage - tax;

		printf("\nw_rate:%-7.2f wage:%-7.2f\ntax:%-7.2f pure wage:%-7.2f\n", w_rate, wage, tax, p_w);
	}
	printf("Done");
	return 0;
}

int request(void)
{
	int choice;
	printf("\n*****************************************************************\n");
	printf("\nEnter the number corresponding to the desired pay rate or action:\n");
	printf("1) $8.75/hr                          2) $9.33/hr\n");
	printf("3) $10.00/hr                         4) $11.20/hr\n5) quit\n");
	printf("*****************************************************************\n");
	scanf("%d", &choice);
	return choice;
}