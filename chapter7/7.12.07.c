#define _CRT_SECURE_NO_WARNINGS 1
//��дһ��������ʾ�û�����һ�ܹ�����Сʱ����Ȼ���ӡ�����ܶ˰��;����롣
//�����¼��裺
/*
a. �������� = 10.00��Ԫ/Сʱ
b. �Ӱࣨ����40Сʱ��= 1.5����ʱ��
c. ˰�ʣ�   ǰ300��ԪΪ15%
			��150��ԪΪ20%
			���µ�Ϊ25%
*/
//��#define������ų��������������Ƿ���ϵ�ǰ��˰����

#include <stdio.h>

#define WAGE 10.00
#define TIME 40
#define OVERT 1.5
#define TAX1 0.15
#define TAX2 0.2
#define TAX3 0.25
#define TAXR1 300
#define TAXR2 450

int main()
{
	float w_t, wage, tax, p_w;
	printf("How many time you work for a week:");
	scanf("%f", &w_t);
	
	if (w_t <= TIME)
		wage = w_t * WAGE;
	else
		wage = WAGE * (TIME + (w_t - TIME) * OVERT);

	if (wage <= TAXR1)
		tax = wage * TAX1;
	else if (wage <= TAXR2)
		tax = TAXR1 * TAX1 + (wage - TAXR1) * TAX2;
	else
		tax = TAXR1 * TAX1 + TAXR2 * TAX2 + (wage - TAXR2) * TAX3;
	p_w = wage - tax;

	printf("\nwage:%f\ntax:%f\npure wage:%f", wage, tax, p_w);
	return 0;
}