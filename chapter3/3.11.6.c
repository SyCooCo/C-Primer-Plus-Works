#define _CRT_SECURE_NO_WARNINGS 1
//1��ˮ���ӵ�����ԼΪ3.0*10^-23�ˡ�1����ˮ�����950�ˡ�
//��дһ��������ʾ�û�����ˮ�Ŀ�����������ʾˮ���ӵ�������

#include <stdio.h>

int main()
{
	float kt;
	float kg;
	float num;
	printf("������ˮ�Ŀ�������");
	scanf("%f", &kt);
	kg = kt * 950;
	num = kg / 3e-23;
	printf("��֮����%e��ˮ����", num);
	return 0;
}