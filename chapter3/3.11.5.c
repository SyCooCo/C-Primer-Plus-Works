#define _CRT_SECURE_NO_WARNINGS 1
//һ������3.156*10^7�롣��дһ��������ʾ�û��������䣬Ȼ����ʾ�������Ӧ��������

#include <stdio.h>

int main()
{
	int age;
	float s_age;
	printf("������������䣺");
	scanf("%d", &age);
	s_age = age * 3.156e7;
	printf("\n���ž�����%e��", s_age);
	return 0;
}