#define _CRT_SECURE_NO_WARNINGS 1
//��дһ������Ҫ���û���������������������ӡ����֮����������˻��Ľ����
//���û����������֮ǰ������Ӧѭ�������û������ÿ��ֵ��

#include <stdio.h>

int main()
{
	float num1, num2;
	int i;
	printf("Input 2 numbers:\n");
	i = scanf("%f %f", &num1, &num2);
	do
	{
		printf("%f\n", (num1 - num2) / (num1 * num2));
		printf("Input 2 numbers:\n");
		i = scanf("%f %f", &num1, &num2);
	} while (i != 0);
	return 0;
}