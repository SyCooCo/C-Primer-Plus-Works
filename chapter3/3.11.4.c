#define _CRT_SECURE_NO_WARNINGS 1
//��дһ�����򣬶�ȡһ�����������ȴ�ӡ��С����ʽ���ٴ�ӡ��ָ����ʽ��
//Ȼ�����ϵͳ֧�֣��ٴ�ӡ��p����������ʮ�����Ƽ���������
//�����¸�ʽ�����ʵ����ʾ��ָ��λ����ϵͳ���죩��
/*
Enter a floating-point value: 64.25
fixed-point notation: 64.250000
exponential notation: 6.425000e+01
p notation: 0x1.01p+6
*/

#include <stdio.h>

int main(void)
{
	float a;
	printf("Enter a floating-point value: ");
	scanf("%f", &a);
	printf("\nfixed-point notation: %f", a);
	printf("\nexponential notation: %e", a);
	printf("\np notation: %a", a);
	return 0;
}