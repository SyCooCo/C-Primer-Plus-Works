#define _CRT_SECURE_NO_WARNINGS 1
//��дһ������Ҫ���û�����һ�������¶ȡ�
//����Ӧ��ȡdouble���͵�ֵ��Ϊ�¶�ֵ��
//���Ѹ�ֵ��Ϊһ���������ݸ�һ���û��Զ���ĺ���Temperatures()��
//�ú������������¶ȺͿ����¶ȣ�����С���������λ���ֵľ�����ʾ3���¶ȡ�
//Ҫʹ�ò�ͬ���±�����ʾ��3���¶�ֵ��
//�����ǻ����¶�ת�������¶ȵĹ�ʽ��
//�����¶� =5.0/9.0*(�����¶� -32.0)
//�����ı곣���ڿ�ѧ�о���0��ʾ�����㣬������͵��¶ȡ�
//�����������¶�ת�����¶ȵĹ�ʽ��
//�����¶� = �����¶� +273.16
//Temperatures()��������const�����¶�ת����ʹ�õı�����
//��main()������ʹ��һ��ѭ�����û��ظ������¶ȣ����û�����q������������ʱ��ѭ��������
//scanf()�������ض�ȡ���ݵ����������������ȡ�����򷵻�1�������ȡq�򲻷���1��
//����ʹ��==�������scanf()�ķ���ֵ��1���Ƚϣ�������ֵ�Ƿ���ȡ�

#include <stdio.h>

double Temperatures(double h);

int main()
{
	double h, check;
	printf("h:");
	check = scanf("%lf", &h);
	while (check == 1)
	{
		Temperatures(h);
		printf("h:");
		check = scanf("%lf", &h);
	}
	printf("Done");
	return 0;
}

double Temperatures(double h)
{
	const double a = 5.0 / 9.0;
	const double b = 32.0;
	const double c = 273.6;
	double s = a * (h - b);
	double k = s + c;
	printf("\nh:%.2f\ns:%.2f\nk:%.2f\n\n", h, s, k);
}