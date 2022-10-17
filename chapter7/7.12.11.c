#define _CRT_SECURE_NO_WARNINGS 1
//ABC�����ӻ�����۵����ۼ�Ϊ2.05��Ԫ/��������ۼ�Ϊ1.15��Ԫ/�������ܲ��ۼ�Ϊ1.09��Ԫ/����������˷�֮ǰ��100��Ԫ�Ķ�����5%�Ĵ����Żݡ�
//���ڻ����5���Ķ�����ȡ6.5��Ԫ���˷ѺͰ�װ�ѣ�5��~20���Ķ�����ȡ14��Ԫ���˷ѺͰ�װ�ѣ�����20���Ķ�����14��Ԫ�Ļ�����ÿ����1������0.5��Ԫ��
//��дһ��������ѭ������switch���ʵ���û����벻ͬ����ĸʱ�в�ͬ����Ӧ��������a����Ӧ�����û������󼻵İ�����b����˵İ�����c�Ǻ��ܲ��İ�����q���˳�������
//����Ҫ��¼�ۻ�����������������û�����4������ˣ�Ȼ������5������ˣ�����Ӧ����9������ˡ�Ȼ�󣬸ó���Ҫ��������ܼۡ��ۿۣ�����еĻ������˷ѺͰ�װ�ѡ�
//��󣬳���Ӧ��ʾ���еĹ�����Ϣ����Ʒ�ۼۡ���������������λ���������������߲˷��á��������ܷ��á��ۿۣ�����еĻ������˷ѺͰ�װ�ѣ��Լ����еķ����ܶ

#include <stdio.h>
#define YJ 2.05
#define TC 1.15
#define HLB 1.09
#define H_DC 100
#define DISCOUNT 0.05
#define WEIGHT1 5
#define WEIGHT2 20
#define FARE1 6.5
#define FARE2 14
#define FAREn 0.5

void view(float na, float nb, float nc);

int main()
{
	char choice, i;
	float na, nb, nc, n;
	na = nb = nc = 0;
	view(na, nb, nc);
	while ((choice = getchar()) != 'q')
	{
		switch (choice)
		{
		case 'a':
			scanf("%f", &n);
			na += n;
			break;
		case 'b':
			scanf("%f", &n);
			nb += n;
			break;
		case 'c':
			scanf("%f", &n);
			nc += n;
			break;
		default:
			printf("\n�Ƿ����룡\n���������룺");
			continue;
		}
		while ((i = getchar()) != '\n')
			continue;
		view(na, nb, nc);
	}
	printf("\n��ӭ�´ι��٣�\n");
	return 0;
}

void view(float na, float nb, float nc)
{
	float weight, discount, total_v, total, fare;
	weight = na + nb + nc;
	total_v = na * YJ + nb * TC + nc * HLB;
	if (total_v >= H_DC)
		discount = total_v * DISCOUNT;
	else
		discount = 0;
	total = total_v - discount;
	if (weight == 0)
		fare = 0;
	else if (weight <= WEIGHT1)
		fare = FARE1;
	else if (weight <= WEIGHT2)
		fare = FARE2;
	else
		fare = FARE2 + (weight - WEIGHT2) * FAREn;

	printf("\n*****************************************************************************\n");
	printf("��ӭ����ABC�����ӻ��궩������\n");
	printf("a)  �� 2.05��Ԫ/��                          b)  ��� 1.15��Ԫ/��\n");
	printf("c)  ���ܲ� 1.09��Ԫ/��                        q)  �˳�����\n");
	printf("*****************************************************************************\n");
	printf("����ǰ�Ĺ�����Ϣ��\n");
	printf("�󼻣�%-6.2f��             ��ˣ�%-6.2f��             ���ܲ���%-6.2f��\n", na, nb, nc);
	printf("���أ�%-6.2f��                                ����%-6.2f��Ԫ\n", weight, total_v);
	printf("�������ã�%-6.2f��Ԫ                          �ۿۣ�%-6.2f��Ԫ\n", total, discount);
	printf("�˷ѺͰ�װ�ѣ�%-6.2f��Ԫ                      �ܼƣ�%-6.2f��Ԫ\n", fare, total + fare);
	printf("*****************************************************************************\n");
}