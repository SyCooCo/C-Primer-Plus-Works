#define _CRT_SECURE_NO_WARNINGS 1
//��дһ��������ʾ�û�������ߣ���λ���ף���������
//Ȼ��������ĸ�ʽ��ʾ�û����������Ϣ��
/*
Dabney, you are 1.78 metre tall
*/
//ʹ��float���ͣ�����/��Ϊ���š������Ը�⣬����Ҫ���û�������Ϊ��λ������ߣ�
//������Ϊ��λ��ʾ������

#include <stdio.h>

int main()
{
	float height;
	char name[50];
	printf("your name��");
	scanf("%s", name);
	printf("your height��___cm\b\b\b\b\b");
	scanf("%f", &height);
	printf("%s, you are %.2f metre tall", name , height/100);
	return 0;
}