#define _CRT_SECURE_NO_WARNINGS 1
//1Ӣ���൱��2.54���ס���дһ��������ʾ�û�������ߣ�/Ӣ�磩��Ȼ��������Ϊ��λ��ʾ��ߡ�
//���µ�������İ�

#include <stdio.h>

int main()
{
	float inch;
	float cm;
	printf("�����������ߣ�   (Ӣ��)\b\b\b\b\b\b\b\b\b\b");
	scanf("%f", &inch);
	cm = inch * 2.54;
	printf("\n�����%.2f����", cm);
	return 0;
}